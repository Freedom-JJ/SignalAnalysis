/********************************************************************************
** Form generated from reading UI file 'SADataFeatureWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SADATAFEATUREWIDGET_H
#define UI_SADATAFEATUREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SADataFeatureWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_clearDataFeature;
    QToolButton *toolButton_expandAll;
    QToolButton *toolButton_requestCalc;
    QSpacerItem *horizontalSpacer;
    QTreeView *treeView;

    void setupUi(QWidget *SADataFeatureWidget)
    {
        if (SADataFeatureWidget->objectName().isEmpty())
            SADataFeatureWidget->setObjectName(QStringLiteral("SADataFeatureWidget"));
        SADataFeatureWidget->resize(220, 300);
        verticalLayout = new QVBoxLayout(SADataFeatureWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        toolButton_clearDataFeature = new QToolButton(SADataFeatureWidget);
        toolButton_clearDataFeature->setObjectName(QStringLiteral("toolButton_clearDataFeature"));
        toolButton_clearDataFeature->setMinimumSize(QSize(16, 16));
        toolButton_clearDataFeature->setMaximumSize(QSize(22, 22));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/clearMarked.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_clearDataFeature->setIcon(icon);
        toolButton_clearDataFeature->setCheckable(false);
        toolButton_clearDataFeature->setChecked(false);
        toolButton_clearDataFeature->setAutoRepeat(false);
        toolButton_clearDataFeature->setAutoExclusive(false);
        toolButton_clearDataFeature->setPopupMode(QToolButton::DelayedPopup);
        toolButton_clearDataFeature->setToolButtonStyle(Qt::ToolButtonIconOnly);
        toolButton_clearDataFeature->setAutoRaise(true);
        toolButton_clearDataFeature->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(toolButton_clearDataFeature);

        toolButton_expandAll = new QToolButton(SADataFeatureWidget);
        toolButton_expandAll->setObjectName(QStringLiteral("toolButton_expandAll"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/expandAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_expandAll->setIcon(icon1);

        horizontalLayout->addWidget(toolButton_expandAll);

        toolButton_requestCalc = new QToolButton(SADataFeatureWidget);
        toolButton_requestCalc->setObjectName(QStringLiteral("toolButton_requestCalc"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/refresh.svg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_requestCalc->setIcon(icon2);

        horizontalLayout->addWidget(toolButton_requestCalc);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        treeView = new QTreeView(SADataFeatureWidget);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        treeView->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(treeView);


        retranslateUi(SADataFeatureWidget);

        QMetaObject::connectSlotsByName(SADataFeatureWidget);
    } // setupUi

    void retranslateUi(QWidget *SADataFeatureWidget)
    {
        SADataFeatureWidget->setWindowTitle(QApplication::translate("SADataFeatureWidget", "Data Feature", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_clearDataFeature->setToolTip(QApplication::translate("SADataFeatureWidget", "clear all marker in chart", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_clearDataFeature->setText(QApplication::translate("SADataFeatureWidget", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        toolButton_expandAll->setToolTip(QApplication::translate("SADataFeatureWidget", "expand all", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolButton_expandAll->setText(QString());
        toolButton_requestCalc->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SADataFeatureWidget: public Ui_SADataFeatureWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SADATAFEATUREWIDGET_H
