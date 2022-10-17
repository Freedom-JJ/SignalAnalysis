/********************************************************************************
** Form generated from reading UI file 'SATendencyChartDataSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATENDENCYCHARTDATASELECTDIALOG_H
#define UI_SATENDENCYCHARTDATASELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SATendencyChartDataSelectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_follow;
    QLabel *label_3;
    QListView *listView_curs;
    QRadioButton *radioButton_selDef;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_start;
    QLabel *label_2;
    QLineEdit *lineEdit_added;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SATendencyChartDataSelectDialog)
    {
        if (SATendencyChartDataSelectDialog->objectName().isEmpty())
            SATendencyChartDataSelectDialog->setObjectName(QStringLiteral("SATendencyChartDataSelectDialog"));
        SATendencyChartDataSelectDialog->resize(436, 334);
        verticalLayout = new QVBoxLayout(SATendencyChartDataSelectDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_follow = new QRadioButton(SATendencyChartDataSelectDialog);
        radioButton_follow->setObjectName(QStringLiteral("radioButton_follow"));

        verticalLayout->addWidget(radioButton_follow);

        label_3 = new QLabel(SATendencyChartDataSelectDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        listView_curs = new QListView(SATendencyChartDataSelectDialog);
        listView_curs->setObjectName(QStringLiteral("listView_curs"));

        verticalLayout->addWidget(listView_curs);

        radioButton_selDef = new QRadioButton(SATendencyChartDataSelectDialog);
        radioButton_selDef->setObjectName(QStringLiteral("radioButton_selDef"));

        verticalLayout->addWidget(radioButton_selDef);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SATendencyChartDataSelectDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_start = new QLineEdit(SATendencyChartDataSelectDialog);
        lineEdit_start->setObjectName(QStringLiteral("lineEdit_start"));

        horizontalLayout->addWidget(lineEdit_start);

        label_2 = new QLabel(SATendencyChartDataSelectDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_added = new QLineEdit(SATendencyChartDataSelectDialog);
        lineEdit_added->setObjectName(QStringLiteral("lineEdit_added"));

        horizontalLayout->addWidget(lineEdit_added);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(SATendencyChartDataSelectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SATendencyChartDataSelectDialog);
        QObject::connect(radioButton_selDef, SIGNAL(toggled(bool)), lineEdit_start, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_selDef, SIGNAL(toggled(bool)), lineEdit_added, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_selDef, SIGNAL(toggled(bool)), label, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_selDef, SIGNAL(toggled(bool)), label_2, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_follow, SIGNAL(toggled(bool)), label_3, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_follow, SIGNAL(toggled(bool)), listView_curs, SLOT(setEnabled(bool)));
        QObject::connect(buttonBox, SIGNAL(rejected()), SATendencyChartDataSelectDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SATendencyChartDataSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *SATendencyChartDataSelectDialog)
    {
        SATendencyChartDataSelectDialog->setWindowTitle(QApplication::translate("SATendencyChartDataSelectDialog", "Tendency Chart Data Select", Q_NULLPTR));
        radioButton_follow->setText(QApplication::translate("SATendencyChartDataSelectDialog", "follow define curve x values", Q_NULLPTR));
        label_3->setText(QApplication::translate("SATendencyChartDataSelectDialog", "choose a curve to follow", Q_NULLPTR));
        radioButton_selDef->setText(QApplication::translate("SATendencyChartDataSelectDialog", "define x value", Q_NULLPTR));
        label->setText(QApplication::translate("SATendencyChartDataSelectDialog", "start:", Q_NULLPTR));
        lineEdit_start->setText(QApplication::translate("SATendencyChartDataSelectDialog", "0.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("SATendencyChartDataSelectDialog", "Growth value:", Q_NULLPTR));
        lineEdit_added->setText(QApplication::translate("SATendencyChartDataSelectDialog", "1.0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SATendencyChartDataSelectDialog: public Ui_SATendencyChartDataSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATENDENCYCHARTDATASELECTDIALOG_H
