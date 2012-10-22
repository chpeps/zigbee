#ifndef RS232_H
#define RS232_H

#include <QMainWindow>
#include "qextserialport.h"
#include "qextserialenumerator.h"

class RS232 : public QObject
{
    Q_OBJECT
public:
    RS232( QextPortInfo port);

public slots:
        void init_serial_input();
        void writeTo(QString data);
        void closePort();
        void onDataAvailable();
signals:
    void dataReaded(QString text);
private:
    QextPortInfo portName;
    QextSerialPort *port;
};

#endif // RS232_H
