/********************************************************************************
** Form generated from reading UI file 'PickCurveDataModeSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKCURVEDATAMODESETDIALOG_H
#define UI_PICKCURVEDATAMODESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PickCurveDataModeSetDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_range;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_viewRange;
    QRadioButton *radioButton_allRange;
    QGroupBox *groupBox_type;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_xOnly;
    QRadioButton *radioButton_yOnly;
    QRadioButton *radioButton_point;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PickCurveDataModeSetDialog)
    {
        if (PickCurveDataModeSetDialog->objectName().isEmpty())
            PickCurveDataModeSetDialog->setObjectName(QStringLiteral("PickCurveDataModeSetDialog"));
        PickCurveDataModeSetDialog->resize(294, 266);
        verticalLayout_3 = new QVBoxLayout(PickCurveDataModeSetDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_range = new QGroupBox(PickCurveDataModeSetDialog);
        groupBox_range->setObjectName(QStringLiteral("groupBox_range"));
        verticalLayout_2 = new QVBoxLayout(groupBox_range);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_viewRange = new QRadioButton(groupBox_range);
        radioButton_viewRange->setObjectName(QStringLiteral("radioButton_viewRange"));

        verticalLayout_2->addWidget(radioButton_viewRange);

        radioButton_allRange = new QRadioButton(groupBox_range);
        radioButton_allRange->setObjectName(QStringLiteral("radioButton_allRange"));

        verticalLayout_2->addWidget(radioButton_allRange);


        verticalLayout_3->addWidget(groupBox_range);

        groupBox_type = new QGroupBox(PickCurveDataModeSetDialog);
        groupBox_type->setObjectName(QStringLiteral("groupBox_type"));
        verticalLayout = new QVBoxLayout(groupBox_type);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_xOnly = new QRadioButton(groupBox_type);
        radioButton_xOnly->setObjectName(QStringLiteral("radioButton_xOnly"));

        verticalLayout->addWidget(radioButton_xOnly);

        radioButton_yOnly = new QRadioButton(groupBox_type);
        radioButton_yOnly->setObjectName(QStringLiteral("radioButton_yOnly"));

        verticalLayout->addWidget(radioButton_yOnly);

        radioButton_point = new QRadioButton(groupBox_type);
        radioButton_point->setObjectName(QStringLiteral("radioButton_point"));

        verticalLayout->addWidget(radioButton_point);


        verticalLayout_3->addWidget(groupBox_type);

        buttonBox = new QDialogButtonBox(PickCurveDataModeSetDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(PickCurveDataModeSetDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), PickCurveDataModeSetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PickCurveDataModeSetDialog);
    } // setupUi

    void retranslateUi(QDialog *PickCurveDataModeSetDialog)
    {
        PickCurveDataModeSetDialog->setWindowTitle(QApplication::translate("PickCurveDataModeSetDialog", "Pick Curve Data Mode Set", Q_NULLPTR));
        groupBox_range->setTitle(QApplication::translate("PickCurveDataModeSetDialog", "select export datas range", Q_NULLPTR));
        radioButton_viewRange->setText(QApplication::translate("PickCurveDataModeSetDialog", "export current select region datas", Q_NULLPTR));
        radioButton_allRange->setText(QApplication::translate("PickCurveDataModeSetDialog", "export all datas", Q_NULLPTR));
        groupBox_type->setTitle(QApplication::translate("PickCurveDataModeSetDialog", "choose export data type", Q_NULLPTR));
        radioButton_xOnly->setText(QApplication::translate("PickCurveDataModeSetDialog", "export x value", Q_NULLPTR));
        radioButton_yOnly->setText(QApplication::translate("PickCurveDataModeSetDialog", "export y value", Q_NULLPTR));
        radioButton_point->setText(QApplication::translate("PickCurveDataModeSetDialog", "export (x,y) value", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PickCurveDataModeSetDialog: public Ui_PickCurveDataModeSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKCURVEDATAMODESETDIALOG_H
