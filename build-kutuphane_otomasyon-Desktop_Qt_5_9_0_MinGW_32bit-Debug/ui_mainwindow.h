/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *arka_plan;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *isim;
    QLineEdit *sifresi;
    QPushButton *kullanici_giris;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *uyari;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(512, 696);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        arka_plan = new QLabel(centralWidget);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 170, 551, 471));
        arka_plan->setStyleSheet(QStringLiteral("background-image: url(:/imageler/resim1.jpg);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 60, 111, 21));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 110, 51, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Tahoma"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        isim = new QLineEdit(centralWidget);
        isim->setObjectName(QStringLiteral("isim"));
        isim->setGeometry(QRect(220, 60, 151, 21));
        isim->setStyleSheet(QLatin1String("border-color: rgb(157, 121, 12);\n"
"border-width:2px;\n"
"border-style:solid;"));
        sifresi = new QLineEdit(centralWidget);
        sifresi->setObjectName(QStringLiteral("sifresi"));
        sifresi->setGeometry(QRect(220, 100, 151, 21));
        sifresi->setStyleSheet(QLatin1String("border-color: rgb(157, 121, 12);\n"
"border-width:2px;\n"
"border-style:solid;"));
        sifresi->setEchoMode(QLineEdit::Password);
        kullanici_giris = new QPushButton(centralWidget);
        kullanici_giris->setObjectName(QStringLiteral("kullanici_giris"));
        kullanici_giris->setGeometry(QRect(220, 130, 71, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        kullanici_giris->setFont(font2);
        kullanici_giris->setStyleSheet(QStringLiteral("background-color: rgb(200, 200, 200);"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 20, 171, 20));
        QFont font3;
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QStringLiteral("color: rgb(65, 49, 1);"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 130, 71, 31));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        uyari = new QLabel(centralWidget);
        uyari->setObjectName(QStringLiteral("uyari"));
        uyari->setGeometry(QRect(30, 140, 181, 16));
        uyari->setStyleSheet(QStringLiteral("color: rgb(45, 194, 4);"));
        MainWindow->setCentralWidget(centralWidget);
        arka_plan->raise();
        label->raise();
        label_2->raise();
        isim->raise();
        sifresi->raise();
        label_3->raise();
        kullanici_giris->raise();
        uyari->raise();
        pushButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 512, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        arka_plan->setText(QString());
        label->setText(QApplication::translate("MainWindow", "KULLANICI ADI:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\305\236\304\260FRE:", Q_NULLPTR));
        kullanici_giris->setText(QApplication::translate("MainWindow", "G\304\260R\304\260\305\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "KULLANICI G\304\260R\304\260\305\236\304\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "KAYIT OL", Q_NULLPTR));
        uyari->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
