/********************************************************************************
** Form generated from reading UI file 'uye_kayit_sayfasi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UYE_KAYIT_SAYFASI_H
#define UI_UYE_KAYIT_SAYFASI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uye_kayit_sayfasi
{
public:
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *uye_ad;
    QLineEdit *uye_soyad;
    QLineEdit *uye_tc;
    QLineEdit *uye_tel;
    QLineEdit *uye_posta;
    QLineEdit *uye_adres;
    QLineEdit *uye_sehir;
    QPushButton *uye_kaydet;
    QPushButton *uye_temizle;
    QLabel *uyari;
    QLabel *label;
    QLabel *label_13;
    QPushButton *uye_duzenle;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *duzen_yazdir;

    void setupUi(QWidget *uye_kayit_sayfasi)
    {
        if (uye_kayit_sayfasi->objectName().isEmpty())
            uye_kayit_sayfasi->setObjectName(QStringLiteral("uye_kayit_sayfasi"));
        uye_kayit_sayfasi->resize(579, 520);
        uye_kayit_sayfasi->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(uye_kayit_sayfasi);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 561, 351));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 31, 21));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 40, 47, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 100, 81, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 100, 61, 21));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 170, 61, 21));
        label_6->setFont(font2);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(290, 170, 47, 31));
        label_7->setFont(font2);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 240, 47, 21));
        label_8->setFont(font2);
        uye_ad = new QLineEdit(groupBox);
        uye_ad->setObjectName(QStringLiteral("uye_ad"));
        uye_ad->setGeometry(QRect(120, 40, 141, 23));
        uye_ad->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        uye_soyad = new QLineEdit(groupBox);
        uye_soyad->setObjectName(QStringLiteral("uye_soyad"));
        uye_soyad->setGeometry(QRect(380, 40, 161, 23));
        uye_soyad->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        uye_tc = new QLineEdit(groupBox);
        uye_tc->setObjectName(QStringLiteral("uye_tc"));
        uye_tc->setGeometry(QRect(120, 100, 141, 23));
        uye_tc->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        uye_tel = new QLineEdit(groupBox);
        uye_tel->setObjectName(QStringLiteral("uye_tel"));
        uye_tel->setGeometry(QRect(380, 100, 161, 23));
        uye_tel->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        uye_posta = new QLineEdit(groupBox);
        uye_posta->setObjectName(QStringLiteral("uye_posta"));
        uye_posta->setGeometry(QRect(120, 170, 141, 23));
        uye_posta->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        uye_adres = new QLineEdit(groupBox);
        uye_adres->setObjectName(QStringLiteral("uye_adres"));
        uye_adres->setGeometry(QRect(380, 170, 161, 23));
        uye_adres->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        uye_sehir = new QLineEdit(groupBox);
        uye_sehir->setObjectName(QStringLiteral("uye_sehir"));
        uye_sehir->setGeometry(QRect(120, 240, 141, 23));
        uye_sehir->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        uye_kaydet = new QPushButton(groupBox);
        uye_kaydet->setObjectName(QStringLiteral("uye_kaydet"));
        uye_kaydet->setGeometry(QRect(200, 290, 75, 31));
        uye_kaydet->setFont(font2);
        uye_kaydet->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        uye_temizle = new QPushButton(groupBox);
        uye_temizle->setObjectName(QStringLiteral("uye_temizle"));
        uye_temizle->setGeometry(QRect(300, 290, 71, 31));
        uye_temizle->setFont(font2);
        uye_temizle->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        uyari = new QLabel(groupBox);
        uyari->setObjectName(QStringLiteral("uyari"));
        uyari->setGeometry(QRect(10, 290, 161, 31));
        uyari->setStyleSheet(QStringLiteral("color: rgb(67, 203, 0);"));
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        uye_ad->raise();
        uye_soyad->raise();
        uye_tc->raise();
        uye_tel->raise();
        uye_posta->raise();
        uye_adres->raise();
        uye_sehir->raise();
        uyari->raise();
        uye_temizle->raise();
        uye_kaydet->raise();
        label = new QLabel(uye_kayit_sayfasi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 0, 141, 16));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label_13 = new QLabel(uye_kayit_sayfasi);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(263, 490, 51, 16));
        label_13->setFont(font2);
        uye_duzenle = new QPushButton(uye_kayit_sayfasi);
        uye_duzenle->setObjectName(QStringLiteral("uye_duzenle"));
        uye_duzenle->setGeometry(QRect(250, 424, 81, 61));
        uye_duzenle->setStyleSheet(QLatin1String("background-image: url(:/imageler/resim8.png);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);\n"
"border-radius:10px;"));
        label_9 = new QLabel(uye_kayit_sayfasi);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 380, 531, 16));
        label_9->setFont(font2);
        label_10 = new QLabel(uye_kayit_sayfasi);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 400, 191, 16));
        label_10->setFont(font2);
        duzen_yazdir = new QLabel(uye_kayit_sayfasi);
        duzen_yazdir->setObjectName(QStringLiteral("duzen_yazdir"));
        duzen_yazdir->setGeometry(QRect(10, 440, 201, 16));
        duzen_yazdir->setFont(font2);
        duzen_yazdir->setStyleSheet(QStringLiteral("color: rgb(141, 213, 31);"));

        retranslateUi(uye_kayit_sayfasi);

        QMetaObject::connectSlotsByName(uye_kayit_sayfasi);
    } // setupUi

    void retranslateUi(QWidget *uye_kayit_sayfasi)
    {
        uye_kayit_sayfasi->setWindowTitle(QApplication::translate("uye_kayit_sayfasi", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("uye_kayit_sayfasi", "Yeni \303\234ye Ekleme", Q_NULLPTR));
        label_2->setText(QApplication::translate("uye_kayit_sayfasi", "AD:", Q_NULLPTR));
        label_3->setText(QApplication::translate("uye_kayit_sayfasi", "SOYAD:", Q_NULLPTR));
        label_4->setText(QApplication::translate("uye_kayit_sayfasi", "TC K\304\260ML\304\260K NO:", Q_NULLPTR));
        label_5->setText(QApplication::translate("uye_kayit_sayfasi", "TELEFON:", Q_NULLPTR));
        label_6->setText(QApplication::translate("uye_kayit_sayfasi", "E-POSTA:", Q_NULLPTR));
        label_7->setText(QApplication::translate("uye_kayit_sayfasi", "ADRES:", Q_NULLPTR));
        label_8->setText(QApplication::translate("uye_kayit_sayfasi", "\305\236EH\304\260R:", Q_NULLPTR));
        uye_kaydet->setText(QApplication::translate("uye_kayit_sayfasi", "KAYDET", Q_NULLPTR));
        uye_temizle->setText(QApplication::translate("uye_kayit_sayfasi", "TEM\304\260ZLE", Q_NULLPTR));
        uyari->setText(QString());
        label->setText(QApplication::translate("uye_kayit_sayfasi", "YEN\304\260 \303\234YE KAYIT", Q_NULLPTR));
        label_13->setText(QApplication::translate("uye_kayit_sayfasi", "D\303\234ZENLE", Q_NULLPTR));
        uye_duzenle->setText(QString());
        label_9->setText(QApplication::translate("uye_kayit_sayfasi", "Not:D\303\274zenlenecek \303\274yenin bilgileri hepsini yukar\304\261da yeniden giriniz.", Q_NULLPTR));
        label_10->setText(QApplication::translate("uye_kayit_sayfasi", "D\303\274zenle butonu ile kaydediniz.", Q_NULLPTR));
        duzen_yazdir->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class uye_kayit_sayfasi: public Ui_uye_kayit_sayfasi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UYE_KAYIT_SAYFASI_H
