#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rs232.h"
#include <iostream>
#include <fcntl.h>
#include <QDebug>
#include <QIODevice>


using namespace std;

bool init=false;


RS232::RS232(QextPortInfo port)
{
    portName=port;
    qDebug()<<"PORT linked "<<portName.friendName<<" "<<portName.physName<<" "<<portName.portName;
}

void RS232::init_serial_input(){
    qDebug()<<portName.portName;
    port = new QextSerialPort(portName.portName);
    port->setBaudRate(BAUD38400);
    port->setDataBits(DATA_8);
    port->setFlowControl(FLOW_OFF);
    port->setParity(PAR_NONE);
    port->setStopBits(STOP_1);
    qDebug()<<"here";
    connect(port, SIGNAL(readyRead()), this, SLOT(onDataAvailable()));
    QIODevice::OpenMode openMode=QIODevice::ReadOnly|QIODevice::WriteOnly;
    port->open(openMode);

}

void RS232::onDataAvailable()
    {
        QByteArray data = port->readAll();
        qDebug()<<"data read : "<<data;
        emit dataReaded(QString(data));
    }

void RS232::writeTo(QString data){
    qDebug()<<"write Data"<<data;
    port->write(data.append("\n\r").toAscii());
}

void RS232::closePort(){
    qDebug()<<"Port COM Close";
    port->close();
}
