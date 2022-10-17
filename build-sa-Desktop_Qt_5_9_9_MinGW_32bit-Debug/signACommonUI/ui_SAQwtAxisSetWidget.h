/********************************************************************************
** Form generated from reading UI file 'SAQwtAxisSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAQWTAXISSETWIDGET_H
#define UI_SAQWTAXISSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SAAligmentSetWidget.h"
#include "SAFontSetWidget.h"
#include "SATimeFormatSetWidget.h"

QT_BEGIN_NAMESPACE

class Ui_SAQwtAxisSetWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxEnable;
    QHBoxLayout *horizontalLayoutTitle;
    QLabel *labelTitle;
    QLineEdit *lineEditTitle;
    QHBoxLayout *horizontalLayoutFont;
    QLabel *labelFont;
    SAFontSetWidget *fontSetWidget;
    QHBoxLayout *horizontalLayoutAligment;
    QLabel *labelAligment;
    SAAligmentSetWidget *aligmentSetWidget;
    QGridLayout *gridLayout;
    QLabel *labelRotation;
    QDoubleSpinBox *doubleSpinBoxRotation;
    QLabel *labelMargin;
    QSpinBox *spinBoxMargin;
    QLabel *labelMinScale;
    QDoubleSpinBox *doubleSpinBoxMin;
    QLabel *labelMaxScale;
    QDoubleSpinBox *doubleSpinBoxMax;
    QRadioButton *radioButtonNormal;
    QRadioButton *radioButtonTimeScale;
    SATimeFormatSetWidget *dateTimeScaleSetWidget;

    void setupUi(QWidget *SAQwtAxisSetWidget)
    {
        if (SAQwtAxisSetWidget->objectName().isEmpty())
            SAQwtAxisSetWidget->setObjectName(QStringLiteral("SAQwtAxisSetWidget"));
        SAQwtAxisSetWidget->resize(245, 290);
        verticalLayout = new QVBoxLayout(SAQwtAxisSetWidget);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        checkBoxEnable = new QCheckBox(SAQwtAxisSetWidget);
        checkBoxEnable->setObjectName(QStringLiteral("checkBoxEnable"));

        verticalLayout->addWidget(checkBoxEnable);

        horizontalLayoutTitle = new QHBoxLayout();
        horizontalLayoutTitle->setSpacing(4);
        horizontalLayoutTitle->setObjectName(QStringLiteral("horizontalLayoutTitle"));
        labelTitle = new QLabel(SAQwtAxisSetWidget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        horizontalLayoutTitle->addWidget(labelTitle);

        lineEditTitle = new QLineEdit(SAQwtAxisSetWidget);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));

        horizontalLayoutTitle->addWidget(lineEditTitle);


        verticalLayout->addLayout(horizontalLayoutTitle);

        horizontalLayoutFont = new QHBoxLayout();
        horizontalLayoutFont->setSpacing(4);
        horizontalLayoutFont->setObjectName(QStringLiteral("horizontalLayoutFont"));
        labelFont = new QLabel(SAQwtAxisSetWidget);
        labelFont->setObjectName(QStringLiteral("labelFont"));

        horizontalLayoutFont->addWidget(labelFont);

        fontSetWidget = new SAFontSetWidget(SAQwtAxisSetWidget);
        fontSetWidget->setObjectName(QStringLiteral("fontSetWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontSetWidget->sizePolicy().hasHeightForWidth());
        fontSetWidget->setSizePolicy(sizePolicy);
        fontSetWidget->setMinimumSize(QSize(0, 20));

        horizontalLayoutFont->addWidget(fontSetWidget);


        verticalLayout->addLayout(horizontalLayoutFont);

        horizontalLayoutAligment = new QHBoxLayout();
        horizontalLayoutAligment->setSpacing(4);
        horizontalLayoutAligment->setObjectName(QStringLiteral("horizontalLayoutAligment"));
        labelAligment = new QLabel(SAQwtAxisSetWidget);
        labelAligment->setObjectName(QStringLiteral("labelAligment"));

        horizontalLayoutAligment->addWidget(labelAligment);

        aligmentSetWidget = new SAAligmentSetWidget(SAQwtAxisSetWidget);
        aligmentSetWidget->setObjectName(QStringLiteral("aligmentSetWidget"));

        horizontalLayoutAligment->addWidget(aligmentSetWidget);


        verticalLayout->addLayout(horizontalLayoutAligment);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelRotation = new QLabel(SAQwtAxisSetWidget);
        labelRotation->setObjectName(QStringLiteral("labelRotation"));

        gridLayout->addWidget(labelRotation, 0, 0, 1, 1);

        doubleSpinBoxRotation = new QDoubleSpinBox(SAQwtAxisSetWidget);
        doubleSpinBoxRotation->setObjectName(QStringLiteral("doubleSpinBoxRotation"));

        gridLayout->addWidget(doubleSpinBoxRotation, 0, 1, 1, 1);

        labelMargin = new QLabel(SAQwtAxisSetWidget);
        labelMargin->setObjectName(QStringLiteral("labelMargin"));

        gridLayout->addWidget(labelMargin, 1, 0, 1, 1);

        spinBoxMargin = new QSpinBox(SAQwtAxisSetWidget);
        spinBoxMargin->setObjectName(QStringLiteral("spinBoxMargin"));
        spinBoxMargin->setMinimum(-10);

        gridLayout->addWidget(spinBoxMargin, 1, 1, 1, 1);

        labelMinScale = new QLabel(SAQwtAxisSetWidget);
        labelMinScale->setObjectName(QStringLiteral("labelMinScale"));

        gridLayout->addWidget(labelMinScale, 2, 0, 1, 1);

        doubleSpinBoxMin = new QDoubleSpinBox(SAQwtAxisSetWidget);
        doubleSpinBoxMin->setObjectName(QStringLiteral("doubleSpinBoxMin"));
        doubleSpinBoxMin->setDecimals(5);
        doubleSpinBoxMin->setMinimum(-1e+97);
        doubleSpinBoxMin->setMaximum(1e+86);

        gridLayout->addWidget(doubleSpinBoxMin, 2, 1, 1, 1);

        labelMaxScale = new QLabel(SAQwtAxisSetWidget);
        labelMaxScale->setObjectName(QStringLiteral("labelMaxScale"));

        gridLayout->addWidget(labelMaxScale, 3, 0, 1, 1);

        doubleSpinBoxMax = new QDoubleSpinBox(SAQwtAxisSetWidget);
        doubleSpinBoxMax->setObjectName(QStringLiteral("doubleSpinBoxMax"));
        doubleSpinBoxMax->setDecimals(5);
        doubleSpinBoxMax->setMinimum(-1e+71);
        doubleSpinBoxMax->setMaximum(1e+60);

        gridLayout->addWidget(doubleSpinBoxMax, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        radioButtonNormal = new QRadioButton(SAQwtAxisSetWidget);
        radioButtonNormal->setObjectName(QStringLiteral("radioButtonNormal"));

        verticalLayout->addWidget(radioButtonNormal);

        radioButtonTimeScale = new QRadioButton(SAQwtAxisSetWidget);
        radioButtonTimeScale->setObjectName(QStringLiteral("radioButtonTimeScale"));

        verticalLayout->addWidget(radioButtonTimeScale);

        dateTimeScaleSetWidget = new SATimeFormatSetWidget(SAQwtAxisSetWidget);
        dateTimeScaleSetWidget->setObjectName(QStringLiteral("dateTimeScaleSetWidget"));

        verticalLayout->addWidget(dateTimeScaleSetWidget);


        retranslateUi(SAQwtAxisSetWidget);
        QObject::connect(radioButtonTimeScale, SIGNAL(clicked(bool)), dateTimeScaleSetWidget, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SAQwtAxisSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAQwtAxisSetWidget)
    {
        SAQwtAxisSetWidget->setWindowTitle(QApplication::translate("SAQwtAxisSetWidget", "Axis Set", Q_NULLPTR));
        checkBoxEnable->setText(QApplication::translate("SAQwtAxisSetWidget", "enable", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SAQwtAxisSetWidget", "title", Q_NULLPTR));
        labelFont->setText(QApplication::translate("SAQwtAxisSetWidget", "font", Q_NULLPTR));
        labelAligment->setText(QApplication::translate("SAQwtAxisSetWidget", "label Aligment", Q_NULLPTR));
        labelRotation->setText(QApplication::translate("SAQwtAxisSetWidget", "label Rotation", Q_NULLPTR));
        labelMargin->setText(QApplication::translate("SAQwtAxisSetWidget", "margin", Q_NULLPTR));
        labelMinScale->setText(QApplication::translate("SAQwtAxisSetWidget", "min scale", Q_NULLPTR));
        labelMaxScale->setText(QApplication::translate("SAQwtAxisSetWidget", "max scale", Q_NULLPTR));
        radioButtonNormal->setText(QApplication::translate("SAQwtAxisSetWidget", "normal", Q_NULLPTR));
        radioButtonTimeScale->setText(QApplication::translate("SAQwtAxisSetWidget", "Time Scale", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SAQwtAxisSetWidget: public Ui_SAQwtAxisSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAQWTAXISSETWIDGET_H
