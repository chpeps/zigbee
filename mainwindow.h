#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rs232.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void changerText(const QString newText);

signals:
    void readAll();
    void initSerial();
    void close();
    void write(QString data);
    
private slots:

    void on_RefreshpushButton_clicked();

    void on_SendpushButton_clicked();

    void on_connecterPort_clicked();

    void on_closePort_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_2_clicked(bool checked);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_pushButton_5_clicked();

    void on_comboBox_3_currentIndexChanged(const QString &arg1);

    void on_comboBox_4_currentIndexChanged(const QString &arg1);

    void on_comboBox_5_currentIndexChanged(const QString &arg1);

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_6_currentIndexChanged(const QString &arg1);

    void on_checkBox_clicked(bool checked);

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::MainWindow *ui;
    QString getDeviceInfo(QString trame,QString cmd);
    bool isValidTrame(QString trame,QString cmd);
    RS232 *port;
    QextSerialEnumerator *enumPort;
    QList<QextPortInfo> listPort;
    bool refreshStart;
};

#endif // MAINWINDOW_H
