/********************************************************************************
** Form generated from reading UI file 'SAQwtPlotItemAxisBindSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAQWTPLOTITEMAXISBINDSETWIDGET_H
#define UI_SAQWTPLOTITEMAXISBINDSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAQwtPlotItemAxisBindSetWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QToolButton *toolButtonXTop;
    QToolButton *toolButtonXBottom;
    QLabel *label_2;
    QToolButton *toolButtonYLeft;
    QToolButton *toolButtonYRight;

    void setupUi(QWidget *SAQwtPlotItemAxisBindSetWidget)
    {
        if (SAQwtPlotItemAxisBindSetWidget->objectName().isEmpty())
            SAQwtPlotItemAxisBindSetWidget->setObjectName(QStringLiteral("SAQwtPlotItemAxisBindSetWidget"));
        SAQwtPlotItemAxisBindSetWidget->resize(176, 22);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SAQwtPlotItemAxisBindSetWidget->sizePolicy().hasHeightForWidth());
        SAQwtPlotItemAxisBindSetWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SAQwtPlotItemAxisBindSetWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(SAQwtPlotItemAxisBindSetWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        toolButtonXTop = new QToolButton(SAQwtPlotItemAxisBindSetWidget);
        toolButtonXTop->setObjectName(QStringLiteral("toolButtonXTop"));
        toolButtonXTop->setMinimumSize(QSize(0, 18));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icons/xTop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonXTop->setIcon(icon);
        toolButtonXTop->setCheckable(true);
        toolButtonXTop->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonXTop);

        toolButtonXBottom = new QToolButton(SAQwtPlotItemAxisBindSetWidget);
        toolButtonXBottom->setObjectName(QStringLiteral("toolButtonXBottom"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icons/xBottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonXBottom->setIcon(icon1);
        toolButtonXBottom->setCheckable(true);
        toolButtonXBottom->setChecked(true);
        toolButtonXBottom->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonXBottom);

        label_2 = new QLabel(SAQwtPlotItemAxisBindSetWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        toolButtonYLeft = new QToolButton(SAQwtPlotItemAxisBindSetWidget);
        toolButtonYLeft->setObjectName(QStringLiteral("toolButtonYLeft"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icons/yLeft.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonYLeft->setIcon(icon2);
        toolButtonYLeft->setCheckable(true);
        toolButtonYLeft->setChecked(true);
        toolButtonYLeft->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonYLeft);

        toolButtonYRight = new QToolButton(SAQwtPlotItemAxisBindSetWidget);
        toolButtonYRight->setObjectName(QStringLiteral("toolButtonYRight"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/icons/yRight.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonYRight->setIcon(icon3);
        toolButtonYRight->setCheckable(true);
        toolButtonYRight->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonYRight);


        retranslateUi(SAQwtPlotItemAxisBindSetWidget);

        QMetaObject::connectSlotsByName(SAQwtPlotItemAxisBindSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAQwtPlotItemAxisBindSetWidget)
    {
        SAQwtPlotItemAxisBindSetWidget->setWindowTitle(QApplication::translate("SAQwtPlotItemAxisBindSetWidget", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SAQwtPlotItemAxisBindSetWidget", "X Axis:", Q_NULLPTR));
        toolButtonXTop->setText(QString());
        toolButtonXBottom->setText(QString());
        label_2->setText(QApplication::translate("SAQwtPlotItemAxisBindSetWidget", "Y Axis:", Q_NULLPTR));
        toolButtonYLeft->setText(QString());
        toolButtonYRight->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAQwtPlotItemAxisBindSetWidget: public Ui_SAQwtPlotItemAxisBindSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAQWTPLOTITEMAXISBINDSETWIDGET_H
