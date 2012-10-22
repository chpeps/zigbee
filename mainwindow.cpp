#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rs232.h"
#include "stdio.h"
#include <QThread>
#include <QtDebug>
#include <QFuture>
#include <QtConcurrentRun>
#include <QtConcurrentMap>

#include <iostream>
#include <dirent.h>
#include <list>

#ifndef WIN32
#include <sys/types.h>
#endif

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    refreshStart=false;
    ui->setupUi(this);
    //initialisation de la liste des ports com RS232
    on_RefreshpushButton_clicked();
    ui->textEdit->setReadOnly(true);
    ui->horizontalSlider->setMaximum(3);
    ui->horizontalSlider->setMinimum(-17);
    ui->horizontalSlider->setTickInterval(1);
    ui->horizontalSlider->setValue(3);
    ui->spinBox->setMinimum(200);
    ui->spinBox->setMaximum(3000000);
    ui->spinBox->setSingleStep(100);
    ui->spinBox_2->setMinimum(0);
    ui->spinBox_2->setMaximum(300000);
    ui->spinBox_2->setSingleStep(10);
    ui->label_6->setNum(3);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->label_6,SLOT(setNum(int)));
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_4->setEnabled(false);
    ui->pushButton_8->setEnabled(false);
    ui->checkBox->setEnabled(false);
    connect(ui->checkBox,SIGNAL(clicked(bool)),ui->lineEdit_2,SLOT(setEnabled(bool)));
    connect(ui->checkBox,SIGNAL(clicked(bool)),ui->lineEdit_4,SLOT(setEnabled(bool)));
    connect(ui->checkBox,SIGNAL(clicked(bool)),ui->pushButton_8,SLOT(setEnabled(bool)));
    ui->comboBox_3->addItem("",QVariant());
    for(int i=1;i<255;i++){ //valeur max 18 446 744 073 709 551 615
        QString macAdress = QString("%1").arg(i, 0, 16);
        ui->comboBox_3->addItem(macAdress,QVariant());
    }
    ui->comboBox_4->addItem("",QVariant());
    for(int i=0;i<255;i++){ //valeur max 65 535
        QString macAdress = QString("%1").arg(i, 0, 16);
        ui->comboBox_4->addItem(macAdress,QVariant());
    }
    ui->comboBox_5->addItem("",QVariant());
    for(int i=0;i<255;i++){ //valeur max 18 446 744 073 709 551 615
        QString macAdress = QString("%1").arg(i, 0, 16);
        ui->comboBox_5->addItem(macAdress,QVariant());
    }
    enumPort = new QextSerialEnumerator();
    enumPort->connect(enumPort,SIGNAL(deviceDiscovered(QextPortInfo)),this,SLOT(on_RefreshpushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
    emit close();
}

void MainWindow::on_RefreshpushButton_clicked()
{
    ui->comboBox_com_port->clear();

    listPort=enumPort->getPorts();
    qDebug()<<listPort.length()<<" "<<listPort.size();
    for(int i=listPort.size()-1;i>=0;i--){
        qDebug()<<i;
        ui->comboBox_com_port->addItem(listPort.at(i).portName,QVariant());
    }
}

void MainWindow::on_SendpushButton_clicked()
{
    QString toSend = ui->lineEdit->text();
    emit write(toSend);
}
QString MainWindow::getDeviceInfo(QString trame,QString cmd){
    QString deviceInfo=trame.mid(trame.indexOf(cmd)+cmd.length(),trame.indexOf("OK",trame.indexOf(cmd))-(cmd.length()+trame.indexOf(cmd)));
    qDebug()<<"deviceinfo : "<<deviceInfo.trimmed();
    return deviceInfo.trimmed();
}

bool MainWindow::isValidTrame(QString trame,QString cmd){
    return (trame.indexOf(cmd)>-1)&& (trame.indexOf("OK",trame.indexOf(cmd))>-1);
}

QString textToAnalyse="";
void MainWindow::changerText(const QString newText){
    textToAnalyse.append(newText);
    QString textToAppend=newText;
    //textToAppend.replace("\n",".").replace("\r",".").append("\n");
    ui->textEdit->append(textToAppend);
    qDebug()<<"textToAnalyse:"<<textToAnalyse;
    if(textToAnalyse.trimmed().indexOf("OK")>-1){
        textToAnalyse=textToAnalyse.trimmed();
        if(isValidTrame(textToAnalyse,"ATI0")){
            ui->label_5->setText(getDeviceInfo(textToAnalyse,"ATI0"));
            emit write("AT+GSN?");
        }
        if (isValidTrame(textToAnalyse,"AT+WNB 3")){
            ui->comboBox->clear();
            QStringList allNode =getDeviceInfo(textToAnalyse,"AT+WNB 3").split("\n", QString::SkipEmptyParts);
            for (int i=0; i < allNode.length(); i++)  {
                QStringList nodeInfo=allNode.at(i).split("|", QString::SkipEmptyParts);
                QString seqNr = nodeInfo.at(0);
                QString nodeRole = nodeInfo.at(1);
                QString extAddr = nodeInfo.at(2);
                QString nwkAddr = nodeInfo.at(3);
                QString relationship = nodeInfo.at(4);
                QString depth = nodeInfo.at(5);
                qDebug()<<"seqNr "<<seqNr<<"node";
                QString nodeRoleString = "";
                switch(nodeRole.toInt()){
                case 0:
                    nodeRoleString="Coordinateur";
                    break;
                case 1:
                    nodeRoleString="Router";
                    break;
                case 2:
                    nodeRoleString="End device";
                    break;
                }

                ui->comboBox->addItem(extAddr+"|"+nwkAddr+"|"+nodeRoleString);
            }
        }
        if(isValidTrame(textToAnalyse,"AT+GSN?")){
            bool ok;
            ui->comboBox_3->setCurrentIndex(getDeviceInfo(textToAnalyse,"AT+GSN?").split(":").at(1).toUInt(&ok,16));
            emit write("AT+WSRC?");
        }
        if(isValidTrame(textToAnalyse,"AT+WSRC?")){
            bool ok;
            ui->comboBox_4->setCurrentIndex(getDeviceInfo(textToAnalyse,"AT+WSRC?").split(":").at(1).toUInt(&ok,16)+1);
            emit write("AT+WPANID?");
        }
        if(isValidTrame(textToAnalyse,"AT+WPANID?")){
            bool ok;
            ui->comboBox_5->setCurrentIndex(getDeviceInfo(textToAnalyse,"AT+WPANID?").split(":").at(1).toUInt(&ok,16)+1);
            emit write("AT+WCHMASK?");
        }
        if(isValidTrame(textToAnalyse,"AT+WCHMASK?")){
            ui->comboBox_6->setCurrentIndex(ui->comboBox_6->findText(getDeviceInfo(textToAnalyse,"AT+WCHMASK?").split(":").at(1)));
            emit write("AT+WROLE?");
        }
        if(isValidTrame(textToAnalyse,"AT+WROLE?")){
            bool ok;
            ui->comboBox_2->setCurrentIndex(getDeviceInfo(textToAnalyse,"AT+WROLE?").split(":").at(1).toInt(&ok,10)+1);
            //emit write("AT+WSECON?");//dont work sur le produit actuel
            emit write("AT+WAUTONET?");
        }
        if(isValidTrame(textToAnalyse,"AT+WSECON?")){
            bool ok;
            if(getDeviceInfo(textToAnalyse,"AT+WSECON?").split(":").at(1).toInt(&ok,10)==1){
                ui->checkBox->setChecked(true);
                emit write("AT+WNETKEY?");
            }else{
                ui->checkBox->setChecked(false);
                emit write("AT+WAUTONET?");
            }
        }
        if(isValidTrame(textToAnalyse,"AT+WNETKEY?")){
            QString deviceInfo=getDeviceInfo(textToAnalyse,"AT+WNETKEY?");
            bool ok;
            QStringList listString = deviceInfo.split(":").at(1).split(",");
            ui->lineEdit_2->setText(listString.at(0).trimmed());
            ui->lineEdit_4->setText(listString.at(1).trimmed());
            emit write("AT+WAUTONET?");
        }
        if(isValidTrame(textToAnalyse,"AT+WAUTONET?")){
            bool ok;
            if(getDeviceInfo(textToAnalyse,"AT+WAUTONET?").split(":").at(1).toInt(&ok,10)==1){
                ui->checkBox_2->setChecked(true);
            }else{
                ui->checkBox_2->setChecked(false);
            }
            emit write("AT+WPWR?");
        }
        if(isValidTrame(textToAnalyse,"AT+WPWR?")){
            bool ok;
            QStringList listString=getDeviceInfo(textToAnalyse,"AT+WPWR?").split(":").at(1).split(",");
            ui->spinBox->setValue(listString.at(0).toInt(&ok,10)*100);
            ui->spinBox_2->setValue(listString.at(1).toInt(&ok,10)*10);
            emit write("AT+WTXPWR?");
        }
        if(isValidTrame(textToAnalyse,"AT+WTXPWR?")){
            bool ok;
            ui->horizontalSlider->setValue(getDeviceInfo(textToAnalyse,"AT+WTXPWR?").split(":").at(1).toInt(&ok,10));
            qDebug()<<"end refresh all";
            emit write("ATX");
            refreshStart=false;
        }
        if(isValidTrame(textToAnalyse,"AT+WRSSI")){
            bool ok;
            ui->label_14->setText(getDeviceInfo(textToAnalyse,"AT+WRSSI").split(":").at(1));
        }
        if(isValidTrame(textToAnalyse,"AT+WLQI")){
            bool ok;
            ui->label_12->setText(getDeviceInfo(textToAnalyse,"AT+WLQI").split(":").at(1));
        }
        qDebug()<<"initialisation du QString textToAnalyse with OK";
        if(textToAnalyse.trimmed().endsWith("OK"))
            textToAnalyse="";
    }else if(textToAnalyse.trimmed().endsWith("ERROR")){
        qDebug()<<"initialisation du QString textToAnalyse with ERROR";
        textToAnalyse="";
        refreshStart=false;
    }
}

void MainWindow::on_connecterPort_clicked()
{
    RS232 *port=new RS232(listPort.at((listPort.size()-1)-ui->comboBox_com_port->currentIndex()));
    QThread *threadCOM=new QThread;
    port->moveToThread(threadCOM);
    QObject::connect(port,SIGNAL(dataReaded(QString)),this,SLOT(changerText(QString)));
    QObject::connect(this,SIGNAL(initSerial()),port,SLOT(init_serial_input()));
    QObject::connect(this,SIGNAL(write(QString)),port,SLOT(writeTo(QString)));
    QObject::connect(this,SIGNAL(close()),port,SLOT(closePort()));
    threadCOM->start();
    emit initSerial();
    ui->connecterPort->setText("OK");
}

void MainWindow::on_closePort_clicked()
{
    ui->connecterPort->setText("Connecter");
    if(!refreshStart)
        emit close();
}

void MainWindow::on_horizontalSlider_sliderMoved(int position)
{
    QString trame= "AT+WTXPWR="+QString::number(position);
    if(!refreshStart)
        emit write(trame);
}

void MainWindow::on_pushButton_6_clicked()
{
    //connect(port,SIGNAL(dataReaded(QString)),this,ui->label_5,SLOT(setText(QString)));
    refreshStart=true;
    emit write("ATI0");
}

void MainWindow::on_pushButton_7_clicked()
{
    if(!refreshStart)
        emit write("AT+WNB 3");
}

void MainWindow::on_pushButton_clicked()
{
    if(!refreshStart)
        emit write("AT+WJOIN");
}

void MainWindow::on_pushButton_2_clicked()
{
    if(!refreshStart)
        emit write("AT+WLEAVE");
}

void MainWindow::on_checkBox_2_clicked(bool checked)
{
    if(!refreshStart)
        if(checked)
            emit write("AT+WAUTONET=1");
        else
            emit write("AT+WAUTONET=0");
}

void MainWindow::on_comboBox_2_currentIndexChanged(int index)
{
    if(!refreshStart)
        if(index>0)
            emit write("AT+WROLE="+QString::number(index-1));
}

void MainWindow::on_pushButton_5_clicked()
{
    if(!refreshStart)
        emit write("AT&F");
}

void MainWindow::on_comboBox_3_currentIndexChanged(const QString &arg1)
{
    if(!refreshStart)
        if(arg1!=""){
            emit write("AT+GSN="+arg1);
        }
}

void MainWindow::on_comboBox_4_currentIndexChanged(const QString &arg1)
{
    if(!refreshStart)
        if(arg1!=""){
            emit write("AT+WSRC="+arg1);
        }
}

void MainWindow::on_comboBox_5_currentIndexChanged(const QString &arg1)
{
    if(!refreshStart)
        if(arg1!=""){
            emit write("AT+WPANID="+arg1);
        }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(ui->comboBox->currentText()!=""){
        QString nodeToPing=ui->comboBox->currentText();
        if(!refreshStart)
            emit write("AT+WPING "+nodeToPing.split("|",QString::SkipEmptyParts).at(1));
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(ui->comboBox->currentText()!=""){
        QString nodeToPing=ui->comboBox->currentText();
        QString textToSend = ui->lineEdit_3->text();
        if(!refreshStart)
            emit write("ATD "+nodeToPing.split("|",QString::SkipEmptyParts).at(1)+",1,"+QString::number(textToSend.length()));
        if(!refreshStart)
            emit write(textToSend);
    }
}

void MainWindow::on_comboBox_6_currentIndexChanged(const QString &arg1)
{
    if(!refreshStart)
        if(arg1!=""){
            emit write("AT+WCHMASK="+arg1);
        }
}

void MainWindow::on_checkBox_clicked(bool checked)
{
    if(!refreshStart)
        if(checked)
            emit write("AT+WSECON=1");
        else
            emit write("AT+WSECON=0");
}

void MainWindow::on_pushButton_8_clicked()
{
    if(!refreshStart)
        emit write("AT+WNETKEY="+ui->lineEdit_2->text()+","+ui->lineEdit_4->text());
}

void MainWindow::on_pushButton_9_clicked()
{
    if(ui->comboBox->currentText()!=""){
        QString textToSend = ui->lineEdit_3->text();
        if(!refreshStart)
            emit write("ATDU "+QString::number(textToSend.length()));
        if(!refreshStart)
            emit write(textToSend);
    }
}

void MainWindow::on_pushButton_11_clicked()
{
    if(ui->comboBox->currentText()!=""){
        QString nodeToPing=ui->comboBox->currentText().split("|",QString::SkipEmptyParts).at(1);
        QString cmd = ui->comboBox_7->currentText();
        if(cmd=="+WRSSI"||cmd=="+WLQI")
            cmd.append(" "+nodeToPing);
        if(!refreshStart)
            emit write("ATR"+nodeToPing+","+ui->lineEdit_6->text()+","+cmd);
    }
}

void MainWindow::on_pushButton_12_clicked()
{
    if(ui->comboBox->currentText()!=""){
        QString nodeToPing=ui->comboBox->currentText().split("|",QString::SkipEmptyParts).at(1);
        if(!refreshStart){
            emit write("AT+WRSSI "+nodeToPing);
            emit write("AT+WLQI "+nodeToPing);
        }
    }
}

void MainWindow::on_pushButton_10_clicked()
{
    if(!refreshStart)
        emit write("AT+WPASSWORD "+ui->lineEdit_5->text());
}

void MainWindow::on_pushButton_13_clicked()
{
    if(!refreshStart)
        emit write("AT+WPWR="+QString::number((int)(ui->spinBox->value()/100))+","+QString::number((int)(ui->spinBox_2->value()/10)));
}

void MainWindow::on_pushButton_15_clicked()
{

}
