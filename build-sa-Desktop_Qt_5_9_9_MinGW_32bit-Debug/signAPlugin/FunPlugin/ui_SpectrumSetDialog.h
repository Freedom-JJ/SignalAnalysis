/********************************************************************************
** Form generated from reading UI file 'SpectrumSetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUMSETDIALOG_H
#define UI_SPECTRUMSETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SpectrumSetDialog
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;
    QLabel *label_4;

    void setupUi(QDialog *SpectrumSetDialog)
    {
        if (SpectrumSetDialog->objectName().isEmpty())
            SpectrumSetDialog->setObjectName(QStringLiteral("SpectrumSetDialog"));
        SpectrumSetDialog->resize(526, 384);
        label = new QLabel(SpectrumSetDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 67, 17));
        spinBox = new QSpinBox(SpectrumSetDialog);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(110, 30, 101, 26));
        label_2 = new QLabel(SpectrumSetDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 67, 17));
        comboBox = new QComboBox(SpectrumSetDialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 60, 191, 25));
        buttonBox = new QDialogButtonBox(SpectrumSetDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(350, 350, 166, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_3 = new QLabel(SpectrumSetDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 110, 181, 101));
        spinBox_2 = new QSpinBox(SpectrumSetDialog);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));
        spinBox_2->setGeometry(QRect(110, 0, 101, 26));
        label_4 = new QLabel(SpectrumSetDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 10, 67, 17));

        retranslateUi(SpectrumSetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SpectrumSetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SpectrumSetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SpectrumSetDialog);
    } // setupUi

    void retranslateUi(QDialog *SpectrumSetDialog)
    {
        SpectrumSetDialog->setWindowTitle(QApplication::translate("SpectrumSetDialog", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("SpectrumSetDialog", "fftSize", Q_NULLPTR));
        label_2->setText(QApplication::translate("SpectrumSetDialog", "Amplutude Type", Q_NULLPTR));
        label_3->setText(QApplication::translate("SpectrumSetDialog", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("SpectrumSetDialog", "Fs", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SpectrumSetDialog: public Ui_SpectrumSetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUMSETDIALOG_H
