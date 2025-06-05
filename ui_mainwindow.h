/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_4;
    QLineEdit *host_field;
    QLabel *label_2;
    QSpinBox *port_field;
    QPushButton *connectButton;
    QPushButton *sendButton;
    QLineEdit *message_field;
    QLabel *status_label;
    QTextEdit *chat_window;
    QLabel *label;
    QGroupBox *groupBox_2;
    QLabel *label_3;
    QSpinBox *port_field_2;
    QPushButton *startButton;
    QPushButton *stopButton;
    QLabel *label_5;
    QLineEdit *your_ip;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1106, 616);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 811, 541));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 450, 101, 31));
        host_field = new QLineEdit(groupBox);
        host_field->setObjectName(QString::fromUtf8("host_field"));
        host_field->setGeometry(QRect(20, 80, 201, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 50, 101, 18));
        port_field = new QSpinBox(groupBox);
        port_field->setObjectName(QString::fromUtf8("port_field"));
        port_field->setGeometry(QRect(250, 80, 111, 41));
        port_field->setButtonSymbols(QAbstractSpinBox::NoButtons);
        port_field->setMaximum(65535);
        connectButton = new QPushButton(groupBox);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(380, 80, 101, 41));
        sendButton = new QPushButton(groupBox);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(600, 440, 141, 51));
        message_field = new QLineEdit(groupBox);
        message_field->setObjectName(QString::fromUtf8("message_field"));
        message_field->setGeometry(QRect(150, 440, 431, 51));
        status_label = new QLabel(groupBox);
        status_label->setObjectName(QString::fromUtf8("status_label"));
        status_label->setGeometry(QRect(490, 90, 261, 21));
        chat_window = new QTextEdit(groupBox);
        chat_window->setObjectName(QString::fromUtf8("chat_window"));
        chat_window->setGeometry(QRect(20, 150, 731, 261));
        chat_window->setReadOnly(true);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 181, 18));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(830, 10, 261, 541));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 101, 18));
        port_field_2 = new QSpinBox(groupBox_2);
        port_field_2->setObjectName(QString::fromUtf8("port_field_2"));
        port_field_2->setGeometry(QRect(10, 180, 111, 41));
        port_field_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        port_field_2->setMaximum(65535);
        startButton = new QPushButton(groupBox_2);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(10, 230, 241, 41));
        stopButton = new QPushButton(groupBox_2);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setEnabled(false);
        stopButton->setGeometry(QRect(10, 280, 241, 41));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 40, 161, 18));
        your_ip = new QLineEdit(groupBox_2);
        your_ip->setObjectName(QString::fromUtf8("your_ip"));
        your_ip->setGeometry(QRect(10, 80, 201, 41));
        your_ip->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1106, 31));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        connectButton->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        status_label->setText(QCoreApplication::translate("MainWindow", "Status: No connection", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Host", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Server", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Port", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start listening", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stop listening", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Your IP:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
