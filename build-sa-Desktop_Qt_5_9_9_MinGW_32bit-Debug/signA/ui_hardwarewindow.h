/********************************************************************************
** Form generated from reading UI file 'hardwarewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HARDWAREWINDOW_H
#define UI_HARDWAREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HardwareWindow
{
public:
    QCheckBox *HWCheckBox;
    QPushButton *initConnectButton;
    QPushButton *refindMacButton;
    QPlainTextEdit *HWTextEdit;
    QPushButton *initParaButton;

    void setupUi(QDialog *HardwareWindow)
    {
        if (HardwareWindow->objectName().isEmpty())
            HardwareWindow->setObjectName(QStringLiteral("HardwareWindow"));
        HardwareWindow->resize(503, 377);
        HWCheckBox = new QCheckBox(HardwareWindow);
        HWCheckBox->setObjectName(QStringLiteral("HWCheckBox"));
        HWCheckBox->setGeometry(QRect(30, 60, 111, 21));
        initConnectButton = new QPushButton(HardwareWindow);
        initConnectButton->setObjectName(QStringLiteral("initConnectButton"));
        initConnectButton->setGeometry(QRect(30, 100, 111, 31));
        refindMacButton = new QPushButton(HardwareWindow);
        refindMacButton->setObjectName(QStringLiteral("refindMacButton"));
        refindMacButton->setGeometry(QRect(30, 150, 111, 31));
        HWTextEdit = new QPlainTextEdit(HardwareWindow);
        HWTextEdit->setObjectName(QStringLiteral("HWTextEdit"));
        HWTextEdit->setGeometry(QRect(190, 60, 241, 261));
        initParaButton = new QPushButton(HardwareWindow);
        initParaButton->setObjectName(QStringLiteral("initParaButton"));
        initParaButton->setGeometry(QRect(30, 200, 111, 31));

        retranslateUi(HardwareWindow);

        QMetaObject::connectSlotsByName(HardwareWindow);
    } // setupUi

    void retranslateUi(QDialog *HardwareWindow)
    {
        HardwareWindow->setWindowTitle(QApplication::translate("HardwareWindow", "\350\277\236\346\216\245\347\241\254\344\273\266", Q_NULLPTR));
        HWCheckBox->setText(QApplication::translate("HardwareWindow", "\346\230\257\345\220\246\350\277\236\346\216\245\351\207\207\351\233\206\344\273\252", Q_NULLPTR));
        initConnectButton->setText(QApplication::translate("HardwareWindow", "\345\210\235\345\247\213\345\214\226\344\273\252\345\231\250\350\277\236\346\216\245", Q_NULLPTR));
        refindMacButton->setText(QApplication::translate("HardwareWindow", "\345\210\267\346\226\260\344\273\252\345\231\250", Q_NULLPTR));
        initParaButton->setText(QApplication::translate("HardwareWindow", "\345\210\235\345\247\213\345\214\226\345\217\202\346\225\260\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HardwareWindow: public Ui_HardwareWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HARDWAREWINDOW_H
