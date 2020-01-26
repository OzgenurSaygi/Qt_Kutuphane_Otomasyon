/********************************************************************************
** Form generated from reading UI file 'okuyucu_listele.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKUYUCU_LISTELE_H
#define UI_OKUYUCU_LISTELE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_okuyucu_listele
{
public:
    QTableWidget *okuyucu_tablo;
    QLabel *dayy;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *gelen_ad;
    QLineEdit *gelen_soyad;
    QPushButton *teslim;
    QLabel *yazi;
    QCheckBox *teslim_edildi;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QWidget *okuyucu_listele)
    {
        if (okuyucu_listele->objectName().isEmpty())
            okuyucu_listele->setObjectName(QStringLiteral("okuyucu_listele"));
        okuyucu_listele->resize(889, 594);
        okuyucu_tablo = new QTableWidget(okuyucu_listele);
        if (okuyucu_tablo->columnCount() < 8)
            okuyucu_tablo->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        okuyucu_tablo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        okuyucu_tablo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        okuyucu_tablo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        okuyucu_tablo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        okuyucu_tablo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        okuyucu_tablo->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        okuyucu_tablo->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        okuyucu_tablo->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        okuyucu_tablo->setObjectName(QStringLiteral("okuyucu_tablo"));
        okuyucu_tablo->setGeometry(QRect(10, 50, 871, 381));
        okuyucu_tablo->horizontalHeader()->setDefaultSectionSize(108);
        okuyucu_tablo->horizontalHeader()->setMinimumSectionSize(39);
        dayy = new QLabel(okuyucu_listele);
        dayy->setObjectName(QStringLiteral("dayy"));
        dayy->setGeometry(QRect(580, 450, 161, 20));
        label = new QLabel(okuyucu_listele);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(350, 10, 171, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(okuyucu_listele);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 450, 47, 21));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(okuyucu_listele);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 490, 51, 21));
        label_3->setFont(font1);
        gelen_ad = new QLineEdit(okuyucu_listele);
        gelen_ad->setObjectName(QStringLiteral("gelen_ad"));
        gelen_ad->setGeometry(QRect(90, 450, 131, 20));
        gelen_soyad = new QLineEdit(okuyucu_listele);
        gelen_soyad->setObjectName(QStringLiteral("gelen_soyad"));
        gelen_soyad->setGeometry(QRect(90, 490, 131, 20));
        teslim = new QPushButton(okuyucu_listele);
        teslim->setObjectName(QStringLiteral("teslim"));
        teslim->setGeometry(QRect(30, 530, 81, 31));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        teslim->setFont(font2);
        yazi = new QLabel(okuyucu_listele);
        yazi->setObjectName(QStringLiteral("yazi"));
        yazi->setGeometry(QRect(510, 460, 231, 16));
        teslim_edildi = new QCheckBox(okuyucu_listele);
        teslim_edildi->setObjectName(QStringLiteral("teslim_edildi"));
        teslim_edildi->setGeometry(QRect(250, 450, 111, 17));
        pushButton = new QPushButton(okuyucu_listele);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 530, 101, 31));
        pushButton->setFont(font2);
        label_4 = new QLabel(okuyucu_listele);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 570, 471, 16));
        label_4->setFont(font2);

        retranslateUi(okuyucu_listele);

        QMetaObject::connectSlotsByName(okuyucu_listele);
    } // setupUi

    void retranslateUi(QWidget *okuyucu_listele)
    {
        okuyucu_listele->setWindowTitle(QApplication::translate("okuyucu_listele", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = okuyucu_tablo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("okuyucu_listele", "Okuyucu Ad", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = okuyucu_tablo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("okuyucu_listele", "Okuyucu Soyad", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = okuyucu_tablo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("okuyucu_listele", "Okuyucu Tel No", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = okuyucu_tablo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("okuyucu_listele", "Kitap Cilt No", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = okuyucu_tablo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("okuyucu_listele", "Kitap Ad\304\261", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = okuyucu_tablo->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("okuyucu_listele", "Verili\305\237 Tarihi", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = okuyucu_tablo->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("okuyucu_listele", "Teslim Alma Tarihi", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = okuyucu_tablo->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("okuyucu_listele", "Durum", Q_NULLPTR));
        dayy->setText(QString());
        label->setText(QApplication::translate("okuyucu_listele", "OKUYUCU L\304\260STES\304\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("okuyucu_listele", "Ad:", Q_NULLPTR));
        label_3->setText(QApplication::translate("okuyucu_listele", "Soyad:", Q_NULLPTR));
        teslim->setText(QApplication::translate("okuyucu_listele", "KAYDET", Q_NULLPTR));
        yazi->setText(QString());
        teslim_edildi->setText(QApplication::translate("okuyucu_listele", "Teslim Edildi", Q_NULLPTR));
        pushButton->setText(QApplication::translate("okuyucu_listele", "Listeden Kald\304\261r", Q_NULLPTR));
        label_4->setText(QApplication::translate("okuyucu_listele", "NOT:Kitab\304\261 teslim eden ki\305\237iyi ilk sisteme kaydedin.Daha sonra listeden kald\304\261r\304\261n\304\261z.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class okuyucu_listele: public Ui_okuyucu_listele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKUYUCU_LISTELE_H
