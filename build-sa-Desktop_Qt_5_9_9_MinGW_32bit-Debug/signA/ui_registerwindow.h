/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLineEdit *nameLineEdit;
    QLineEdit *loginNameLineEdit;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_5;
    QPushButton *registerPushButton;
    QLabel *label_6;
    QLineEdit *passwordLineEdit;
    QLabel *label_4;
    QLineEdit *telephoneLineEdit;
    QLabel *label_3;
    QRadioButton *administratorRadioButton;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QStringLiteral("RegisterWindow"));
        RegisterWindow->resize(467, 431);
        nameLineEdit = new QLineEdit(RegisterWindow);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(200, 210, 150, 21));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(11);
        nameLineEdit->setFont(font);
        loginNameLineEdit = new QLineEdit(RegisterWindow);
        loginNameLineEdit->setObjectName(QStringLiteral("loginNameLineEdit"));
        loginNameLineEdit->setGeometry(QRect(200, 110, 150, 21));
        loginNameLineEdit->setFont(font);
        label_8 = new QLabel(RegisterWindow);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 310, 71, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(12);
        label_8->setFont(font1);
        label_7 = new QLabel(RegisterWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 260, 71, 21));
        label_7->setFont(font1);
        label_5 = new QLabel(RegisterWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 160, 71, 21));
        label_5->setFont(font1);
        registerPushButton = new QPushButton(RegisterWindow);
        registerPushButton->setObjectName(QStringLiteral("registerPushButton"));
        registerPushButton->setGeometry(QRect(200, 350, 101, 31));
        registerPushButton->setFont(font1);
        label_6 = new QLabel(RegisterWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 210, 71, 21));
        label_6->setFont(font1);
        passwordLineEdit = new QLineEdit(RegisterWindow);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(200, 160, 150, 21));
        passwordLineEdit->setFont(font);
        label_4 = new QLabel(RegisterWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(111, 111, 48, 19));
        label_4->setFont(font1);
        telephoneLineEdit = new QLineEdit(RegisterWindow);
        telephoneLineEdit->setObjectName(QStringLiteral("telephoneLineEdit"));
        telephoneLineEdit->setGeometry(QRect(200, 260, 150, 21));
        telephoneLineEdit->setFont(font);
        label_3 = new QLabel(RegisterWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 40, 71, 21));
        label_3->setFont(font1);
        administratorRadioButton = new QRadioButton(RegisterWindow);
        administratorRadioButton->setObjectName(QStringLiteral("administratorRadioButton"));
        administratorRadioButton->setGeometry(QRect(200, 310, 71, 21));
        administratorRadioButton->setFont(font1);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QApplication::translate("RegisterWindow", "Dialog", Q_NULLPTR));
        label_8->setText(QApplication::translate("RegisterWindow", "\347\224\250\346\210\267\347\261\273\345\236\213", Q_NULLPTR));
        label_7->setText(QApplication::translate("RegisterWindow", "\347\224\265\350\257\235", Q_NULLPTR));
        label_5->setText(QApplication::translate("RegisterWindow", "\347\231\273\351\231\206\345\257\206\347\240\201", Q_NULLPTR));
        registerPushButton->setText(QApplication::translate("RegisterWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        label_6->setText(QApplication::translate("RegisterWindow", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("RegisterWindow", "\347\231\273\351\231\206\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("RegisterWindow", "\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        administratorRadioButton->setText(QApplication::translate("RegisterWindow", "\347\256\241\347\220\206\345\221\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
