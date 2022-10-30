/********************************************************************************
** Form generated from reading UI file 'spectrum.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECTRUM_H
#define UI_SPECTRUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Spectrum
{
public:

    void setupUi(QWidget *Spectrum)
    {
        if (Spectrum->objectName().isEmpty())
            Spectrum->setObjectName(QStringLiteral("Spectrum"));
        Spectrum->resize(400, 300);

        retranslateUi(Spectrum);

        QMetaObject::connectSlotsByName(Spectrum);
    } // setupUi

    void retranslateUi(QWidget *Spectrum)
    {
        Spectrum->setWindowTitle(QApplication::translate("Spectrum", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Spectrum: public Ui_Spectrum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECTRUM_H
