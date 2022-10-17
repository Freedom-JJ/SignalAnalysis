/********************************************************************************
** Form generated from reading UI file 'SAChartDatasViewWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SACHARTDATASVIEWWIDGET_H
#define UI_SACHARTDATASVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SAChartDataTableView.h"

QT_BEGIN_NAMESPACE

class Ui_SAChartDatasViewWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QTreeView *treeView;
    SAChartDataTableView *tableView;

    void setupUi(QWidget *SAChartDatasViewWidget)
    {
        if (SAChartDatasViewWidget->objectName().isEmpty())
            SAChartDatasViewWidget->setObjectName(QStringLiteral("SAChartDatasViewWidget"));
        SAChartDatasViewWidget->resize(679, 386);
        verticalLayout_2 = new QVBoxLayout(SAChartDatasViewWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        splitter = new QSplitter(SAChartDatasViewWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelTitle = new QLabel(layoutWidget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        verticalLayout->addWidget(labelTitle);

        treeView = new QTreeView(layoutWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(treeView);

        splitter->addWidget(layoutWidget);
        tableView = new SAChartDataTableView(splitter);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        splitter->addWidget(tableView);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(SAChartDatasViewWidget);

        QMetaObject::connectSlotsByName(SAChartDatasViewWidget);
    } // setupUi

    void retranslateUi(QWidget *SAChartDatasViewWidget)
    {
        SAChartDatasViewWidget->setWindowTitle(QApplication::translate("SAChartDatasViewWidget", "Chart Datas View", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("SAChartDatasViewWidget", "plot items:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SAChartDatasViewWidget: public Ui_SAChartDatasViewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SACHARTDATASVIEWWIDGET_H
