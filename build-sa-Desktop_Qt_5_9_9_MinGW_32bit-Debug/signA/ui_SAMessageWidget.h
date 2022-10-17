/********************************************************************************
** Form generated from reading UI file 'SAMessageWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAMESSAGEWIDGET_H
#define UI_SAMESSAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAMessageWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *SAMessageWidget)
    {
        if (SAMessageWidget->objectName().isEmpty())
            SAMessageWidget->setObjectName(QStringLiteral("SAMessageWidget"));
        SAMessageWidget->resize(445, 229);
        verticalLayout = new QVBoxLayout(SAMessageWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(SAMessageWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(SAMessageWidget);

        QMetaObject::connectSlotsByName(SAMessageWidget);
    } // setupUi

    void retranslateUi(QWidget *SAMessageWidget)
    {
        SAMessageWidget->setWindowTitle(QApplication::translate("SAMessageWidget", "Message", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SAMessageWidget: public Ui_SAMessageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAMESSAGEWIDGET_H
