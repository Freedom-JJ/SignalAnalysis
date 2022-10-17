/********************************************************************************
** Form generated from reading UI file 'SAUserDefineAxisDataWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAUSERDEFINEAXISDATAWIDGET_H
#define UI_SAUSERDEFINEAXISDATAWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAUserDefineAxisDataWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelStart;
    QDoubleSpinBox *doubleSpinBoxStart;
    QLabel *labelDetal;
    QDoubleSpinBox *doubleSpinBoxIncrease;
    QLabel *labelExample;

    void setupUi(QWidget *SAUserDefineAxisDataWidget)
    {
        if (SAUserDefineAxisDataWidget->objectName().isEmpty())
            SAUserDefineAxisDataWidget->setObjectName(QStringLiteral("SAUserDefineAxisDataWidget"));
        SAUserDefineAxisDataWidget->resize(400, 60);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SAUserDefineAxisDataWidget->sizePolicy().hasHeightForWidth());
        SAUserDefineAxisDataWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SAUserDefineAxisDataWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelStart = new QLabel(SAUserDefineAxisDataWidget);
        labelStart->setObjectName(QStringLiteral("labelStart"));

        horizontalLayout->addWidget(labelStart);

        doubleSpinBoxStart = new QDoubleSpinBox(SAUserDefineAxisDataWidget);
        doubleSpinBoxStart->setObjectName(QStringLiteral("doubleSpinBoxStart"));
        doubleSpinBoxStart->setMinimum(-1e+69);
        doubleSpinBoxStart->setMaximum(1e+71);

        horizontalLayout->addWidget(doubleSpinBoxStart);

        labelDetal = new QLabel(SAUserDefineAxisDataWidget);
        labelDetal->setObjectName(QStringLiteral("labelDetal"));

        horizontalLayout->addWidget(labelDetal);

        doubleSpinBoxIncrease = new QDoubleSpinBox(SAUserDefineAxisDataWidget);
        doubleSpinBoxIncrease->setObjectName(QStringLiteral("doubleSpinBoxIncrease"));
        doubleSpinBoxIncrease->setDecimals(5);
        doubleSpinBoxIncrease->setMinimum(-1e+55);
        doubleSpinBoxIncrease->setMaximum(1e+68);

        horizontalLayout->addWidget(doubleSpinBoxIncrease);


        verticalLayout->addLayout(horizontalLayout);

        labelExample = new QLabel(SAUserDefineAxisDataWidget);
        labelExample->setObjectName(QStringLiteral("labelExample"));

        verticalLayout->addWidget(labelExample);


        retranslateUi(SAUserDefineAxisDataWidget);

        QMetaObject::connectSlotsByName(SAUserDefineAxisDataWidget);
    } // setupUi

    void retranslateUi(QWidget *SAUserDefineAxisDataWidget)
    {
        SAUserDefineAxisDataWidget->setWindowTitle(QApplication::translate("SAUserDefineAxisDataWidget", "User Define Axis Data", Q_NULLPTR));
        labelStart->setText(QApplication::translate("SAUserDefineAxisDataWidget", "start:", Q_NULLPTR));
        labelDetal->setText(QApplication::translate("SAUserDefineAxisDataWidget", "increase:", Q_NULLPTR));
        labelExample->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAUserDefineAxisDataWidget: public Ui_SAUserDefineAxisDataWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAUSERDEFINEAXISDATAWIDGET_H
