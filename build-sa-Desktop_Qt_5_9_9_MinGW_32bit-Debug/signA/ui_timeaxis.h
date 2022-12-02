/********************************************************************************
** Form generated from reading UI file 'timeaxis.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEAXIS_H
#define UI_TIMEAXIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TimeAxis
{
public:
    QCheckBox *checkBox;

    void setupUi(QWidget *TimeAxis)
    {
        if (TimeAxis->objectName().isEmpty())
            TimeAxis->setObjectName(QStringLiteral("TimeAxis"));
        TimeAxis->resize(618, 51);
        checkBox = new QCheckBox(TimeAxis);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(150, 20, 87, 19));

        retranslateUi(TimeAxis);

        QMetaObject::connectSlotsByName(TimeAxis);
    } // setupUi

    void retranslateUi(QWidget *TimeAxis)
    {
        TimeAxis->setWindowTitle(QApplication::translate("TimeAxis", "Form", Q_NULLPTR));
        checkBox->setText(QApplication::translate("TimeAxis", "CheckBox", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TimeAxis: public Ui_TimeAxis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEAXIS_H
