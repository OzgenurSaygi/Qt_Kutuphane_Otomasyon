/********************************************************************************
** Form generated from reading UI file 'ana_ekran.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANA_EKRAN_H
#define UI_ANA_EKRAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ana_ekran
{
public:
    QLabel *arka_plan;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QWidget *ana_ekran)
    {
        if (ana_ekran->objectName().isEmpty())
            ana_ekran->setObjectName(QStringLiteral("ana_ekran"));
        ana_ekran->resize(512, 675);
        ana_ekran->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        arka_plan = new QLabel(ana_ekran);
        arka_plan->setObjectName(QStringLiteral("arka_plan"));
        arka_plan->setGeometry(QRect(0, 320, 511, 351));
        arka_plan->setStyleSheet(QStringLiteral("background-image: url(:/imageler/resim2.jpg);"));
        label = new QLabel(ana_ekran);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 221, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(225, 124, 22);"));
        pushButton = new QPushButton(ana_ekran);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 80, 93, 78));
        pushButton->setStyleSheet(QLatin1String("border-style:solid;\n"
"background-image: url(:/imageler/resim3.png);\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);\n"
"border-radius: 10px;\n"
""));
        pushButton_2 = new QPushButton(ana_ekran);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 80, 93, 80));
        pushButton_2->setStyleSheet(QLatin1String("background-image: url(:/imageler/resim4.png);\n"
"border-radius: 10px;\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        pushButton_3 = new QPushButton(ana_ekran);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 80, 90, 80));
        pushButton_3->setStyleSheet(QLatin1String("background-image: url(:/imageler/resim5.png);\n"
" border-radius: 10px;\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        pushButton_4 = new QPushButton(ana_ekran);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 190, 90, 78));
        pushButton_4->setStyleSheet(QLatin1String("background-image: url(:/imageler/resim6.jpg);\n"
"border-radius: 10px;\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        pushButton_5 = new QPushButton(ana_ekran);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(290, 190, 90, 78));
        pushButton_5->setStyleSheet(QLatin1String("background-image: url(:/imageler/resim7.jpg);\n"
" border-radius: 10px;\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        label_2 = new QLabel(ana_ekran);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(46, 160, 81, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial Black"));
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(225, 124, 22);"));
        label_3 = new QLabel(ana_ekran);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(223, 160, 81, 21));
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("color: rgb(225, 124, 22);"));
        label_4 = new QLabel(ana_ekran);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(370, 160, 91, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial Black"));
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(225, 124, 22);"));
        label_5 = new QLabel(ana_ekran);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 270, 51, 21));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("color: rgb(225, 124, 22);"));
        label_6 = new QLabel(ana_ekran);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 271, 121, 16));
        label_6->setFont(font1);
        label_6->setStyleSheet(QStringLiteral("color: rgb(225, 124, 22);"));
        label_7 = new QLabel(ana_ekran);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(310, 290, 121, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("color: rgb(225, 124, 22);"));
        label_8 = new QLabel(ana_ekran);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(155, 288, 61, 21));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("color: rgb(225, 124, 22);"));
        label->raise();
        pushButton_5->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        pushButton->raise();
        arka_plan->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();

        retranslateUi(ana_ekran);

        QMetaObject::connectSlotsByName(ana_ekran);
    } // setupUi

    void retranslateUi(QWidget *ana_ekran)
    {
        ana_ekran->setWindowTitle(QApplication::translate("ana_ekran", "Form", Q_NULLPTR));
        arka_plan->setText(QString());
        label->setText(QApplication::translate("ana_ekran", "K\303\234T\303\234PHANE S\304\260STEM\304\260", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        label_2->setText(QApplication::translate("ana_ekran", "K\304\260TAP KAYIT", Q_NULLPTR));
        label_3->setText(QApplication::translate("ana_ekran", "\303\234YE KAYIT", Q_NULLPTR));
        label_4->setText(QApplication::translate("ana_ekran", "OKUYUCULAR", Q_NULLPTR));
        label_5->setText(QApplication::translate("ana_ekran", "K\304\260TAP", Q_NULLPTR));
        label_6->setText(QApplication::translate("ana_ekran", "OKUYUCULARI ", Q_NULLPTR));
        label_7->setText(QApplication::translate("ana_ekran", "L\304\260STELE", Q_NULLPTR));
        label_8->setText(QApplication::translate("ana_ekran", "L\304\260STELE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ana_ekran: public Ui_ana_ekran {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANA_EKRAN_H
