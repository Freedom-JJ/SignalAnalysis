/********************************************************************************
** Form generated from reading UI file 'SAChartAxesSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SACHARTAXESSETWIDGET_H
#define UI_SACHARTAXESSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SACollapsibleGroupBox.h"

QT_BEGIN_NAMESPACE

class Ui_SAChartAxesSetWidget
{
public:
    QVBoxLayout *verticalLayout;
    SACollapsibleGroupBox *groupBoxXBottom;
    SACollapsibleGroupBox *groupBoxYLeft;
    SACollapsibleGroupBox *groupBoxXTop;
    SACollapsibleGroupBox *groupBoxYRight;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SAChartAxesSetWidget)
    {
        if (SAChartAxesSetWidget->objectName().isEmpty())
            SAChartAxesSetWidget->setObjectName(QStringLiteral("SAChartAxesSetWidget"));
        SAChartAxesSetWidget->resize(218, 255);
        verticalLayout = new QVBoxLayout(SAChartAxesSetWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxXBottom = new SACollapsibleGroupBox(SAChartAxesSetWidget);
        groupBoxXBottom->setObjectName(QStringLiteral("groupBoxXBottom"));

        verticalLayout->addWidget(groupBoxXBottom);

        groupBoxYLeft = new SACollapsibleGroupBox(SAChartAxesSetWidget);
        groupBoxYLeft->setObjectName(QStringLiteral("groupBoxYLeft"));

        verticalLayout->addWidget(groupBoxYLeft);

        groupBoxXTop = new SACollapsibleGroupBox(SAChartAxesSetWidget);
        groupBoxXTop->setObjectName(QStringLiteral("groupBoxXTop"));

        verticalLayout->addWidget(groupBoxXTop);

        groupBoxYRight = new SACollapsibleGroupBox(SAChartAxesSetWidget);
        groupBoxYRight->setObjectName(QStringLiteral("groupBoxYRight"));

        verticalLayout->addWidget(groupBoxYRight);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SAChartAxesSetWidget);

        QMetaObject::connectSlotsByName(SAChartAxesSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAChartAxesSetWidget)
    {
        SAChartAxesSetWidget->setWindowTitle(QApplication::translate("SAChartAxesSetWidget", "Chart Axes Set", Q_NULLPTR));
        groupBoxXBottom->setTitle(QApplication::translate("SAChartAxesSetWidget", "X Bottom", Q_NULLPTR));
        groupBoxYLeft->setTitle(QApplication::translate("SAChartAxesSetWidget", "Y Left", Q_NULLPTR));
        groupBoxXTop->setTitle(QApplication::translate("SAChartAxesSetWidget", "X Top", Q_NULLPTR));
        groupBoxYRight->setTitle(QApplication::translate("SAChartAxesSetWidget", "Y Right", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SAChartAxesSetWidget: public Ui_SAChartAxesSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SACHARTAXESSETWIDGET_H
