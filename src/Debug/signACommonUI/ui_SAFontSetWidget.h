/********************************************************************************
** Form generated from reading UI file 'SAFontSetWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFONTSETWIDGET_H
#define UI_SAFONTSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAFontSetWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QFontComboBox *fontComboBox;
    QToolButton *toolButtonBold;
    QToolButton *toolButtonItalic;
    QToolButton *toolButtonFontSet;

    void setupUi(QWidget *SAFontSetWidget)
    {
        if (SAFontSetWidget->objectName().isEmpty())
            SAFontSetWidget->setObjectName(QStringLiteral("SAFontSetWidget"));
        SAFontSetWidget->resize(282, 22);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SAFontSetWidget->sizePolicy().hasHeightForWidth());
        SAFontSetWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(SAFontSetWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fontComboBox = new QFontComboBox(SAFontSetWidget);
        fontComboBox->setObjectName(QStringLiteral("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        toolButtonBold = new QToolButton(SAFontSetWidget);
        toolButtonBold->setObjectName(QStringLiteral("toolButtonBold"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonBold->setIcon(icon);
        toolButtonBold->setCheckable(true);
        toolButtonBold->setChecked(false);
        toolButtonBold->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonBold);

        toolButtonItalic = new QToolButton(SAFontSetWidget);
        toolButtonItalic->setObjectName(QStringLiteral("toolButtonItalic"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/icons/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonItalic->setIcon(icon1);
        toolButtonItalic->setCheckable(true);
        toolButtonItalic->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonItalic);

        toolButtonFontSet = new QToolButton(SAFontSetWidget);
        toolButtonFontSet->setObjectName(QStringLiteral("toolButtonFontSet"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/icons/fontSet.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButtonFontSet->setIcon(icon2);
        toolButtonFontSet->setAutoRaise(true);

        horizontalLayout->addWidget(toolButtonFontSet);


        retranslateUi(SAFontSetWidget);

        QMetaObject::connectSlotsByName(SAFontSetWidget);
    } // setupUi

    void retranslateUi(QWidget *SAFontSetWidget)
    {
        SAFontSetWidget->setWindowTitle(QApplication::translate("SAFontSetWidget", "Font Set", Q_NULLPTR));
        toolButtonBold->setText(QString());
        toolButtonItalic->setText(QString());
        toolButtonFontSet->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SAFontSetWidget: public Ui_SAFontSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFONTSETWIDGET_H
