/********************************************************************************
** Form generated from reading UI file 'okuyucu_kayit_sayfasi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKUYUCU_KAYIT_SAYFASI_H
#define UI_OKUYUCU_KAYIT_SAYFASI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_okuyucu_kayit_sayfasi
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *okuyucu_soyad;
    QLineEdit *tel_no;
    QLineEdit *kitap_ad;
    QLineEdit *kitap_cilt_no;
    QDateEdit *verilis_tarih;
    QDateEdit *teslim_tarihi;
    QLabel *label_7;
    QPushButton *kayit;
    QLabel *uyari_yaz;
    QLabel *label_8;
    QLabel *uyari_yaz_2;
    QLineEdit *okuyucu_adi;
    QPushButton *kontrolu;

    void setupUi(QWidget *okuyucu_kayit_sayfasi)
    {
        if (okuyucu_kayit_sayfasi->objectName().isEmpty())
            okuyucu_kayit_sayfasi->setObjectName(QStringLiteral("okuyucu_kayit_sayfasi"));
        okuyucu_kayit_sayfasi->resize(602, 453);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        okuyucu_kayit_sayfasi->setFont(font);
        okuyucu_kayit_sayfasi->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(okuyucu_kayit_sayfasi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 91, 21));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(okuyucu_kayit_sayfasi);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 60, 101, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(okuyucu_kayit_sayfasi);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 120, 111, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(okuyucu_kayit_sayfasi);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 120, 61, 21));
        label_4->setFont(font1);
        label_5 = new QLabel(okuyucu_kayit_sayfasi);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 180, 71, 21));
        label_5->setFont(font1);
        label_6 = new QLabel(okuyucu_kayit_sayfasi);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 180, 91, 21));
        label_6->setFont(font1);
        okuyucu_soyad = new QLineEdit(okuyucu_kayit_sayfasi);
        okuyucu_soyad->setObjectName(QStringLiteral("okuyucu_soyad"));
        okuyucu_soyad->setGeometry(QRect(140, 120, 131, 21));
        okuyucu_soyad->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        tel_no = new QLineEdit(okuyucu_kayit_sayfasi);
        tel_no->setObjectName(QStringLiteral("tel_no"));
        tel_no->setGeometry(QRect(140, 180, 131, 21));
        tel_no->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        kitap_ad = new QLineEdit(okuyucu_kayit_sayfasi);
        kitap_ad->setObjectName(QStringLiteral("kitap_ad"));
        kitap_ad->setGeometry(QRect(420, 120, 131, 21));
        kitap_ad->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        kitap_cilt_no = new QLineEdit(okuyucu_kayit_sayfasi);
        kitap_cilt_no->setObjectName(QStringLiteral("kitap_cilt_no"));
        kitap_cilt_no->setGeometry(QRect(420, 60, 131, 21));
        kitap_cilt_no->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        verilis_tarih = new QDateEdit(okuyucu_kayit_sayfasi);
        verilis_tarih->setObjectName(QStringLiteral("verilis_tarih"));
        verilis_tarih->setGeometry(QRect(420, 180, 131, 22));
        teslim_tarihi = new QDateEdit(okuyucu_kayit_sayfasi);
        teslim_tarihi->setObjectName(QStringLiteral("teslim_tarihi"));
        teslim_tarihi->setGeometry(QRect(140, 240, 131, 22));
        label_7 = new QLabel(okuyucu_kayit_sayfasi);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 240, 121, 21));
        label_7->setFont(font1);
        kayit = new QPushButton(okuyucu_kayit_sayfasi);
        kayit->setObjectName(QStringLiteral("kayit"));
        kayit->setGeometry(QRect(300, 340, 101, 41));
        kayit->setFont(font);
        kayit->setStyleSheet(QLatin1String("border-style:solid;\n"
"background-color: rgb(225, 225, 225);\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        uyari_yaz = new QLabel(okuyucu_kayit_sayfasi);
        uyari_yaz->setObjectName(QStringLiteral("uyari_yaz"));
        uyari_yaz->setGeometry(QRect(30, 290, 241, 21));
        label_8 = new QLabel(okuyucu_kayit_sayfasi);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(230, 10, 131, 21));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        label_8->setFont(font2);
        uyari_yaz_2 = new QLabel(okuyucu_kayit_sayfasi);
        uyari_yaz_2->setObjectName(QStringLiteral("uyari_yaz_2"));
        uyari_yaz_2->setGeometry(QRect(310, 240, 291, 21));
        uyari_yaz_2->setFont(font);
        okuyucu_adi = new QLineEdit(okuyucu_kayit_sayfasi);
        okuyucu_adi->setObjectName(QStringLiteral("okuyucu_adi"));
        okuyucu_adi->setGeometry(QRect(140, 60, 131, 21));
        okuyucu_adi->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        kontrolu = new QPushButton(okuyucu_kayit_sayfasi);
        kontrolu->setObjectName(QStringLiteral("kontrolu"));
        kontrolu->setGeometry(QRect(170, 340, 101, 41));
        kontrolu->setFont(font);
        kontrolu->setStyleSheet(QLatin1String("border-style:solid;\n"
"background-color: rgb(225, 225, 225);\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        kayit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        okuyucu_soyad->raise();
        tel_no->raise();
        kitap_ad->raise();
        kitap_cilt_no->raise();
        label_7->raise();
        uyari_yaz->raise();
        label_8->raise();
        uyari_yaz_2->raise();
        okuyucu_adi->raise();
        teslim_tarihi->raise();
        verilis_tarih->raise();
        kontrolu->raise();

        retranslateUi(okuyucu_kayit_sayfasi);

        QMetaObject::connectSlotsByName(okuyucu_kayit_sayfasi);
    } // setupUi

    void retranslateUi(QWidget *okuyucu_kayit_sayfasi)
    {
        okuyucu_kayit_sayfasi->setWindowTitle(QApplication::translate("okuyucu_kayit_sayfasi", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Okuyucu Ad:", Q_NULLPTR));
        label_2->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Kitap Cilt No:", Q_NULLPTR));
        label_3->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Okuyucu Soyad:", Q_NULLPTR));
        label_4->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Kitap Ad:", Q_NULLPTR));
        label_5->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Telefon No:", Q_NULLPTR));
        label_6->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Verili\305\237 Tarihi:", Q_NULLPTR));
        label_7->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Teslim Alma Tarihi:", Q_NULLPTR));
        kayit->setText(QApplication::translate("okuyucu_kayit_sayfasi", "KAYDET", Q_NULLPTR));
        uyari_yaz->setText(QString());
        label_8->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Okuyucu Kay\304\261t", Q_NULLPTR));
        uyari_yaz_2->setText(QApplication::translate("okuyucu_kayit_sayfasi", "NOT:Teslim tarihi otomatik olarak hesaplanacakt\304\261r.", Q_NULLPTR));
        kontrolu->setText(QApplication::translate("okuyucu_kayit_sayfasi", "Kontrol", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class okuyucu_kayit_sayfasi: public Ui_okuyucu_kayit_sayfasi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKUYUCU_KAYIT_SAYFASI_H
