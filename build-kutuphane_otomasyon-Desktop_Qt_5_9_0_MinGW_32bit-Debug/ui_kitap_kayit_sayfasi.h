/********************************************************************************
** Form generated from reading UI file 'kitap_kayit_sayfasi.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITAP_KAYIT_SAYFASI_H
#define UI_KITAP_KAYIT_SAYFASI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kitap_kayit_sayfasi
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QLineEdit *sayfa_sayisi;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QComboBox *kategori;
    QLabel *label_11;
    QDateEdit *basm_tarihi;
    QLabel *label_7;
    QLineEdit *yayin_evi;
    QLineEdit *cilt_no;
    QLineEdit *barkod_no;
    QLabel *label_3;
    QLineEdit *dolap_adi;
    QLabel *label_10;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *stok_sayisi;
    QLineEdit *kitap_adi;
    QLineEdit *yazar_adi;
    QLabel *label_12;
    QPushButton *kitap_sil;
    QLabel *label_14;
    QLabel *label_15;
    QLineEdit *sil_book;
    QLabel *veri_sil;

    void setupUi(QWidget *kitap_kayit_sayfasi)
    {
        if (kitap_kayit_sayfasi->objectName().isEmpty())
            kitap_kayit_sayfasi->setObjectName(QStringLiteral("kitap_kayit_sayfasi"));
        kitap_kayit_sayfasi->resize(512, 532);
        kitap_kayit_sayfasi->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(kitap_kayit_sayfasi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 161, 21));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        groupBox = new QGroupBox(kitap_kayit_sayfasi);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 491, 321));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        groupBox->setFont(font1);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 270, 75, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 270, 75, 31));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(225, 225, 225);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 71, 21));
        label_2->setFont(font2);
        sayfa_sayisi = new QLineEdit(groupBox);
        sayfa_sayisi->setObjectName(QStringLiteral("sayfa_sayisi"));
        sayfa_sayisi->setGeometry(QRect(90, 230, 146, 21));
        sayfa_sayisi->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 80, 47, 21));
        label_6->setFont(font2);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(250, 80, 61, 21));
        label_5->setFont(font2);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 61, 21));
        label_4->setFont(font2);
        kategori = new QComboBox(groupBox);
        kategori->setObjectName(QStringLiteral("kategori"));
        kategori->setGeometry(QRect(90, 180, 146, 21));
        kategori->setStyleSheet(QLatin1String("font: 8pt \"Arial\";\n"
"background-color: rgb(225, 225, 225);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 180, 61, 21));
        label_11->setFont(font2);
        basm_tarihi = new QDateEdit(groupBox);
        basm_tarihi->setObjectName(QStringLiteral("basm_tarihi"));
        basm_tarihi->setGeometry(QRect(330, 180, 146, 21));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 130, 71, 21));
        label_7->setFont(font2);
        yayin_evi = new QLineEdit(groupBox);
        yayin_evi->setObjectName(QStringLiteral("yayin_evi"));
        yayin_evi->setGeometry(QRect(330, 80, 146, 21));
        yayin_evi->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        cilt_no = new QLineEdit(groupBox);
        cilt_no->setObjectName(QStringLiteral("cilt_no"));
        cilt_no->setGeometry(QRect(330, 230, 146, 21));
        cilt_no->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        barkod_no = new QLineEdit(groupBox);
        barkod_no->setObjectName(QStringLiteral("barkod_no"));
        barkod_no->setGeometry(QRect(90, 30, 146, 21));
        barkod_no->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 30, 71, 21));
        label_3->setFont(font2);
        dolap_adi = new QLineEdit(groupBox);
        dolap_adi->setObjectName(QStringLiteral("dolap_adi"));
        dolap_adi->setGeometry(QRect(90, 130, 146, 21));
        dolap_adi->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 230, 47, 21));
        label_10->setFont(font2);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(250, 180, 71, 21));
        label_8->setFont(font2);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 230, 71, 21));
        label_9->setFont(font2);
        stok_sayisi = new QSpinBox(groupBox);
        stok_sayisi->setObjectName(QStringLiteral("stok_sayisi"));
        stok_sayisi->setGeometry(QRect(330, 130, 146, 21));
        stok_sayisi->setStyleSheet(QStringLiteral("background-color: rgb(236, 236, 236);"));
        kitap_adi = new QLineEdit(groupBox);
        kitap_adi->setObjectName(QStringLiteral("kitap_adi"));
        kitap_adi->setGeometry(QRect(330, 30, 146, 21));
        kitap_adi->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        yazar_adi = new QLineEdit(groupBox);
        yazar_adi->setObjectName(QStringLiteral("yazar_adi"));
        yazar_adi->setGeometry(QRect(90, 80, 146, 21));
        yazar_adi->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 280, 141, 16));
        label_12->setFont(font2);
        label_12->setStyleSheet(QStringLiteral("color: rgb(55, 207, 38);"));
        kitap_sil = new QPushButton(kitap_kayit_sayfasi);
        kitap_sil->setObjectName(QStringLiteral("kitap_sil"));
        kitap_sil->setGeometry(QRect(210, 380, 81, 61));
        kitap_sil->setStyleSheet(QLatin1String("background-image: url(:/imageler/resim9.png);\n"
"border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);\n"
"border-radius:10px;"));
        label_14 = new QLabel(kitap_kayit_sayfasi);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(240, 450, 31, 16));
        label_14->setFont(font2);
        label_15 = new QLabel(kitap_kayit_sayfasi);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 480, 121, 21));
        label_15->setFont(font2);
        sil_book = new QLineEdit(kitap_kayit_sayfasi);
        sil_book->setObjectName(QStringLiteral("sil_book"));
        sil_book->setGeometry(QRect(140, 480, 151, 20));
        sil_book->setStyleSheet(QLatin1String("border-style:solid;\n"
"border-width:2px;\n"
"border-color: rgb(225, 124, 22);"));
        veri_sil = new QLabel(kitap_kayit_sayfasi);
        veri_sil->setObjectName(QStringLiteral("veri_sil"));
        veri_sil->setGeometry(QRect(310, 480, 191, 20));
        veri_sil->setStyleSheet(QStringLiteral("color: rgb(142, 214, 30);"));
        kitap_sil->raise();
        groupBox->raise();
        label->raise();
        label_14->raise();
        label_15->raise();
        sil_book->raise();
        veri_sil->raise();

        retranslateUi(kitap_kayit_sayfasi);

        QMetaObject::connectSlotsByName(kitap_kayit_sayfasi);
    } // setupUi

    void retranslateUi(QWidget *kitap_kayit_sayfasi)
    {
        kitap_kayit_sayfasi->setWindowTitle(QApplication::translate("kitap_kayit_sayfasi", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("kitap_kayit_sayfasi", "Yeni Kitap Ekleme", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("kitap_kayit_sayfasi", "Yeni Kay\304\261t", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("kitap_kayit_sayfasi", "TEM\304\260ZLE", Q_NULLPTR));
        pushButton->setText(QApplication::translate("kitap_kayit_sayfasi", "KAYDET", Q_NULLPTR));
        label_2->setText(QApplication::translate("kitap_kayit_sayfasi", "Barkod No:", Q_NULLPTR));
        label_6->setText(QApplication::translate("kitap_kayit_sayfasi", "Yazar:", Q_NULLPTR));
        label_5->setText(QApplication::translate("kitap_kayit_sayfasi", "Yay\304\261nevi:", Q_NULLPTR));
        label_4->setText(QApplication::translate("kitap_kayit_sayfasi", "Dolap Ad\304\261:", Q_NULLPTR));
        kategori->clear();
        kategori->insertItems(0, QStringList()
         << QApplication::translate("kitap_kayit_sayfasi", "Roman_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "D\303\274nya_Klasikleri_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Psikoloji_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Bilim_Kurgu_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Din(\304\260slam)Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "\305\236iir Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Ki\305\237isel_Geli\305\237im_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Tarih_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Felsefe_D\303\274\305\237\303\274nce_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Hikaye(\303\226yk\303\274)_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Ara\305\237t\304\261rma_\304\260nceleme_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Biyografi_Kitaplar\304\261", Q_NULLPTR)
         << QApplication::translate("kitap_kayit_sayfasi", "Macera_Aksiyon_Kitaplar\304\261", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("kitap_kayit_sayfasi", "Kategori :", Q_NULLPTR));
        label_7->setText(QApplication::translate("kitap_kayit_sayfasi", "Stok Say\304\261s\304\261:", Q_NULLPTR));
        label_3->setText(QApplication::translate("kitap_kayit_sayfasi", "Kitap Ad\304\261:", Q_NULLPTR));
        label_10->setText(QApplication::translate("kitap_kayit_sayfasi", "Cilt No:", Q_NULLPTR));
        label_8->setText(QApplication::translate("kitap_kayit_sayfasi", "Bas\304\261m Tarihi:", Q_NULLPTR));
        label_9->setText(QApplication::translate("kitap_kayit_sayfasi", "Sayfa Say\304\261s\304\261:", Q_NULLPTR));
        label_12->setText(QString());
        kitap_sil->setText(QString());
        label_14->setText(QApplication::translate("kitap_kayit_sayfasi", "S\304\260L", Q_NULLPTR));
        label_15->setText(QApplication::translate("kitap_kayit_sayfasi", "Silincek Kitab\304\261n Ad\304\261:", Q_NULLPTR));
        veri_sil->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class kitap_kayit_sayfasi: public Ui_kitap_kayit_sayfasi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITAP_KAYIT_SAYFASI_H
