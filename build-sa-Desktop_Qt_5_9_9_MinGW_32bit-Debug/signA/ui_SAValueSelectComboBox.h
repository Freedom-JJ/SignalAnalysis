/********************************************************************************
** Form generated from reading UI file 'SAValueSelectComboBox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVALUESELECTCOMBOBOX_H
#define UI_SAVALUESELECTCOMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAValueSelectComboBox
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QToolButton *toolButton;

    void setupUi(QWidget *SAValueSelectComboBox)
    {
        if (SAValueSelectComboBox->objectName().isEmpty())
            SAValueSelectComboBox->setObjectName(QStringLiteral("SAValueSelectComboBox"));
        SAValueSelectComboBox->resize(292, 24);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SAValueSelectComboBox->sizePolicy().hasHeightForWidth());
        SAValueSelectComboBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SAValueSelectComboBox);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(SAValueSelectComboBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(SAValueSelectComboBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);
        comboBox->setEditable(true);

        horizontalLayout->addWidget(comboBox);

        toolButton = new QToolButton(SAValueSelectComboBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout->addWidget(toolButton);


        retranslateUi(SAValueSelectComboBox);

        QMetaObject::connectSlotsByName(SAValueSelectComboBox);
    } // setupUi

    void retranslateUi(QWidget *SAValueSelectComboBox)
    {
        SAValueSelectComboBox->setWindowTitle(QApplication::translate("SAValueSelectComboBox", "Value Select ComboBox", Q_NULLPTR));
        label->setText(QApplication::translate("SAValueSelectComboBox", "select value:", Q_NULLPTR));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAValueSelectComboBox: public Ui_SAValueSelectComboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVALUESELECTCOMBOBOX_H
