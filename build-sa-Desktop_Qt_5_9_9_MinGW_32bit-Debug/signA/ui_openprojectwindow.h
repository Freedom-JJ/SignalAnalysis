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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenProjectWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QPushButton *open;
    QPushButton *cancel;
    QPushButton *pushButton;
    QComboBox *comboBox;

    void setupUi(QDialog *OpenProjectWindow)
    {
        if (OpenProjectWindow->objectName().isEmpty())
            OpenProjectWindow->setObjectName(QStringLiteral("OpenProjectWindow"));
        OpenProjectWindow->resize(616, 415);
        gridLayout = new QGridLayout(OpenProjectWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(OpenProjectWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(OpenProjectWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(OpenProjectWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        tableWidget = new QTableWidget(OpenProjectWindow);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 5);

        open = new QPushButton(OpenProjectWindow);
        open->setObjectName(QStringLiteral("open"));
        open->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        gridLayout->addWidget(open, 3, 3, 1, 1);

        cancel = new QPushButton(OpenProjectWindow);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        gridLayout->addWidget(cancel, 3, 4, 1, 1);

        pushButton = new QPushButton(OpenProjectWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        gridLayout->addWidget(pushButton, 0, 4, 1, 1);

        comboBox = new QComboBox(OpenProjectWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QStringLiteral("font: 11pt \"Agency FB\";"));

        gridLayout->addWidget(comboBox, 0, 3, 1, 1);


        retranslateUi(OpenProjectWindow);

        QMetaObject::connectSlotsByName(OpenProjectWindow);
    } // setupUi

    void retranslateUi(QDialog *OpenProjectWindow)
    {
        OpenProjectWindow->setWindowTitle(QApplication::translate("OpenProjectWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("OpenProjectWindow", "\351\241\271\347\233\256\345\220\215:", Q_NULLPTR));
        label_2->setText(QApplication::translate("OpenProjectWindow", "\346\234\200\350\277\221\351\241\271\347\233\256", Q_NULLPTR));
        open->setText(QApplication::translate("OpenProjectWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        cancel->setText(QApplication::translate("OpenProjectWindow", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton->setText(QApplication::translate("OpenProjectWindow", "\346\220\234\347\264\242", Q_NULLPTR));
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
