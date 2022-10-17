/********************************************************************************
** Form generated from reading UI file 'SAAddLineChartSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAADDLINECHARTSETDIALOG_H
#define UI_SAADDLINECHARTSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "SAUserDefineAxisDataWidget.h"
#include "SAValueSelectComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_SAAddLineChartSetDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxX;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonXNormal;
    QRadioButton *radioButtonXUseDef;
    QSpacerItem *horizontalSpacer_2;
    SAValueSelectComboBox *valueComboBoxX;
    SAUserDefineAxisDataWidget *userDefineXWidget;
    QGroupBox *groupBoxY;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButtonYNormal;
    QRadioButton *radioButtonYUseDef;
    QSpacerItem *horizontalSpacer_3;
    SAValueSelectComboBox *valueComboBoxY;
    SAUserDefineAxisDataWidget *userDefineYWidget;
    QGroupBox *groupBoxMore;
    QGridLayout *gridLayout;
    QRadioButton *radioButtonInNewSubPlot;
    QLineEdit *lineEditTitle;
    QRadioButton *radioButtonNewFigure;
    QLabel *labelTitle;
    QRadioButton *radioButtonInCurrentChart;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayoutMain;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAAddLineChartSetDialog)
    {
        if (SAAddLineChartSetDialog->objectName().isEmpty())
            SAAddLineChartSetDialog->setObjectName(QStringLiteral("SAAddLineChartSetDialog"));
        SAAddLineChartSetDialog->resize(484, 364);
        verticalLayout_3 = new QVBoxLayout(SAAddLineChartSetDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBoxX = new QGroupBox(SAAddLineChartSetDialog);
        groupBoxX->setObjectName(QStringLiteral("groupBoxX"));
        verticalLayout_2 = new QVBoxLayout(groupBoxX);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButtonXNormal = new QRadioButton(groupBoxX);
        radioButtonXNormal->setObjectName(QStringLiteral("radioButtonXNormal"));

        horizontalLayout_4->addWidget(radioButtonXNormal);

        radioButtonXUseDef = new QRadioButton(groupBoxX);
        radioButtonXUseDef->setObjectName(QStringLiteral("radioButtonXUseDef"));

        horizontalLayout_4->addWidget(radioButtonXUseDef);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        valueComboBoxX = new SAValueSelectComboBox(groupBoxX);
        valueComboBoxX->setObjectName(QStringLiteral("valueComboBoxX"));

        verticalLayout_2->addWidget(valueComboBoxX);

        userDefineXWidget = new SAUserDefineAxisDataWidget(groupBoxX);
        userDefineXWidget->setObjectName(QStringLiteral("userDefineXWidget"));

        verticalLayout_2->addWidget(userDefineXWidget);


        verticalLayout_3->addWidget(groupBoxX);

        groupBoxY = new QGroupBox(SAAddLineChartSetDialog);
        groupBoxY->setObjectName(QStringLiteral("groupBoxY"));
        verticalLayout = new QVBoxLayout(groupBoxY);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButtonYNormal = new QRadioButton(groupBoxY);
        radioButtonYNormal->setObjectName(QStringLiteral("radioButtonYNormal"));

        horizontalLayout_5->addWidget(radioButtonYNormal);

        radioButtonYUseDef = new QRadioButton(groupBoxY);
        radioButtonYUseDef->setObjectName(QStringLiteral("radioButtonYUseDef"));

        horizontalLayout_5->addWidget(radioButtonYUseDef);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        valueComboBoxY = new SAValueSelectComboBox(groupBoxY);
        valueComboBoxY->setObjectName(QStringLiteral("valueComboBoxY"));

        verticalLayout->addWidget(valueComboBoxY);

        userDefineYWidget = new SAUserDefineAxisDataWidget(groupBoxY);
        userDefineYWidget->setObjectName(QStringLiteral("userDefineYWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userDefineYWidget->sizePolicy().hasHeightForWidth());
        userDefineYWidget->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(userDefineYWidget);


        verticalLayout_3->addWidget(groupBoxY);

        groupBoxMore = new QGroupBox(SAAddLineChartSetDialog);
        groupBoxMore->setObjectName(QStringLiteral("groupBoxMore"));
        gridLayout = new QGridLayout(groupBoxMore);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        radioButtonInNewSubPlot = new QRadioButton(groupBoxMore);
        radioButtonInNewSubPlot->setObjectName(QStringLiteral("radioButtonInNewSubPlot"));

        gridLayout->addWidget(radioButtonInNewSubPlot, 4, 0, 1, 1);

        lineEditTitle = new QLineEdit(groupBoxMore);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));

        gridLayout->addWidget(lineEditTitle, 0, 1, 1, 2);

        radioButtonNewFigure = new QRadioButton(groupBoxMore);
        radioButtonNewFigure->setObjectName(QStringLiteral("radioButtonNewFigure"));
        radioButtonNewFigure->setChecked(true);

        gridLayout->addWidget(radioButtonNewFigure, 2, 0, 1, 1);

        labelTitle = new QLabel(groupBoxMore);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        gridLayout->addWidget(labelTitle, 0, 0, 1, 1);

        radioButtonInCurrentChart = new QRadioButton(groupBoxMore);
        radioButtonInCurrentChart->setObjectName(QStringLiteral("radioButtonInCurrentChart"));

        gridLayout->addWidget(radioButtonInCurrentChart, 3, 0, 1, 1);


        verticalLayout_3->addWidget(groupBoxMore);

        verticalSpacer = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayoutMain = new QHBoxLayout();
        horizontalLayoutMain->setObjectName(QStringLiteral("horizontalLayoutMain"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutMain->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SAAddLineChartSetDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayoutMain->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayoutMain);


        retranslateUi(SAAddLineChartSetDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), SAAddLineChartSetDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), SAAddLineChartSetDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SAAddLineChartSetDialog);
    } // setupUi

    void retranslateUi(QDialog *SAAddLineChartSetDialog)
    {
        SAAddLineChartSetDialog->setWindowTitle(QApplication::translate("SAAddLineChartSetDialog", "Add Line Chart Set", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        SAAddLineChartSetDialog->setWhatsThis(QApplication::translate("SAAddLineChartSetDialog", "<html><head/><body><p>This dialog box is used to set the line graph</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        groupBoxX->setTitle(QApplication::translate("SAAddLineChartSetDialog", "X", Q_NULLPTR));
        radioButtonXNormal->setText(QApplication::translate("SAAddLineChartSetDialog", "normal", Q_NULLPTR));
        radioButtonXUseDef->setText(QApplication::translate("SAAddLineChartSetDialog", "user define", Q_NULLPTR));
        groupBoxY->setTitle(QApplication::translate("SAAddLineChartSetDialog", "Y", Q_NULLPTR));
        radioButtonYNormal->setText(QApplication::translate("SAAddLineChartSetDialog", "normal", Q_NULLPTR));
        radioButtonYUseDef->setText(QApplication::translate("SAAddLineChartSetDialog", "user define", Q_NULLPTR));
        groupBoxMore->setTitle(QApplication::translate("SAAddLineChartSetDialog", "other set", Q_NULLPTR));
        radioButtonInNewSubPlot->setText(QApplication::translate("SAAddLineChartSetDialog", "Add In New SubPlot Chart", Q_NULLPTR));
        radioButtonNewFigure->setText(QApplication::translate("SAAddLineChartSetDialog", "Add In New Figure", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SAAddLineChartSetDialog", "title", Q_NULLPTR));
        radioButtonInCurrentChart->setText(QApplication::translate("SAAddLineChartSetDialog", "Add In Current Chart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SAAddLineChartSetDialog: public Ui_SAAddLineChartSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAADDLINECHARTSETDIALOG_H
