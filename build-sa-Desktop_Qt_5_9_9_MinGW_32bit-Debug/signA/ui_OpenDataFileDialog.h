/********************************************************************************
** Form generated from reading UI file 'OpenDataFileDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENDATAFILEDIALOG_H
#define UI_OPENDATAFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_OpenDataFileDialog
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonSearch;
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *pushButtonOpen;

    void setupUi(QDialog *OpenDataFileDialog)
    {
        if (OpenDataFileDialog->objectName().isEmpty())
            OpenDataFileDialog->setObjectName(QStringLiteral("OpenDataFileDialog"));
        OpenDataFileDialog->resize(441, 400);
        gridLayout_2 = new QGridLayout(OpenDataFileDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButtonSearch = new QPushButton(OpenDataFileDialog);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));

        gridLayout_2->addWidget(pushButtonSearch, 0, 1, 1, 1);

        tableView = new QTableView(OpenDataFileDialog);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 3);

        lineEdit = new QLineEdit(OpenDataFileDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        pushButtonOpen = new QPushButton(OpenDataFileDialog);
        pushButtonOpen->setObjectName(QStringLiteral("pushButtonOpen"));

        gridLayout_2->addWidget(pushButtonOpen, 0, 2, 1, 1);


        retranslateUi(OpenDataFileDialog);

        QMetaObject::connectSlotsByName(OpenDataFileDialog);
    } // setupUi

    void retranslateUi(QDialog *OpenDataFileDialog)
    {
        OpenDataFileDialog->setWindowTitle(QApplication::translate("OpenDataFileDialog", "\351\200\211\346\213\251\345\233\236\346\224\276\346\226\207\344\273\266", Q_NULLPTR));
        pushButtonSearch->setText(QApplication::translate("OpenDataFileDialog", "\346\220\234\347\264\242", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("OpenDataFileDialog", "\346\220\234\347\264\242", Q_NULLPTR));
        pushButtonOpen->setText(QApplication::translate("OpenDataFileDialog", "\346\211\223\345\274\200", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpenDataFileDialog: public Ui_OpenDataFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENDATAFILEDIALOG_H
