/********************************************************************************
** Form generated from reading UI file 'SAInformationStatusWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAINFORMATIONSTATUSWIDGET_H
#define UI_SAINFORMATIONSTATUSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAInformationStatusWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label_icon;
    QLabel *label_info;

    void setupUi(QWidget *SAInformationStatusWidget)
    {
        if (SAInformationStatusWidget->objectName().isEmpty())
            SAInformationStatusWidget->setObjectName(QStringLiteral("SAInformationStatusWidget"));
        SAInformationStatusWidget->resize(400, 27);
        horizontalLayout = new QHBoxLayout(SAInformationStatusWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_icon = new QLabel(SAInformationStatusWidget);
        label_icon->setObjectName(QStringLiteral("label_icon"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_icon->sizePolicy().hasHeightForWidth());
        label_icon->setSizePolicy(sizePolicy);
        label_icon->setMinimumSize(QSize(20, 0));
        label_icon->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label_icon);

        label_info = new QLabel(SAInformationStatusWidget);
        label_info->setObjectName(QStringLiteral("label_info"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_info->sizePolicy().hasHeightForWidth());
        label_info->setSizePolicy(sizePolicy1);
        label_info->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(label_info);


        retranslateUi(SAInformationStatusWidget);

        QMetaObject::connectSlotsByName(SAInformationStatusWidget);
    } // setupUi

    void retranslateUi(QWidget *SAInformationStatusWidget)
    {
        SAInformationStatusWidget->setWindowTitle(QApplication::translate("SAInformationStatusWidget", "Information Status", Q_NULLPTR));
        label_icon->setText(QString());
        label_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAInformationStatusWidget: public Ui_SAInformationStatusWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAINFORMATIONSTATUSWIDGET_H
