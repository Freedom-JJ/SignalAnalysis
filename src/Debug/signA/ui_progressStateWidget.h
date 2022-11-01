/********************************************************************************
** Form generated from reading UI file 'progressStateWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSSTATEWIDGET_H
#define UI_PROGRESSSTATEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_progressStateWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QLabel *label;

    void setupUi(QWidget *progressStateWidget)
    {
        if (progressStateWidget->objectName().isEmpty())
            progressStateWidget->setObjectName(QStringLiteral("progressStateWidget"));
        progressStateWidget->resize(232, 20);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressStateWidget->sizePolicy().hasHeightForWidth());
        progressStateWidget->setSizePolicy(sizePolicy);
        progressStateWidget->setMinimumSize(QSize(200, 0));
        horizontalLayout = new QHBoxLayout(progressStateWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(progressStateWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(100, 0));
        progressBar->setMaximumSize(QSize(150, 16777215));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        label = new QLabel(progressStateWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);


        retranslateUi(progressStateWidget);

        QMetaObject::connectSlotsByName(progressStateWidget);
    } // setupUi

    void retranslateUi(QWidget *progressStateWidget)
    {
        progressStateWidget->setWindowTitle(QApplication::translate("progressStateWidget", "Progress State", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class progressStateWidget: public Ui_progressStateWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSSTATEWIDGET_H
