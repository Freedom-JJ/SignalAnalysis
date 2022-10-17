/********************************************************************************
** Form generated from reading UI file 'Dialog_SelDefSeries.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SELDEFSERIES_H
#define UI_DIALOG_SELDEFSERIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_SelDefSeries
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_Start;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_Detal;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Cannel;
    QPushButton *pushButton_OK;

    void setupUi(QDialog *Dialog_SelDefSeries)
    {
        if (Dialog_SelDefSeries->objectName().isEmpty())
            Dialog_SelDefSeries->setObjectName(QStringLiteral("Dialog_SelDefSeries"));
        Dialog_SelDefSeries->resize(422, 323);
        verticalLayout_2 = new QVBoxLayout(Dialog_SelDefSeries);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(Dialog_SelDefSeries);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        splitter->addWidget(tableView);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        doubleSpinBox_Start = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Start->setObjectName(QStringLiteral("doubleSpinBox_Start"));
        doubleSpinBox_Start->setDecimals(10);
        doubleSpinBox_Start->setMinimum(-1e+9);
        doubleSpinBox_Start->setMaximum(1e+9);
        doubleSpinBox_Start->setSingleStep(0.1);

        horizontalLayout->addWidget(doubleSpinBox_Start);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        doubleSpinBox_Detal = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_Detal->setObjectName(QStringLiteral("doubleSpinBox_Detal"));
        doubleSpinBox_Detal->setDecimals(10);
        doubleSpinBox_Detal->setMinimum(-1e+9);
        doubleSpinBox_Detal->setMaximum(1e+9);
        doubleSpinBox_Detal->setSingleStep(0.1);
        doubleSpinBox_Detal->setValue(1);

        horizontalLayout_2->addWidget(doubleSpinBox_Detal);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_Cannel = new QPushButton(layoutWidget);
        pushButton_Cannel->setObjectName(QStringLiteral("pushButton_Cannel"));

        horizontalLayout_3->addWidget(pushButton_Cannel);

        pushButton_OK = new QPushButton(layoutWidget);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));

        horizontalLayout_3->addWidget(pushButton_OK);


        verticalLayout->addLayout(horizontalLayout_3);

        splitter->addWidget(layoutWidget);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(Dialog_SelDefSeries);
        QObject::connect(pushButton_OK, SIGNAL(clicked()), Dialog_SelDefSeries, SLOT(accept()));
        QObject::connect(pushButton_Cannel, SIGNAL(clicked()), Dialog_SelDefSeries, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog_SelDefSeries);
    } // setupUi

    void retranslateUi(QDialog *Dialog_SelDefSeries)
    {
        Dialog_SelDefSeries->setWindowTitle(QApplication::translate("Dialog_SelDefSeries", "Select Define Series", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog_SelDefSeries", "\345\272\217\345\210\227\350\265\267\345\247\213\345\200\274:", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog_SelDefSeries", "\345\272\217\345\210\227\345\242\236\345\200\274", Q_NULLPTR));
        pushButton_Cannel->setText(QApplication::translate("Dialog_SelDefSeries", "\345\217\226\346\266\210", Q_NULLPTR));
        pushButton_OK->setText(QApplication::translate("Dialog_SelDefSeries", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog_SelDefSeries: public Ui_Dialog_SelDefSeries {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SELDEFSERIES_H
