/********************************************************************************
** Form generated from reading UI file 'SAQwtSymbolSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAQWTSYMBOLSETWIDGET_H
#define UI_SAQWTSYMBOLSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SAColorPickerButton.h"
#include "SAPenSetWidget.h"
#include "SAQwtSymbolComboBox.h"

QT_BEGIN_NAMESPACE

class Ui_SAQwtSymbolSetWidget
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    SAQwtSymbolComboBox *comboBoxSymbolStyle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QToolButton *toolButtonFixWidthHeight;
    QVBoxLayout *verticalLayout;
    QSpinBox *spinBoxSizeX;
    QSpinBox *spinBoxSizeY;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    SAPenSetWidget *edgetPenSet;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    SAColorPickerButton *colorPushButtonBrush;
    QSlider *horizontalSliderBrushAlpha;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLabel *labelPreview;

    void setupUi(QWidget *SAQwtSymbolSetWidget)
    {
        if (SAQwtSymbolSetWidget->objectName().isEmpty())
            SAQwtSymbolSetWidget->setObjectName(QStringLiteral("SAQwtSymbolSetWidget"));
        SAQwtSymbolSetWidget->resize(200, 308);
        verticalLayout_5 = new QVBoxLayout(SAQwtSymbolSetWidget);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SAQwtSymbolSetWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBoxSymbolStyle = new SAQwtSymbolComboBox(SAQwtSymbolSetWidget);
        comboBoxSymbolStyle->setObjectName(QStringLiteral("comboBoxSymbolStyle"));

        horizontalLayout->addWidget(comboBoxSymbolStyle);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(4);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        label_2 = new QLabel(SAQwtSymbolSetWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        toolButtonFixWidthHeight = new QToolButton(SAQwtSymbolSetWidget);
        toolButtonFixWidthHeight->setObjectName(QStringLiteral("toolButtonFixWidthHeight"));
        toolButtonFixWidthHeight->setMinimumSize(QSize(12, 22));
        toolButtonFixWidthHeight->setMaximumSize(QSize(12, 22));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icons/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonFixWidthHeight->setIcon(icon);
        toolButtonFixWidthHeight->setIconSize(QSize(12, 22));
        toolButtonFixWidthHeight->setCheckable(true);
        toolButtonFixWidthHeight->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButtonFixWidthHeight);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        spinBoxSizeX = new QSpinBox(SAQwtSymbolSetWidget);
        spinBoxSizeX->setObjectName(QStringLiteral("spinBoxSizeX"));
        spinBoxSizeX->setMaximum(999);

        verticalLayout->addWidget(spinBoxSizeX);

        spinBoxSizeY = new QSpinBox(SAQwtSymbolSetWidget);
        spinBoxSizeY->setObjectName(QStringLiteral("spinBoxSizeY"));
        spinBoxSizeY->setMaximum(999);

        verticalLayout->addWidget(spinBoxSizeY);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_5->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(SAQwtSymbolSetWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        edgetPenSet = new SAPenSetWidget(groupBox);
        edgetPenSet->setObjectName(QStringLiteral("edgetPenSet"));
        edgetPenSet->setMinimumSize(QSize(0, 100));

        verticalLayout_2->addWidget(edgetPenSet);


        verticalLayout_5->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(SAQwtSymbolSetWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        colorPushButtonBrush = new SAColorPickerButton(SAQwtSymbolSetWidget);
        colorPushButtonBrush->setObjectName(QStringLiteral("colorPushButtonBrush"));

        verticalLayout_3->addWidget(colorPushButtonBrush);

        horizontalSliderBrushAlpha = new QSlider(SAQwtSymbolSetWidget);
        horizontalSliderBrushAlpha->setObjectName(QStringLiteral("horizontalSliderBrushAlpha"));
        horizontalSliderBrushAlpha->setMaximum(255);
        horizontalSliderBrushAlpha->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(horizontalSliderBrushAlpha);


        horizontalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(SAQwtSymbolSetWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        labelPreview = new QLabel(SAQwtSymbolSetWidget);
        labelPreview->setObjectName(QStringLiteral("labelPreview"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelPreview->sizePolicy().hasHeightForWidth());
        labelPreview->setSizePolicy(sizePolicy1);
        labelPreview->setMinimumSize(QSize(0, 30));

        verticalLayout_4->addWidget(labelPreview);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(SAQwtSymbolSetWidget);

        QMetaObject::connectSlotsByName(SAQwtSymbolSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAQwtSymbolSetWidget)
    {
        SAQwtSymbolSetWidget->setWindowTitle(QApplication::translate("SAQwtSymbolSetWidget", "Symbol Set Widget", Q_NULLPTR));
        label->setText(QApplication::translate("SAQwtSymbolSetWidget", "style:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SAQwtSymbolSetWidget", "size:", Q_NULLPTR));
        toolButtonFixWidthHeight->setText(QString());
        groupBox->setTitle(QApplication::translate("SAQwtSymbolSetWidget", "Edge", Q_NULLPTR));
        label_4->setText(QApplication::translate("SAQwtSymbolSetWidget", "Fill", Q_NULLPTR));
        colorPushButtonBrush->setText(QString());
        label_5->setText(QApplication::translate("SAQwtSymbolSetWidget", "preview:", Q_NULLPTR));
        labelPreview->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAQwtSymbolSetWidget: public Ui_SAQwtSymbolSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAQWTSYMBOLSETWIDGET_H
