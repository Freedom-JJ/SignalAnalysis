/********************************************************************************
** Form generated from reading UI file 'SAAligmentSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAALIGMENTSETWIDGET_H
#define UI_SAALIGMENTSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAAligmentSetWidget
{
public:

    void setupUi(QWidget *SAAligmentSetWidget)
    {
        if (SAAligmentSetWidget->objectName().isEmpty())
            SAAligmentSetWidget->setObjectName(QStringLiteral("SAAligmentSetWidget"));
        SAAligmentSetWidget->resize(329, 64);

        retranslateUi(SAAligmentSetWidget);

        QMetaObject::connectSlotsByName(SAAligmentSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAAligmentSetWidget)
    {
        SAAligmentSetWidget->setWindowTitle(QApplication::translate("SAAligmentSetWidget", "Aligment Set", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SAAligmentSetWidget: public Ui_SAAligmentSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAALIGMENTSETWIDGET_H
