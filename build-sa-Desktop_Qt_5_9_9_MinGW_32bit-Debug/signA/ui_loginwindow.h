/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *registerButton;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loginButton;
    QHBoxLayout *horizontalLayout;
    QLineEdit *loginNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *UserPasswordLineEdit;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(400, 300);
        gridLayout = new QGridLayout(LoginWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(LoginWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(11);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        registerButton = new QPushButton(LoginWindow);
        registerButton->setObjectName(QStringLiteral("registerButton"));

        gridLayout->addWidget(registerButton, 2, 3, 1, 1);

        label = new QLabel(LoginWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setMargin(2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));

        gridLayout->addLayout(horizontalLayout_3, 2, 1, 1, 1);

        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName(QStringLiteral("loginButton"));

        gridLayout->addWidget(loginButton, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        loginNameLineEdit = new QLineEdit(LoginWindow);
        loginNameLineEdit->setObjectName(QStringLiteral("loginNameLineEdit"));

        horizontalLayout->addWidget(loginNameLineEdit);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        UserPasswordLineEdit = new QLineEdit(LoginWindow);
        UserPasswordLineEdit->setObjectName(QStringLiteral("UserPasswordLineEdit"));

        horizontalLayout_2->addWidget(UserPasswordLineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 3);

#ifndef QT_NO_SHORTCUT
        label_2->setBuddy(UserPasswordLineEdit);
        label->setBuddy(loginNameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginWindow", "\347\231\273\351\231\206\345\257\206\347\240\201", Q_NULLPTR));
        registerButton->setText(QApplication::translate("LoginWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        label->setText(QApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LoginWindow", "\347\231\273\351\231\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
