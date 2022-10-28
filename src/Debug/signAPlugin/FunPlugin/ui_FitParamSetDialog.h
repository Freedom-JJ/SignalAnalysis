/********************************************************************************
** Form generated from reading UI file 'FitParamSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FITPARAMSETDIALOG_H
#define UI_FITPARAMSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_FitParamSetDialog
{
public:

    void setupUi(QDialog *FitParamSetDialog)
    {
        if (FitParamSetDialog->objectName().isEmpty())
            FitParamSetDialog->setObjectName(QStringLiteral("FitParamSetDialog"));
        FitParamSetDialog->resize(621, 420);

        retranslateUi(FitParamSetDialog);

        QMetaObject::connectSlotsByName(FitParamSetDialog);
    } // setupUi

    void retranslateUi(QDialog *FitParamSetDialog)
    {
        FitParamSetDialog->setWindowTitle(QApplication::translate("FitParamSetDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FitParamSetDialog: public Ui_FitParamSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FITPARAMSETDIALOG_H
