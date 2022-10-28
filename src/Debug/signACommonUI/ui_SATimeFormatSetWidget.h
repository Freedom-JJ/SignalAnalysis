/********************************************************************************
** Form generated from reading UI file 'SATimeFormatSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATIMEFORMATSETWIDGET_H
#define UI_SATIMEFORMATSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SATimeFormatSetWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label1;
    QComboBox *comboBox;
    QLabel *label2;
    QLabel *labelExample;

    void setupUi(QWidget *SATimeFormatSetWidget)
    {
        if (SATimeFormatSetWidget->objectName().isEmpty())
            SATimeFormatSetWidget->setObjectName(QStringLiteral("SATimeFormatSetWidget"));
        SATimeFormatSetWidget->resize(289, 104);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SATimeFormatSetWidget->sizePolicy().hasHeightForWidth());
        SATimeFormatSetWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(SATimeFormatSetWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label1 = new QLabel(SATimeFormatSetWidget);
        label1->setObjectName(QStringLiteral("label1"));

        horizontalLayout->addWidget(label1);

        comboBox = new QComboBox(SATimeFormatSetWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(true);

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        label2 = new QLabel(SATimeFormatSetWidget);
        label2->setObjectName(QStringLiteral("label2"));

        verticalLayout->addWidget(label2);

        labelExample = new QLabel(SATimeFormatSetWidget);
        labelExample->setObjectName(QStringLiteral("labelExample"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelExample->sizePolicy().hasHeightForWidth());
        labelExample->setSizePolicy(sizePolicy1);
        labelExample->setMinimumSize(QSize(0, 40));
        labelExample->setFrameShape(QFrame::StyledPanel);
        labelExample->setFrameShadow(QFrame::Plain);
        labelExample->setMidLineWidth(0);
        labelExample->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelExample);


        retranslateUi(SATimeFormatSetWidget);

        QMetaObject::connectSlotsByName(SATimeFormatSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SATimeFormatSetWidget)
    {
        SATimeFormatSetWidget->setWindowTitle(QApplication::translate("SATimeFormatSetWidget", "Time Format Set", Q_NULLPTR));
        label1->setText(QApplication::translate("SATimeFormatSetWidget", "select time format\357\274\232", Q_NULLPTR));
        label2->setText(QApplication::translate("SATimeFormatSetWidget", "example:", Q_NULLPTR));
        labelExample->setText(QApplication::translate("SATimeFormatSetWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SATimeFormatSetWidget: public Ui_SATimeFormatSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATIMEFORMATSETWIDGET_H
