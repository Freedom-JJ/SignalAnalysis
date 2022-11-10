/********************************************************************************
** Form generated from reading UI file 'jdynamicwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JDYNAMICWIDGET_H
#define UI_JDYNAMICWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JDynamicWidget
{
public:

    void setupUi(QWidget *JDynamicWidget)
    {
        if (JDynamicWidget->objectName().isEmpty())
            JDynamicWidget->setObjectName(QStringLiteral("JDynamicWidget"));
        JDynamicWidget->resize(778, 377);

        retranslateUi(JDynamicWidget);

        QMetaObject::connectSlotsByName(JDynamicWidget);
    } // setupUi

    void retranslateUi(QWidget *JDynamicWidget)
    {
        JDynamicWidget->setWindowTitle(QApplication::translate("JDynamicWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class JDynamicWidget: public Ui_JDynamicWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JDYNAMICWIDGET_H
