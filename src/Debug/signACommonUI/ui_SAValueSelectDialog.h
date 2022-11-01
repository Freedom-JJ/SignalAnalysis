/********************************************************************************
** Form generated from reading UI file 'SAValueSelectDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVALUESELECTDIALOG_H
#define UI_SAVALUESELECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SAValueSelectDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QToolButton *toolButton_more;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QTreeView *treeView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SAValueSelectDialog)
    {
        if (SAValueSelectDialog->objectName().isEmpty())
            SAValueSelectDialog->setObjectName(QStringLiteral("SAValueSelectDialog"));
        SAValueSelectDialog->resize(674, 481);
        verticalLayout_3 = new QVBoxLayout(SAValueSelectDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(SAValueSelectDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setOrientation(Qt::Horizontal);
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

        toolButton_more = new QToolButton(layoutWidget);
        toolButton_more->setObjectName(QStringLiteral("toolButton_more"));

        horizontalLayout->addWidget(toolButton_more);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        treeView = new QTreeView(layoutWidget);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout->addWidget(treeView);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        tableView = new QTableView(layoutWidget1);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);

        splitter->addWidget(layoutWidget1);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(SAValueSelectDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(SAValueSelectDialog);

        QMetaObject::connectSlotsByName(SAValueSelectDialog);
    } // setupUi

    void retranslateUi(QDialog *SAValueSelectDialog)
    {
        SAValueSelectDialog->setWindowTitle(QApplication::translate("SAValueSelectDialog", "Value Select", Q_NULLPTR));
        label->setText(QApplication::translate("SAValueSelectDialog", "data select", Q_NULLPTR));
        toolButton_more->setText(QApplication::translate("SAValueSelectDialog", "...", Q_NULLPTR));
        label_3->setText(QApplication::translate("SAValueSelectDialog", "filter:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SAValueSelectDialog", "data view", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SAValueSelectDialog: public Ui_SAValueSelectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVALUESELECTDIALOG_H
