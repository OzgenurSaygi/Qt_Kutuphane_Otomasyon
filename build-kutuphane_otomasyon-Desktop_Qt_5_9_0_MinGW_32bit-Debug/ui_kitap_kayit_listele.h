/********************************************************************************
** Form generated from reading UI file 'kitap_kayit_listele.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KITAP_KAYIT_LISTELE_H
#define UI_KITAP_KAYIT_LISTELE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kitap_kayit_listele
{
public:
    QTableWidget *kitap_tablo;
    QLabel *label;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;

    void setupUi(QWidget *kitap_kayit_listele)
    {
        if (kitap_kayit_listele->objectName().isEmpty())
            kitap_kayit_listele->setObjectName(QStringLiteral("kitap_kayit_listele"));
        kitap_kayit_listele->resize(745, 518);
        kitap_tablo = new QTableWidget(kitap_kayit_listele);
        if (kitap_tablo->columnCount() < 10)
            kitap_tablo->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        kitap_tablo->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        kitap_tablo->setObjectName(QStringLiteral("kitap_tablo"));
        kitap_tablo->setGeometry(QRect(10, 10, 721, 441));
        kitap_tablo->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 135, 255), stop:1 rgba(255, 255, 255, 255));"));
        kitap_tablo->setFrameShape(QFrame::StyledPanel);
        kitap_tablo->setLineWidth(1);
        kitap_tablo->setAutoScrollMargin(16);
        kitap_tablo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        kitap_tablo->setShowGrid(true);
        kitap_tablo->setGridStyle(Qt::SolidLine);
        kitap_tablo->setSortingEnabled(false);
        kitap_tablo->setWordWrap(true);
        kitap_tablo->horizontalHeader()->setDefaultSectionSize(150);
        kitap_tablo->horizontalHeader()->setMinimumSectionSize(39);
        kitap_tablo->verticalHeader()->setVisible(false);
        label = new QLabel(kitap_kayit_listele);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 480, 151, 16));
        pushButton = new QPushButton(kitap_kayit_listele);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(664, 460, 61, 23));
        comboBox = new QComboBox(kitap_kayit_listele);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 480, 201, 22));
        label_2 = new QLabel(kitap_kayit_listele);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 460, 71, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        comboBox_2 = new QComboBox(kitap_kayit_listele);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(230, 480, 201, 22));

        retranslateUi(kitap_kayit_listele);

        QMetaObject::connectSlotsByName(kitap_kayit_listele);
    } // setupUi

    void retranslateUi(QWidget *kitap_kayit_listele)
    {
        kitap_kayit_listele->setWindowTitle(QApplication::translate("kitap_kayit_listele", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = kitap_tablo->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("kitap_kayit_listele", "BARKOD NO", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = kitap_tablo->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("kitap_kayit_listele", "K\304\260TAP ADI", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = kitap_tablo->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("kitap_kayit_listele", "DOLAP NO", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = kitap_tablo->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("kitap_kayit_listele", "YAYINEV\304\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = kitap_tablo->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("kitap_kayit_listele", "YAZAR", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = kitap_tablo->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("kitap_kayit_listele", "K\304\260TAP ADET", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = kitap_tablo->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("kitap_kayit_listele", "KATEGOR\304\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = kitap_tablo->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("kitap_kayit_listele", "BASIM TAR\304\260H\304\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = kitap_tablo->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("kitap_kayit_listele", "SAYFA SAYISI", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = kitap_tablo->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("kitap_kayit_listele", "C\304\260LT NO", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("kitap_kayit_listele", "YEN\304\260LE", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("kitap_kayit_listele", "Kategori", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("kitap_kayit_listele", "SIRALAMA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class kitap_kayit_listele: public Ui_kitap_kayit_listele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KITAP_KAYIT_LISTELE_H
