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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *lblDescription;
    QLabel *lblDescriptionImg;
    QLabel *lbltemperature;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *lblWind;
    QLabel *label_9;
    QLabel *lblHumidity;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *lblCounrty_2;
    QLabel *lblCity;
    QLabel *label_15;
    QLabel *lblFeelslike;
    QLabel *label;
    QLabel *lblMax;
    QLabel *label_4;
    QLabel *lblMin;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblCountry;
    QComboBox *cmbCountry;
    QLineEdit *txtZipCode;
    QPushButton *btnGo;
    QTextEdit *txtJsonString;
    QPushButton *btnShowDetails;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 550);
        MainWindow->setMinimumSize(QSize(650, 550));
        MainWindow->setMaximumSize(QSize(820, 705));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 60, 621, 251));
        lblDescription = new QLabel(groupBox);
        lblDescription->setObjectName(QString::fromUtf8("lblDescription"));
        lblDescription->setGeometry(QRect(10, 30, 190, 25));
        lblDescription->setMinimumSize(QSize(190, 25));
        lblDescription->setMaximumSize(QSize(190, 25));
        lblDescriptionImg = new QLabel(groupBox);
        lblDescriptionImg->setObjectName(QString::fromUtf8("lblDescriptionImg"));
        lblDescriptionImg->setGeometry(QRect(250, 30, 131, 25));
        lblDescriptionImg->setMinimumSize(QSize(131, 25));
        lblDescriptionImg->setMaximumSize(QSize(131, 25));
        lbltemperature = new QLabel(groupBox);
        lbltemperature->setObjectName(QString::fromUtf8("lbltemperature"));
        lbltemperature->setGeometry(QRect(10, 60, 160, 90));
        lbltemperature->setMinimumSize(QSize(160, 90));
        lbltemperature->setMaximumSize(QSize(160, 90));
        QFont font;
        font.setPointSize(40);
        lbltemperature->setFont(font);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(190, 60, 45, 18));
        label_5->setMinimumSize(QSize(45, 18));
        label_5->setMaximumSize(QSize(45, 18));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(190, 100, 47, 45));
        label_6->setMinimumSize(QSize(47, 45));
        label_6->setMaximumSize(QSize(47, 45));
        QFont font1;
        font1.setPointSize(20);
        label_6->setFont(font1);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(250, 60, 50, 24));
        label_7->setMinimumSize(QSize(50, 24));
        label_7->setMaximumSize(QSize(50, 24));
        lblWind = new QLabel(groupBox);
        lblWind->setObjectName(QString::fromUtf8("lblWind"));
        lblWind->setGeometry(QRect(350, 60, 40, 24));
        lblWind->setMinimumSize(QSize(40, 24));
        lblWind->setMaximumSize(QSize(40, 24));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 90, 85, 24));
        label_9->setMinimumSize(QSize(85, 24));
        label_9->setMaximumSize(QSize(85, 24));
        lblHumidity = new QLabel(groupBox);
        lblHumidity->setObjectName(QString::fromUtf8("lblHumidity"));
        lblHumidity->setGeometry(QRect(350, 90, 40, 24));
        lblHumidity->setMinimumSize(QSize(40, 24));
        lblHumidity->setMaximumSize(QSize(40, 24));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(430, 60, 40, 24));
        label_11->setMinimumSize(QSize(40, 24));
        label_11->setMaximumSize(QSize(40, 24));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(430, 80, 80, 24));
        label_12->setMinimumSize(QSize(80, 24));
        label_12->setMaximumSize(QSize(80, 24));
        lblCounrty_2 = new QLabel(groupBox);
        lblCounrty_2->setObjectName(QString::fromUtf8("lblCounrty_2"));
        lblCounrty_2->setGeometry(QRect(530, 80, 40, 24));
        lblCounrty_2->setMinimumSize(QSize(40, 24));
        lblCounrty_2->setMaximumSize(QSize(40, 24));
        lblCity = new QLabel(groupBox);
        lblCity->setObjectName(QString::fromUtf8("lblCity"));
        lblCity->setGeometry(QRect(530, 60, 75, 24));
        lblCity->setMinimumSize(QSize(75, 24));
        lblCity->setMaximumSize(QSize(75, 24));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 170, 90, 24));
        label_15->setMinimumSize(QSize(90, 24));
        label_15->setMaximumSize(QSize(90, 24));
        lblFeelslike = new QLabel(groupBox);
        lblFeelslike->setObjectName(QString::fromUtf8("lblFeelslike"));
        lblFeelslike->setGeometry(QRect(120, 170, 60, 24));
        lblFeelslike->setMinimumSize(QSize(60, 24));
        lblFeelslike->setMaximumSize(QSize(60, 24));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 170, 49, 24));
        label->setMinimumSize(QSize(49, 24));
        label->setMaximumSize(QSize(49, 24));
        lblMax = new QLabel(groupBox);
        lblMax->setObjectName(QString::fromUtf8("lblMax"));
        lblMax->setGeometry(QRect(320, 170, 60, 24));
        lblMax->setMinimumSize(QSize(60, 24));
        lblMax->setMaximumSize(QSize(60, 24));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 170, 49, 24));
        label_4->setMinimumSize(QSize(49, 24));
        label_4->setMaximumSize(QSize(49, 24));
        lblMin = new QLabel(groupBox);
        lblMin->setObjectName(QString::fromUtf8("lblMin"));
        lblMin->setGeometry(QRect(500, 170, 60, 24));
        lblMin->setMinimumSize(QSize(60, 24));
        lblMin->setMaximumSize(QSize(60, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 621, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 80, 0);
        lblCountry = new QLabel(layoutWidget);
        lblCountry->setObjectName(QString::fromUtf8("lblCountry"));
        lblCountry->setMinimumSize(QSize(80, 26));
        lblCountry->setMaximumSize(QSize(80, 26));

        horizontalLayout->addWidget(lblCountry);

        cmbCountry = new QComboBox(layoutWidget);
        cmbCountry->setObjectName(QString::fromUtf8("cmbCountry"));
        cmbCountry->setMinimumSize(QSize(210, 26));
        cmbCountry->setMaximumSize(QSize(210, 26));

        horizontalLayout->addWidget(cmbCountry);

        txtZipCode = new QLineEdit(layoutWidget);
        txtZipCode->setObjectName(QString::fromUtf8("txtZipCode"));
        txtZipCode->setMinimumSize(QSize(100, 26));
        txtZipCode->setMaximumSize(QSize(100, 26));

        horizontalLayout->addWidget(txtZipCode);

        btnGo = new QPushButton(layoutWidget);
        btnGo->setObjectName(QString::fromUtf8("btnGo"));
        btnGo->setMinimumSize(QSize(70, 26));
        btnGo->setMaximumSize(QSize(70, 26));

        horizontalLayout->addWidget(btnGo);

        txtJsonString = new QTextEdit(centralwidget);
        txtJsonString->setObjectName(QString::fromUtf8("txtJsonString"));
        txtJsonString->setGeometry(QRect(10, 350, 621, 141));
        btnShowDetails = new QPushButton(centralwidget);
        btnShowDetails->setObjectName(QString::fromUtf8("btnShowDetails"));
        btnShowDetails->setGeometry(QRect(10, 320, 140, 26));
        btnShowDetails->setMinimumSize(QSize(140, 26));
        btnShowDetails->setMaximumSize(QSize(140, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 650, 21));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Current Weather", nullptr));
        lblDescription->setText(QCoreApplication::translate("MainWindow", "Weather Description", nullptr));
        lblDescriptionImg->setText(QCoreApplication::translate("MainWindow", "Weather Logo", nullptr));
        lbltemperature->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "o", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Wind", nullptr));
        lblWind->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Humidity", nullptr));
        lblHumidity->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Counrty", nullptr));
        lblCounrty_2->setText(QCoreApplication::translate("MainWindow", "USA", nullptr));
        lblCity->setText(QCoreApplication::translate("MainWindow", "Chicago", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Feels like", nullptr));
        lblFeelslike->setText(QCoreApplication::translate("MainWindow", "17.5", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        lblMax->setText(QCoreApplication::translate("MainWindow", "19", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        lblMin->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
        lblCountry->setText(QCoreApplication::translate("MainWindow", "Country", nullptr));
        btnGo->setText(QCoreApplication::translate("MainWindow", "Go", nullptr));
        btnShowDetails->setText(QCoreApplication::translate("MainWindow", "Show Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
