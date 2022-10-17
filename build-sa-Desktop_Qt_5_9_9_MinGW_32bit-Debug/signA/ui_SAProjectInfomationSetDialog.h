/********************************************************************************
** Form generated from reading UI file 'SAProjectInfomationSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAPROJECTINFOMATIONSETDIALOG_H
#define UI_SAPROJECTINFOMATIONSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SAProjectInfomationSetDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditProjectName;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEditProjectDescribe;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAProjectInfomationSetDialog)
    {
        if (SAProjectInfomationSetDialog->objectName().isEmpty())
            SAProjectInfomationSetDialog->setObjectName(QStringLiteral("SAProjectInfomationSetDialog"));
        SAProjectInfomationSetDialog->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/project.png"), QSize(), QIcon::Normal, QIcon::Off);
        SAProjectInfomationSetDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(SAProjectInfomationSetDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(SAProjectInfomationSetDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditProjectName = new QLineEdit(SAProjectInfomationSetDialog);
        lineEditProjectName->setObjectName(QStringLiteral("lineEditProjectName"));

        horizontalLayout->addWidget(lineEditProjectName);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(SAProjectInfomationSetDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        textEditProjectDescribe = new QTextEdit(SAProjectInfomationSetDialog);
        textEditProjectDescribe->setObjectName(QStringLiteral("textEditProjectDescribe"));

        horizontalLayout_2->addWidget(textEditProjectDescribe);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(SAProjectInfomationSetDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SAProjectInfomationSetDialog);

        QMetaObject::connectSlotsByName(SAProjectInfomationSetDialog);
    } // setupUi

    void retranslateUi(QDialog *SAProjectInfomationSetDialog)
    {
        SAProjectInfomationSetDialog->setWindowTitle(QApplication::translate("SAProjectInfomationSetDialog", "project infomation set dialog", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        SAProjectInfomationSetDialog->setToolTip(QApplication::translate("SAProjectInfomationSetDialog", "set project information", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("SAProjectInfomationSetDialog", "project name:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SAProjectInfomationSetDialog", "project describe:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SAProjectInfomationSetDialog: public Ui_SAProjectInfomationSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAPROJECTINFOMATIONSETDIALOG_H
