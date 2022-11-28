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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RedisSetUpDialog
{
public:
    QCheckBox *IsOPenRedisCheckBox;
    QLineEdit *hostEdit;
    QLineEdit *portEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *redisButton;
    QPushButton *InitButton;
    QComboBox *algorithmComboBox;

    void setupUi(QDialog *RedisSetUpDialog)
    {
        if (RedisSetUpDialog->objectName().isEmpty())
            RedisSetUpDialog->setObjectName(QStringLiteral("RedisSetUpDialog"));
        RedisSetUpDialog->resize(493, 378);
        IsOPenRedisCheckBox = new QCheckBox(RedisSetUpDialog);
        IsOPenRedisCheckBox->setObjectName(QStringLiteral("IsOPenRedisCheckBox"));
        IsOPenRedisCheckBox->setGeometry(QRect(80, 30, 151, 81));
        hostEdit = new QLineEdit(RedisSetUpDialog);
        hostEdit->setObjectName(QStringLiteral("hostEdit"));
        hostEdit->setGeometry(QRect(100, 120, 151, 31));
        portEdit = new QLineEdit(RedisSetUpDialog);
        portEdit->setObjectName(QStringLiteral("portEdit"));
        portEdit->setGeometry(QRect(100, 180, 151, 31));
        label = new QLabel(RedisSetUpDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 130, 54, 12));
        label_2 = new QLabel(RedisSetUpDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 190, 54, 12));
        redisButton = new QPushButton(RedisSetUpDialog);
        redisButton->setObjectName(QStringLiteral("redisButton"));
        redisButton->setGeometry(QRect(250, 249, 91, 31));
        InitButton = new QPushButton(RedisSetUpDialog);
        InitButton->setObjectName(QStringLiteral("InitButton"));
        InitButton->setGeometry(QRect(80, 250, 81, 31));
        algorithmComboBox = new QComboBox(RedisSetUpDialog);
        algorithmComboBox->setObjectName(QStringLiteral("algorithmComboBox"));
        algorithmComboBox->setGeometry(QRect(210, 60, 141, 22));

        retranslateUi(RedisSetUpDialog);

        QMetaObject::connectSlotsByName(RedisSetUpDialog);
    } // setupUi

    void retranslateUi(QDialog *RedisSetUpDialog)
    {
        RedisSetUpDialog->setWindowTitle(QApplication::translate("RedisSetUpDialog", "\350\277\236\346\216\245\350\277\234\347\250\213\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        IsOPenRedisCheckBox->setText(QApplication::translate("RedisSetUpDialog", "CheckBox", Q_NULLPTR));
        label->setText(QApplication::translate("RedisSetUpDialog", "Host", Q_NULLPTR));
        label_2->setText(QApplication::translate("RedisSetUpDialog", "port", Q_NULLPTR));
        redisButton->setText(QApplication::translate("RedisSetUpDialog", "\350\277\236\346\216\245", Q_NULLPTR));
        InitButton->setText(QApplication::translate("RedisSetUpDialog", "\351\207\215\347\275\256\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RedisSetUpDialog: public Ui_RedisSetUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REDISSETUPDIALOG_H
