/********************************************************************************
** Form generated from reading UI file 'SAAddCurveTypeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAADDCURVETYPEDIALOG_H
#define UI_SAADDCURVETYPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SAAddCurveTypeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonNewFig;
    QRadioButton *radioButtonCurFig;
    QRadioButton *radioButtonCurFigInSubplot;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButtonMore;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAAddCurveTypeDialog)
    {
        if (SAAddCurveTypeDialog->objectName().isEmpty())
            SAAddCurveTypeDialog->setObjectName(QStringLiteral("SAAddCurveTypeDialog"));
        SAAddCurveTypeDialog->resize(284, 135);
        verticalLayout = new QVBoxLayout(SAAddCurveTypeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        radioButtonNewFig = new QRadioButton(SAAddCurveTypeDialog);
        radioButtonNewFig->setObjectName(QStringLiteral("radioButtonNewFig"));

        verticalLayout->addWidget(radioButtonNewFig);

        radioButtonCurFig = new QRadioButton(SAAddCurveTypeDialog);
        radioButtonCurFig->setObjectName(QStringLiteral("radioButtonCurFig"));

        verticalLayout->addWidget(radioButtonCurFig);

        radioButtonCurFigInSubplot = new QRadioButton(SAAddCurveTypeDialog);
        radioButtonCurFigInSubplot->setObjectName(QStringLiteral("radioButtonCurFigInSubplot"));

        verticalLayout->addWidget(radioButtonCurFigInSubplot);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButtonMore = new QToolButton(SAAddCurveTypeDialog);
        toolButtonMore->setObjectName(QStringLiteral("toolButtonMore"));
        toolButtonMore->setMinimumSize(QSize(0, 22));

        horizontalLayout->addWidget(toolButtonMore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SAAddCurveTypeDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SAAddCurveTypeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SAAddCurveTypeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SAAddCurveTypeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SAAddCurveTypeDialog);
    } // setupUi

    void retranslateUi(QDialog *SAAddCurveTypeDialog)
    {
        SAAddCurveTypeDialog->setWindowTitle(QApplication::translate("SAAddCurveTypeDialog", "Add Curve Type", Q_NULLPTR));
        radioButtonNewFig->setText(QApplication::translate("SAAddCurveTypeDialog", "add in new figure", Q_NULLPTR));
        radioButtonCurFig->setText(QApplication::translate("SAAddCurveTypeDialog", "add in current figure", Q_NULLPTR));
        radioButtonCurFigInSubplot->setText(QApplication::translate("SAAddCurveTypeDialog", "add in current figure with subplot", Q_NULLPTR));
        toolButtonMore->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAAddCurveTypeDialog: public Ui_SAAddCurveTypeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAADDCURVETYPEDIALOG_H
