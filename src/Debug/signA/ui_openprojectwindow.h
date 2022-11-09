/********************************************************************************
** Form generated from reading UI file 'openprojectwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENPROJECTWINDOW_H
#define UI_OPENPROJECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenProjectWindow
{
public:
    QPushButton *pushButton;
    QPushButton *open;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *cancel;
    QLineEdit *lineEdit;
    QComboBox *comboBox;

    void setupUi(QDialog *OpenProjectWindow)
    {
        if (OpenProjectWindow->objectName().isEmpty())
            OpenProjectWindow->setObjectName(QStringLiteral("OpenProjectWindow"));
        OpenProjectWindow->resize(1200, 656);
        pushButton = new QPushButton(OpenProjectWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 50, 151, 31));
        pushButton->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));
        open = new QPushButton(OpenProjectWindow);
        open->setObjectName(QStringLiteral("open"));
        open->setGeometry(QRect(660, 580, 111, 31));
        open->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));
        tableWidget = new QTableWidget(OpenProjectWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 190, 1021, 371));
        label = new QLabel(OpenProjectWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 101, 41));
        label->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));
        label_2 = new QLabel(OpenProjectWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 150, 91, 21));
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));
        cancel = new QPushButton(OpenProjectWindow);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(890, 580, 121, 31));
        cancel->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));
        lineEdit = new QLineEdit(OpenProjectWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 50, 151, 31));
        lineEdit->setStyleSheet(QStringLiteral("color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));"));
        comboBox = new QComboBox(OpenProjectWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(430, 50, 121, 31));
        comboBox->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        retranslateUi(OpenProjectWindow);

        QMetaObject::connectSlotsByName(OpenProjectWindow);
    } // setupUi

    void retranslateUi(QDialog *OpenProjectWindow)
    {
        OpenProjectWindow->setWindowTitle(QApplication::translate("OpenProjectWindow", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("OpenProjectWindow", "\346\220\234\347\264\242", Q_NULLPTR));
        open->setText(QApplication::translate("OpenProjectWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        label->setText(QApplication::translate("OpenProjectWindow", "\351\241\271\347\233\256\345\220\215:", Q_NULLPTR));
        label_2->setText(QApplication::translate("OpenProjectWindow", "\346\234\200\350\277\221\351\241\271\347\233\256", Q_NULLPTR));
        cancel->setText(QApplication::translate("OpenProjectWindow", "\345\217\226\346\266\210", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("OpenProjectWindow", "\345\205\250\351\203\250\346\227\245\346\234\237", Q_NULLPTR)
         << QApplication::translate("OpenProjectWindow", "\346\234\200\350\277\221\344\270\200\345\244\251", Q_NULLPTR)
         << QApplication::translate("OpenProjectWindow", "\346\234\200\350\277\221\344\270\200\345\221\250", Q_NULLPTR)
         << QApplication::translate("OpenProjectWindow", "\346\234\200\350\277\221\344\270\200\346\234\210", Q_NULLPTR)
         << QApplication::translate("OpenProjectWindow", "\346\234\200\350\277\221\345\215\212\345\271\264", Q_NULLPTR)
         << QApplication::translate("OpenProjectWindow", "\346\234\200\350\277\221\344\270\200\345\271\264", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class OpenProjectWindow: public Ui_OpenProjectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENPROJECTWINDOW_H
