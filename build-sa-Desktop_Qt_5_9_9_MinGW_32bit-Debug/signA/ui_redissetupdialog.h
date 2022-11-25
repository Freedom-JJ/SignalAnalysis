/********************************************************************************
** Form generated from reading UI file 'redissetupdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REDISSETUPDIALOG_H
#define UI_REDISSETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RedisSetUpDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *IsOPenRedisCheckBox;
    QPushButton *redisButton;
    QPushButton *InitButton;
    QLineEdit *portEdit;
    QLineEdit *hostEdit;

    void setupUi(QDialog *RedisSetUpDialog)
    {
        if (RedisSetUpDialog->objectName().isEmpty())
            RedisSetUpDialog->setObjectName(QStringLiteral("RedisSetUpDialog"));
        RedisSetUpDialog->resize(428, 324);
        gridLayout = new QGridLayout(RedisSetUpDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(RedisSetUpDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(RedisSetUpDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        IsOPenRedisCheckBox = new QCheckBox(RedisSetUpDialog);
        IsOPenRedisCheckBox->setObjectName(QStringLiteral("IsOPenRedisCheckBox"));

        gridLayout->addWidget(IsOPenRedisCheckBox, 0, 0, 1, 2);

        redisButton = new QPushButton(RedisSetUpDialog);
        redisButton->setObjectName(QStringLiteral("redisButton"));

        gridLayout->addWidget(redisButton, 3, 3, 1, 1);

        InitButton = new QPushButton(RedisSetUpDialog);
        InitButton->setObjectName(QStringLiteral("InitButton"));

        gridLayout->addWidget(InitButton, 3, 2, 1, 1);

        portEdit = new QLineEdit(RedisSetUpDialog);
        portEdit->setObjectName(QStringLiteral("portEdit"));

        gridLayout->addWidget(portEdit, 2, 1, 1, 3);

        hostEdit = new QLineEdit(RedisSetUpDialog);
        hostEdit->setObjectName(QStringLiteral("hostEdit"));

        gridLayout->addWidget(hostEdit, 1, 1, 1, 3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(hostEdit);
        label_2->setBuddy(portEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(RedisSetUpDialog);

        QMetaObject::connectSlotsByName(RedisSetUpDialog);
    } // setupUi

    void retranslateUi(QDialog *RedisSetUpDialog)
    {
        RedisSetUpDialog->setWindowTitle(QApplication::translate("RedisSetUpDialog", "\350\277\236\346\216\245\350\277\234\347\250\213\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        label->setText(QApplication::translate("RedisSetUpDialog", "Host", Q_NULLPTR));
        label_2->setText(QApplication::translate("RedisSetUpDialog", "port", Q_NULLPTR));
        IsOPenRedisCheckBox->setText(QApplication::translate("RedisSetUpDialog", "CheckBox", Q_NULLPTR));
        redisButton->setText(QApplication::translate("RedisSetUpDialog", "\350\277\236\346\216\245", Q_NULLPTR));
        InitButton->setText(QApplication::translate("RedisSetUpDialog", "\351\207\215\347\275\256\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RedisSetUpDialog: public Ui_RedisSetUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDISSETUPDIALOG_H
