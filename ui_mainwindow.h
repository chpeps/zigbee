/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Oct 9 15:29:28 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QLabel *label_5;
    QPushButton *pushButton_6;
    QTextEdit *textEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QLabel *label_9;
    QComboBox *comboBox_5;
    QLabel *label_10;
    QComboBox *comboBox_6;
    QLabel *label_7;
    QComboBox *comboBox_2;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_8;
    QLabel *label_17;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QCheckBox *checkBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QSlider *horizontalSlider;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QLabel *label_6;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox_com_port;
    QPushButton *RefreshpushButton;
    QPushButton *closePort;
    QPushButton *connecterPort;
    QPushButton *pushButton_15;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *SendpushButton;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_10;
    QLabel *label_3;
    QComboBox *comboBox_7;
    QPushButton *pushButton_11;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *pushButton_12;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QSpinBox *spinBox;
    QPushButton *pushButton_13;
    QSpinBox *spinBox_2;
    QLabel *label_18;
    QLabel *label_19;
    QPushButton *pushButton_14;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1111, 645);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(980, 550, 114, 32));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(520, 380, 261, 201));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 30, 231, 161));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 20, 114, 32));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 170, 491, 421));
        textEdit->setReadOnly(true);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(520, 1, 401, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 0, 1, 1, 1);

        comboBox_4 = new QComboBox(gridLayoutWidget);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 0, 3, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        comboBox_5 = new QComboBox(gridLayoutWidget);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 1, 1, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        comboBox_6 = new QComboBox(gridLayoutWidget);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout->addWidget(comboBox_6, 2, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 1);

        checkBox = new QCheckBox(gridLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        gridLayout->addWidget(checkBox, 4, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 4, 1, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 5, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 4, 2, 1, 2);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout->addWidget(label_17, 0, 2, 1, 1);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(520, 194, 341, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        checkBox_2 = new QCheckBox(horizontalLayoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(520, 250, 581, 137));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_2->addWidget(comboBox, 0, 0, 1, 2);

        lineEdit_3 = new QLineEdit(gridLayoutWidget_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_2->addWidget(lineEdit_3, 1, 0, 1, 4);

        horizontalSlider = new QSlider(gridLayoutWidget_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 3, 0, 1, 2);

        pushButton_3 = new QPushButton(gridLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout_2->addWidget(pushButton_9, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout_2->addWidget(pushButton_7, 0, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 3, 3, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_2->addWidget(pushButton_4, 2, 2, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralWidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 10, 481, 81));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        comboBox_com_port = new QComboBox(gridLayoutWidget_3);
        comboBox_com_port->setObjectName(QString::fromUtf8("comboBox_com_port"));

        gridLayout_3->addWidget(comboBox_com_port, 0, 0, 1, 2);

        RefreshpushButton = new QPushButton(gridLayoutWidget_3);
        RefreshpushButton->setObjectName(QString::fromUtf8("RefreshpushButton"));

        gridLayout_3->addWidget(RefreshpushButton, 0, 2, 1, 1);

        closePort = new QPushButton(gridLayoutWidget_3);
        closePort->setObjectName(QString::fromUtf8("closePort"));

        gridLayout_3->addWidget(closePort, 1, 2, 1, 1);

        connecterPort = new QPushButton(gridLayoutWidget_3);
        connecterPort->setObjectName(QString::fromUtf8("connecterPort"));

        gridLayout_3->addWidget(connecterPort, 1, 1, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget_3);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));

        gridLayout_3->addWidget(pushButton_15, 1, 0, 1, 1);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 120, 481, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        SendpushButton = new QPushButton(horizontalLayoutWidget_2);
        SendpushButton->setObjectName(QString::fromUtf8("SendpushButton"));

        horizontalLayout_2->addWidget(SendpushButton);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(790, 380, 311, 171));
        gridLayoutWidget_4 = new QWidget(groupBox_2);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(5, 30, 301, 131));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget_4);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_4->addWidget(lineEdit_5, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget_4);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout_4->addWidget(lineEdit_6, 1, 1, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_4->addWidget(pushButton_10, 0, 2, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        comboBox_7 = new QComboBox(gridLayoutWidget_4);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_4->addWidget(comboBox_7, 2, 1, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout_4->addWidget(pushButton_11, 2, 2, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(950, 0, 141, 131));
        gridLayoutWidget_5 = new QWidget(groupBox_3);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(10, 30, 121, 91));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(gridLayoutWidget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_5->addWidget(label_11, 0, 0, 1, 1);

        label_12 = new QLabel(gridLayoutWidget_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_5->addWidget(label_12, 0, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 1, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 1, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_5);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_5->addWidget(label_15, 1, 2, 1, 1);

        label_16 = new QLabel(gridLayoutWidget_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 0, 2, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_5->addWidget(pushButton_12, 2, 0, 1, 3);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(930, 130, 171, 121));
        gridLayoutWidget_6 = new QWidget(groupBox_4);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(6, 22, 164, 92));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(gridLayoutWidget_6);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        gridLayout_6->addWidget(spinBox, 1, 0, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget_6);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout_6->addWidget(pushButton_13, 2, 0, 1, 1);

        spinBox_2 = new QSpinBox(gridLayoutWidget_6);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        gridLayout_6->addWidget(spinBox_2, 1, 1, 1, 1);

        label_18 = new QLabel(gridLayoutWidget_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_6->addWidget(label_18, 0, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_6->addWidget(label_19, 0, 1, 1, 1);

        pushButton_14 = new QPushButton(gridLayoutWidget_6);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout_6->addWidget(pushButton_14, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1111, 22));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ZigBee DEV", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("MainWindow", "RESET", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Devices informations", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "NONE", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("MainWindow", "Rafraichi toutes les information du module connect\303\251 par RS232", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_8->setToolTip(QApplication::translate("MainWindow", "Adresse MAC du module", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("MainWindow", "@MAC :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("MainWindow", "Numero du reseaux ZigBee", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("MainWindow", "Pane ID:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_10->setToolTip(QApplication::translate("MainWindow", "Masque des canneaux de transmission\n"
"00000800 a 07FFF800 pour 2,4GHz", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("MainWindow", "Channel mask :", 0, QApplication::UnicodeUTF8));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "00100000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "00040000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "00000800", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        label_7->setToolTip(QApplication::translate("MainWindow", "Le role de module dans l'architecture reseaux.\n"
"Coordinator\n"
"Router\n"
"End Device", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("MainWindow", "Role :", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("MainWindow", "Coordinator", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Router", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "End device", 0, QApplication::UnicodeUTF8)
        );
        checkBox->setText(QApplication::translate("MainWindow", "Security", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "OK", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_17->setToolTip(QApplication::translate("MainWindow", "Adresse ip du module", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_17->setText(QApplication::translate("MainWindow", "@IP:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "Routeur et End Device -> Rejoindre le r\303\251seau.\n"
"Coordinator -> Creer le r\303\251seau.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "Join", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "Routeur et End Device -> se deconnecter du r\303\251seau.\n"
"Coordinator -> Supprimer le r\303\251seau.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QApplication::translate("MainWindow", "Leave", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBox_2->setToolTip(QApplication::translate("MainWindow", "Routeur et End Device -> Connection d\303\250s que le r\303\251seau est disponible.\n"
"Coordinator -> Creer le r\303\251seau d\303\251s sa mise sous tension.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox_2->setText(QApplication::translate("MainWindow", "Connection automatique", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("MainWindow", "liste des modules connect\303\251s sur le r\303\251seau", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEdit_3->setToolTip(QApplication::translate("MainWindow", "Data a transmettre.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        horizontalSlider->setToolTip(QApplication::translate("MainWindow", "Reglage de la puissance de transmission", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "Send \303\240 la node selectionn\303\251e", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_9->setToolTip(QApplication::translate("MainWindow", "Send \303\240 toutes les nodes sur le r\303\251seau", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_9->setText(QApplication::translate("MainWindow", "Send to All", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("MainWindow", "Rafraichir la liste des modules connect\303\251s sur le r\303\251seau", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_7->setText(QApplication::translate("MainWindow", "Refresh node", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("MainWindow", "Puissance de transmission", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "TX power level dBm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "Ping la node selectionn\303\251e", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QApplication::translate("MainWindow", "Ping", 0, QApplication::UnicodeUTF8));
        RefreshpushButton->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
        closePort->setText(QApplication::translate("MainWindow", "Disconnect", 0, QApplication::UnicodeUTF8));
        connecterPort->setText(QApplication::translate("MainWindow", "Connect", 0, QApplication::UnicodeUTF8));
        pushButton_15->setText(QApplication::translate("MainWindow", "test", 0, QApplication::UnicodeUTF8));
        SendpushButton->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Remote", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MainWindow", "mot de passe en hexa pour une commande a distance.\n"
"Min: 00000000 Max: FFFFFFFF\n"
"ex : 12345678", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "Own pass :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_5->setToolTip(QApplication::translate("MainWindow", "mot de passe en hexa pour une commande a distance.\n"
"Min: 00000000 Max: FFFFFFFF\n"
"ex : 12345678", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("MainWindow", "mot de passe en hexa de la node selectionn\303\251e pour une commande a distance.\n"
"Min: 00000000 Max: FFFFFFFF\n"
"ex : 12345678", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("MainWindow", "Node pass:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_6->setToolTip(QApplication::translate("MainWindow", "mot de passe en hexa de la node selectionn\303\251e pour une commande a distance.\n"
"Min: 00000000 Max: FFFFFFFF\n"
"ex : 12345678", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_10->setToolTip(QApplication::translate("MainWindow", "Valide le nouveau mot de passe", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_10->setText(QApplication::translate("MainWindow", "ok", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("MainWindow", "Commande AT \303\240 transmettre \303\240 la node selection\303\251e", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindow", "AT cmd:", 0, QApplication::UnicodeUTF8));
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "IO", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "+WRSSI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "+WLQI", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "+WSRC?", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        comboBox_7->setToolTip(QApplication::translate("MainWindow", "Commande AT \303\240 transmettre \303\240 la node selection\303\251e", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_11->setToolTip(QApplication::translate("MainWindow", "Transmettre la requ\303\252te", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_11->setText(QApplication::translate("MainWindow", "send", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Link Quality Indicator", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("MainWindow", "Qualit\303\251 du reseaux entre le module connect\303\251 en RS232 et la Node selectionn\303\251e.\n"
"0 - Bad\n"
"255 - good", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("MainWindow", "LQI:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_12->setToolTip(QApplication::translate("MainWindow", "Qualit\303\251 du reseaux entre le module connect\303\251 en RS232 et la Node selectionn\303\251e.\n"
"0 - Bad\n"
"255 - good", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_12->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_13->setToolTip(QApplication::translate("MainWindow", "puissance du reseaux entre le module connect\303\251 en RS232 et la Node selectionn\303\251e.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_13->setText(QApplication::translate("MainWindow", "RSSI:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QApplication::translate("MainWindow", "puissance du reseaux entre le module connect\303\251 en RS232 et la Node selectionn\303\251e.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_15->setToolTip(QApplication::translate("MainWindow", "puissance du reseaux entre le module connect\303\251 en RS232 et la Node selectionn\303\251e.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("MainWindow", "dBm", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_16->setToolTip(QApplication::translate("MainWindow", "Qualit\303\251 du reseaux entre le module connect\303\251 en RS232 et la Node selectionn\303\251e.\n"
"0 - Bad\n"
"255 - good", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_16->setText(QApplication::translate("MainWindow", "0-255", 0, QApplication::UnicodeUTF8));
        pushButton_12->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Sleep(ms)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox->setToolTip(QApplication::translate("MainWindow", "temps en ms ou le module sleep", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        pushButton_13->setToolTip(QApplication::translate("MainWindow", "reglage du sleep intervals", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_13->setText(QApplication::translate("MainWindow", "OK", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox_2->setToolTip(QApplication::translate("MainWindow", "temps en ms ou le module est activ\303\251", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_18->setText(QApplication::translate("MainWindow", "sleep time", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "active time", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_14->setToolTip(QApplication::translate("MainWindow", "lancement du mode Sleep", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_14->setText(QApplication::translate("MainWindow", "Sleep", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
