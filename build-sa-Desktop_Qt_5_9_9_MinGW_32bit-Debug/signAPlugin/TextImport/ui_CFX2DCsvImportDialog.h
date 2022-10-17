/********************************************************************************
** Form generated from reading UI file 'CFX2DCsvImportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CFX2DCSVIMPORTDIALOG_H
#define UI_CFX2DCSVIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CFX2DCsvImportDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QComboBox *comboBox_codec;
    QHBoxLayout *horizontalLayout_2;
    QListView *listView;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_add;
    QPushButton *pushButton_remove;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox_parserSet;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_parser;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *CFX2DCsvImportDialog)
    {
        if (CFX2DCsvImportDialog->objectName().isEmpty())
            CFX2DCsvImportDialog->setObjectName(QStringLiteral("CFX2DCsvImportDialog"));
        CFX2DCsvImportDialog->resize(733, 565);
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/res_image/csv.png"), QSize(), QIcon::Normal, QIcon::Off);
        CFX2DCsvImportDialog->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(CFX2DCsvImportDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(CFX2DCsvImportDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        label_4 = new QLabel(CFX2DCsvImportDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        comboBox_codec = new QComboBox(CFX2DCsvImportDialog);
        comboBox_codec->setObjectName(QStringLiteral("comboBox_codec"));

        horizontalLayout_6->addWidget(comboBox_codec);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listView = new QListView(CFX2DCsvImportDialog);
        listView->setObjectName(QStringLiteral("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        listView->setMinimumSize(QSize(0, 30));
        listView->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(listView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_add = new QPushButton(CFX2DCsvImportDialog);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setMinimumSize(QSize(24, 24));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/ico/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_add->setIcon(icon1);
        pushButton_add->setIconSize(QSize(24, 24));
        pushButton_add->setFlat(true);

        verticalLayout->addWidget(pushButton_add);

        pushButton_remove = new QPushButton(CFX2DCsvImportDialog);
        pushButton_remove->setObjectName(QStringLiteral("pushButton_remove"));
        pushButton_remove->setMinimumSize(QSize(24, 24));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/ico/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_remove->setIcon(icon2);
        pushButton_remove->setIconSize(QSize(24, 24));
        pushButton_remove->setFlat(true);

        verticalLayout->addWidget(pushButton_remove);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(CFX2DCsvImportDialog);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        comboBox_parserSet = new QComboBox(CFX2DCsvImportDialog);
        comboBox_parserSet->setObjectName(QStringLiteral("comboBox_parserSet"));
        comboBox_parserSet->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(comboBox_parserSet);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(CFX2DCsvImportDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_3);

        pushButton_parser = new QPushButton(CFX2DCsvImportDialog);
        pushButton_parser->setObjectName(QStringLiteral("pushButton_parser"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_parser->sizePolicy().hasHeightForWidth());
        pushButton_parser->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/ico/parser.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_parser->setIcon(icon3);
        pushButton_parser->setIconSize(QSize(24, 24));

        horizontalLayout_5->addWidget(pushButton_parser);


        verticalLayout_4->addLayout(horizontalLayout_5);

        tableView = new QTableView(CFX2DCsvImportDialog);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_4->addWidget(tableView);


        verticalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(CFX2DCsvImportDialog);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/ico/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_cancel->setIcon(icon4);

        horizontalLayout->addWidget(pushButton_cancel);

        pushButton_ok = new QPushButton(CFX2DCsvImportDialog);
        pushButton_ok->setObjectName(QStringLiteral("pushButton_ok"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/ico/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_ok->setIcon(icon5);

        horizontalLayout->addWidget(pushButton_ok);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(CFX2DCsvImportDialog);

        pushButton_add->setDefault(true);


        QMetaObject::connectSlotsByName(CFX2DCsvImportDialog);
    } // setupUi

    void retranslateUi(QDialog *CFX2DCsvImportDialog)
    {
        CFX2DCsvImportDialog->setWindowTitle(QApplication::translate("CFX2DCsvImportDialog", "CFX 2D Csv File Import", Q_NULLPTR));
        label_2->setText(QApplication::translate("CFX2DCsvImportDialog", "<html><head/><body><p><span style=\" font-weight:600;\">1.Select the file:</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("CFX2DCsvImportDialog", "Encoding:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_add->setToolTip(QApplication::translate("CFX2DCsvImportDialog", "\346\267\273\345\212\240\351\234\200\350\246\201\350\247\243\346\236\220\347\232\204csv\346\226\207\344\273\266\357\274\214\346\226\207\344\273\266\351\234\200\350\246\201\347\224\261cfx\345\220\216\345\244\204\347\220\206\345\231\250\345\257\274\345\207\272\357\274\214\345\220\246\345\210\231\350\247\243\346\236\220\344\274\232\345\207\272\351\227\256\351\242\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_add->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_remove->setToolTip(QApplication::translate("CFX2DCsvImportDialog", "\347\247\273\351\231\244\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_remove->setText(QString());
        label->setText(QApplication::translate("CFX2DCsvImportDialog", "Parse set", Q_NULLPTR));
        label_3->setText(QApplication::translate("CFX2DCsvImportDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Preview:</span></p></body></html>", Q_NULLPTR));
        pushButton_parser->setText(QApplication::translate("CFX2DCsvImportDialog", "Parse", Q_NULLPTR));
        pushButton_cancel->setText(QApplication::translate("CFX2DCsvImportDialog", "Cancel", Q_NULLPTR));
        pushButton_ok->setText(QApplication::translate("CFX2DCsvImportDialog", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CFX2DCsvImportDialog: public Ui_CFX2DCsvImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CFX2DCSVIMPORTDIALOG_H
