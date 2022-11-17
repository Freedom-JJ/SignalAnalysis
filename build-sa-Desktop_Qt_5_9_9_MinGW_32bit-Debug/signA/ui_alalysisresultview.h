/********************************************************************************
** Form generated from reading UI file 'alalysisresultview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALALYSISRESULTVIEW_H
#define UI_ALALYSISRESULTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlalysisResultView
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label;
    QTableWidget *tableWidget;

    void setupUi(QWidget *AlalysisResultView)
    {
        if (AlalysisResultView->objectName().isEmpty())
            AlalysisResultView->setObjectName(QStringLiteral("AlalysisResultView"));
        AlalysisResultView->resize(482, 334);
        gridLayout_2 = new QGridLayout(AlalysisResultView);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(AlalysisResultView);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label = new QLabel(AlalysisResultView);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tableWidget = new QTableWidget(AlalysisResultView);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(AlalysisResultView);

        QMetaObject::connectSlotsByName(AlalysisResultView);
    } // setupUi

    void retranslateUi(QWidget *AlalysisResultView)
    {
        AlalysisResultView->setWindowTitle(QApplication::translate("AlalysisResultView", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AlalysisResultView", "\345\210\207\346\215\242\351\200\232\351\201\223", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlalysisResultView: public Ui_AlalysisResultView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALALYSISRESULTVIEW_H
