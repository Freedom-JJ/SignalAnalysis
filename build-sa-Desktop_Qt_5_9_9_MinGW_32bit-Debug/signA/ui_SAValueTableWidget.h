/********************************************************************************
** Form generated from reading UI file 'SAValueTableWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVALUETABLEWIDGET_H
#define UI_SAVALUETABLEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "SAValueDataTableView.h"

QT_BEGIN_NAMESPACE

class Ui_SAValueTableWidget
{
public:
    QAction *actionToLinerData;
    QAction *actionToPointFVectorData;
    QVBoxLayout *verticalLayout;
    SAValueDataTableView *tableView;

    void setupUi(QWidget *SAValueTableWidget)
    {
        if (SAValueTableWidget->objectName().isEmpty())
            SAValueTableWidget->setObjectName(QStringLiteral("SAValueTableWidget"));
        SAValueTableWidget->resize(593, 382);
        actionToLinerData = new QAction(SAValueTableWidget);
        actionToLinerData->setObjectName(QStringLiteral("actionToLinerData"));
        actionToPointFVectorData = new QAction(SAValueTableWidget);
        actionToPointFVectorData->setObjectName(QStringLiteral("actionToPointFVectorData"));
        verticalLayout = new QVBoxLayout(SAValueTableWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new SAValueDataTableView(SAValueTableWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

        verticalLayout->addWidget(tableView);


        retranslateUi(SAValueTableWidget);

        QMetaObject::connectSlotsByName(SAValueTableWidget);
    } // setupUi

    void retranslateUi(QWidget *SAValueTableWidget)
    {
        SAValueTableWidget->setWindowTitle(QApplication::translate("SAValueTableWidget", "Value Viewer Tab", Q_NULLPTR));
        actionToLinerData->setText(QApplication::translate("SAValueTableWidget", "\345\257\274\344\270\272\347\272\277\346\200\247\346\225\260\347\273\204", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionToLinerData->setToolTip(QApplication::translate("SAValueTableWidget", "\346\212\212\351\200\211\346\213\251\347\232\204\344\270\200\344\270\252\346\210\226\345\244\232\344\270\252\345\210\227\346\225\260\346\215\256\345\257\274\344\270\272\347\272\277\346\200\247\346\225\260\347\273\204", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionToPointFVectorData->setText(QApplication::translate("SAValueTableWidget", "\345\257\274\344\270\272\347\202\271\346\225\260\347\273\204", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionToPointFVectorData->setToolTip(QApplication::translate("SAValueTableWidget", "\346\212\212\351\200\211\346\213\251\347\232\204\344\270\244\350\241\214\346\210\226\344\270\244\345\210\227\350\275\254\344\270\272\347\202\271\345\272\217\345\210\227", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SAValueTableWidget: public Ui_SAValueTableWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVALUETABLEWIDGET_H
