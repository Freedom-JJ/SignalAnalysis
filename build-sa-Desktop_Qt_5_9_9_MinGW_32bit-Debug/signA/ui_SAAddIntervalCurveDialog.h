/********************************************************************************
** Form generated from reading UI file 'SAAddIntervalCurveDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAADDINTERVALCURVEDIALOG_H
#define UI_SAADDINTERVALCURVEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "SAValueSelectComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_SAAddIntervalCurveDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxValue;
    QVBoxLayout *verticalLayout_2;
    SAValueSelectComboBox *valueComboBoxValue;
    QGroupBox *groupBoxMin;
    QVBoxLayout *verticalLayout;
    SAValueSelectComboBox *valueComboBoxMin;
    QGroupBox *groupBoxMax;
    QVBoxLayout *verticalLayout_3;
    SAValueSelectComboBox *valueComboBoxMax;
    QGroupBox *groupBoxMore;
    QGridLayout *gridLayout;
    QLineEdit *lineEditTitle;
    QLabel *labelTitle;
    QLabel *labelAddInCurrentChart;
    QCheckBox *checkBoxAddInCur;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayoutMain;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAAddIntervalCurveDialog)
    {
        if (SAAddIntervalCurveDialog->objectName().isEmpty())
            SAAddIntervalCurveDialog->setObjectName(QStringLiteral("SAAddIntervalCurveDialog"));
        SAAddIntervalCurveDialog->resize(576, 403);
        verticalLayout_4 = new QVBoxLayout(SAAddIntervalCurveDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBoxValue = new QGroupBox(SAAddIntervalCurveDialog);
        groupBoxValue->setObjectName(QStringLiteral("groupBoxValue"));
        verticalLayout_2 = new QVBoxLayout(groupBoxValue);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        valueComboBoxValue = new SAValueSelectComboBox(groupBoxValue);
        valueComboBoxValue->setObjectName(QStringLiteral("valueComboBoxValue"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(valueComboBoxValue->sizePolicy().hasHeightForWidth());
        valueComboBoxValue->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(valueComboBoxValue);


        verticalLayout_4->addWidget(groupBoxValue);

        groupBoxMin = new QGroupBox(SAAddIntervalCurveDialog);
        groupBoxMin->setObjectName(QStringLiteral("groupBoxMin"));
        verticalLayout = new QVBoxLayout(groupBoxMin);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        valueComboBoxMin = new SAValueSelectComboBox(groupBoxMin);
        valueComboBoxMin->setObjectName(QStringLiteral("valueComboBoxMin"));
        sizePolicy.setHeightForWidth(valueComboBoxMin->sizePolicy().hasHeightForWidth());
        valueComboBoxMin->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(valueComboBoxMin);


        verticalLayout_4->addWidget(groupBoxMin);

        groupBoxMax = new QGroupBox(SAAddIntervalCurveDialog);
        groupBoxMax->setObjectName(QStringLiteral("groupBoxMax"));
        verticalLayout_3 = new QVBoxLayout(groupBoxMax);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        valueComboBoxMax = new SAValueSelectComboBox(groupBoxMax);
        valueComboBoxMax->setObjectName(QStringLiteral("valueComboBoxMax"));
        sizePolicy.setHeightForWidth(valueComboBoxMax->sizePolicy().hasHeightForWidth());
        valueComboBoxMax->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(valueComboBoxMax);


        verticalLayout_4->addWidget(groupBoxMax);

        groupBoxMore = new QGroupBox(SAAddIntervalCurveDialog);
        groupBoxMore->setObjectName(QStringLiteral("groupBoxMore"));
        gridLayout = new QGridLayout(groupBoxMore);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEditTitle = new QLineEdit(groupBoxMore);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));

        gridLayout->addWidget(lineEditTitle, 0, 1, 1, 3);

        labelTitle = new QLabel(groupBoxMore);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        gridLayout->addWidget(labelTitle, 0, 0, 1, 1);

        labelAddInCurrentChart = new QLabel(groupBoxMore);
        labelAddInCurrentChart->setObjectName(QStringLiteral("labelAddInCurrentChart"));

        gridLayout->addWidget(labelAddInCurrentChart, 1, 0, 1, 1);

        checkBoxAddInCur = new QCheckBox(groupBoxMore);
        checkBoxAddInCur->setObjectName(QStringLiteral("checkBoxAddInCur"));

        gridLayout->addWidget(checkBoxAddInCur, 1, 1, 1, 3);


        verticalLayout_4->addWidget(groupBoxMore);

        verticalSpacer = new QSpacerItem(20, 130, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayoutMain = new QHBoxLayout();
        horizontalLayoutMain->setObjectName(QStringLiteral("horizontalLayoutMain"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutMain->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SAAddIntervalCurveDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayoutMain->addWidget(buttonBox);


        verticalLayout_4->addLayout(horizontalLayoutMain);


        retranslateUi(SAAddIntervalCurveDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), SAAddIntervalCurveDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), SAAddIntervalCurveDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(SAAddIntervalCurveDialog);
    } // setupUi

    void retranslateUi(QDialog *SAAddIntervalCurveDialog)
    {
        SAAddIntervalCurveDialog->setWindowTitle(QApplication::translate("SAAddIntervalCurveDialog", "Dialog", Q_NULLPTR));
        groupBoxValue->setTitle(QApplication::translate("SAAddIntervalCurveDialog", "Value", Q_NULLPTR));
        groupBoxMin->setTitle(QApplication::translate("SAAddIntervalCurveDialog", "Max", Q_NULLPTR));
        groupBoxMax->setTitle(QApplication::translate("SAAddIntervalCurveDialog", "Max", Q_NULLPTR));
        groupBoxMore->setTitle(QApplication::translate("SAAddIntervalCurveDialog", "other set", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SAAddIntervalCurveDialog", "title", Q_NULLPTR));
        labelAddInCurrentChart->setText(QApplication::translate("SAAddIntervalCurveDialog", "Add in current chart", Q_NULLPTR));
        checkBoxAddInCur->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAAddIntervalCurveDialog: public Ui_SAAddIntervalCurveDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAADDINTERVALCURVEDIALOG_H
