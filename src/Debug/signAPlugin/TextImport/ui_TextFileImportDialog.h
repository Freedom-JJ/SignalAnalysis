/********************************************************************************
** Form generated from reading UI file 'TextFileImportDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFILEIMPORTDIALOG_H
#define UI_TEXTFILEIMPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFileImportDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_codec;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_IgnoreHead;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_IgnoreHead;
    QSpinBox *spinBox_startReadLine;
    QLabel *label_4;
    QSpinBox *spinBox_toHeader;
    QSpacerItem *horizontalSpacer_IgnoreHead;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSpinBox *spinBox_endLine;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_Division;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_Div;
    QRadioButton *radioButton_Separator;
    QLabel *label_Separator;
    QComboBox *comboBox_Separator;
    QSpacerItem *horizontalSpacer_Separator;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_DatasView;
    QGroupBox *groupBox_noTable;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_1D;
    QRadioButton *radioButton_oneColumn;
    QTabWidget *tabWidget;
    QWidget *tabData;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QWidget *tabText;
    QVBoxLayout *verticalLayout_6;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_moreSet;
    QSpacerItem *horizontalSpacerBtn;
    QPushButton *pushButton_Back;
    QPushButton *pushButton_Next;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *TextFileImportDialog)
    {
        if (TextFileImportDialog->objectName().isEmpty())
            TextFileImportDialog->setObjectName(QStringLiteral("TextFileImportDialog"));
        TextFileImportDialog->resize(807, 500);
        verticalLayout_4 = new QVBoxLayout(TextFileImportDialog);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter = new QSplitter(TextFileImportDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        stackedWidget = new QStackedWidget(splitter);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(400, 250));
        stackedWidget->setMaximumSize(QSize(16777215, 200));
        stackedWidget->setFrameShadow(QFrame::Plain);
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        verticalLayout_3 = new QVBoxLayout(page_1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(page_1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(0, 0));
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBox_codec = new QComboBox(groupBox);
        comboBox_codec->setObjectName(QStringLiteral("comboBox_codec"));
        comboBox_codec->setMinimumSize(QSize(200, 0));
        comboBox_codec->setMaximumSize(QSize(16777215, 16777215));
        comboBox_codec->setEditable(true);

        horizontalLayout_6->addWidget(comboBox_codec);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout_3->addWidget(groupBox);

        groupBox_IgnoreHead = new QGroupBox(page_1);
        groupBox_IgnoreHead->setObjectName(QStringLiteral("groupBox_IgnoreHead"));
        groupBox_IgnoreHead->setMinimumSize(QSize(0, 100));
        groupBox_IgnoreHead->setMaximumSize(QSize(16777215, 16777215));
        groupBox_IgnoreHead->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(groupBox_IgnoreHead);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_IgnoreHead = new QLabel(groupBox_IgnoreHead);
        label_IgnoreHead->setObjectName(QStringLiteral("label_IgnoreHead"));

        horizontalLayout_2->addWidget(label_IgnoreHead);

        spinBox_startReadLine = new QSpinBox(groupBox_IgnoreHead);
        spinBox_startReadLine->setObjectName(QStringLiteral("spinBox_startReadLine"));
        spinBox_startReadLine->setMinimumSize(QSize(120, 0));
        spinBox_startReadLine->setMinimum(1);
        spinBox_startReadLine->setMaximum(999999999);
        spinBox_startReadLine->setValue(1);

        horizontalLayout_2->addWidget(spinBox_startReadLine);

        label_4 = new QLabel(groupBox_IgnoreHead);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setIndent(15);

        horizontalLayout_2->addWidget(label_4);

        spinBox_toHeader = new QSpinBox(groupBox_IgnoreHead);
        spinBox_toHeader->setObjectName(QStringLiteral("spinBox_toHeader"));
        spinBox_toHeader->setMinimum(0);
        spinBox_toHeader->setMaximum(999999999);
        spinBox_toHeader->setValue(0);

        horizontalLayout_2->addWidget(spinBox_toHeader);

        horizontalSpacer_IgnoreHead = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_IgnoreHead);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(groupBox_IgnoreHead);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        spinBox_endLine = new QSpinBox(groupBox_IgnoreHead);
        spinBox_endLine->setObjectName(QStringLiteral("spinBox_endLine"));
        spinBox_endLine->setMinimumSize(QSize(120, 0));
        spinBox_endLine->setMinimum(-1);
        spinBox_endLine->setMaximum(999999999);
        spinBox_endLine->setValue(0);

        horizontalLayout_5->addWidget(spinBox_endLine);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_5);


        verticalLayout_3->addWidget(groupBox_IgnoreHead);

        groupBox_Division = new QGroupBox(page_1);
        groupBox_Division->setObjectName(QStringLiteral("groupBox_Division"));
        groupBox_Division->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_3 = new QHBoxLayout(groupBox_Division);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_Div = new QHBoxLayout();
        horizontalLayout_Div->setObjectName(QStringLiteral("horizontalLayout_Div"));
        radioButton_Separator = new QRadioButton(groupBox_Division);
        radioButton_Separator->setObjectName(QStringLiteral("radioButton_Separator"));
        radioButton_Separator->setChecked(true);

        horizontalLayout_Div->addWidget(radioButton_Separator);

        label_Separator = new QLabel(groupBox_Division);
        label_Separator->setObjectName(QStringLiteral("label_Separator"));
        label_Separator->setIndent(15);

        horizontalLayout_Div->addWidget(label_Separator);

        comboBox_Separator = new QComboBox(groupBox_Division);
        comboBox_Separator->setObjectName(QStringLiteral("comboBox_Separator"));
        comboBox_Separator->setEnabled(true);
        comboBox_Separator->setMinimumSize(QSize(120, 0));
        comboBox_Separator->setEditable(false);

        horizontalLayout_Div->addWidget(comboBox_Separator);

        horizontalSpacer_Separator = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Div->addItem(horizontalSpacer_Separator);


        horizontalLayout_3->addLayout(horizontalLayout_Div);


        verticalLayout_3->addWidget(groupBox_Division);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setMinimumSize(QSize(0, 200));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        pushButton_DatasView = new QPushButton(page_2);
        pushButton_DatasView->setObjectName(QStringLiteral("pushButton_DatasView"));

        horizontalLayout_7->addWidget(pushButton_DatasView);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        groupBox_noTable = new QGroupBox(page_2);
        groupBox_noTable->setObjectName(QStringLiteral("groupBox_noTable"));
        groupBox_noTable->setCheckable(false);
        groupBox_noTable->setChecked(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_noTable);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton_1D = new QRadioButton(groupBox_noTable);
        radioButton_1D->setObjectName(QStringLiteral("radioButton_1D"));
        radioButton_1D->setChecked(true);

        horizontalLayout_4->addWidget(radioButton_1D);


        verticalLayout_2->addLayout(horizontalLayout_4);

        radioButton_oneColumn = new QRadioButton(groupBox_noTable);
        radioButton_oneColumn->setObjectName(QStringLiteral("radioButton_oneColumn"));

        verticalLayout_2->addWidget(radioButton_oneColumn);


        gridLayout->addWidget(groupBox_noTable, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        splitter->addWidget(stackedWidget);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::South);
        tabData = new QWidget();
        tabData->setObjectName(QStringLiteral("tabData"));
        verticalLayout = new QVBoxLayout(tabData);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        tableView = new QTableView(tabData);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        tabWidget->addTab(tabData, QString());
        tabText = new QWidget();
        tabText->setObjectName(QStringLiteral("tabText"));
        verticalLayout_6 = new QVBoxLayout(tabText);
        verticalLayout_6->setSpacing(1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(1, 1, 1, 1);
        plainTextEdit = new QPlainTextEdit(tabText);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout_6->addWidget(plainTextEdit);

        tabWidget->addTab(tabText, QString());
        splitter->addWidget(tabWidget);

        verticalLayout_4->addWidget(splitter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_moreSet = new QPushButton(TextFileImportDialog);
        pushButton_moreSet->setObjectName(QStringLiteral("pushButton_moreSet"));
        pushButton_moreSet->setMinimumSize(QSize(60, 0));
        pushButton_moreSet->setMaximumSize(QSize(80, 16777215));
        pushButton_moreSet->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_moreSet);

        horizontalSpacerBtn = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerBtn);

        pushButton_Back = new QPushButton(TextFileImportDialog);
        pushButton_Back->setObjectName(QStringLiteral("pushButton_Back"));
        pushButton_Back->setEnabled(false);

        horizontalLayout->addWidget(pushButton_Back);

        pushButton_Next = new QPushButton(TextFileImportDialog);
        pushButton_Next->setObjectName(QStringLiteral("pushButton_Next"));

        horizontalLayout->addWidget(pushButton_Next);

        pushButton_Cancel = new QPushButton(TextFileImportDialog);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));

        horizontalLayout->addWidget(pushButton_Cancel);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(TextFileImportDialog);
        QObject::connect(radioButton_Separator, SIGNAL(clicked(bool)), comboBox_Separator, SLOT(setEnabled(bool)));
        QObject::connect(pushButton_Cancel, SIGNAL(clicked()), TextFileImportDialog, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);
        pushButton_Next->setDefault(true);


        QMetaObject::connectSlotsByName(TextFileImportDialog);
    } // setupUi

    void retranslateUi(QDialog *TextFileImportDialog)
    {
        TextFileImportDialog->setWindowTitle(QApplication::translate("TextFileImportDialog", "Text Import Wizard", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TextFileImportDialog", "Information", Q_NULLPTR));
        label_6->setText(QApplication::translate("TextFileImportDialog", "Encoding\357\274\232", Q_NULLPTR));
        groupBox_IgnoreHead->setTitle(QApplication::translate("TextFileImportDialog", "Read settings", Q_NULLPTR));
        label_IgnoreHead->setText(QApplication::translate("TextFileImportDialog", "Start line", Q_NULLPTR));
        label_4->setText(QApplication::translate("TextFileImportDialog", "The number of rows as the header", Q_NULLPTR));
        label_2->setText(QApplication::translate("TextFileImportDialog", "End line", Q_NULLPTR));
        groupBox_Division->setTitle(QApplication::translate("TextFileImportDialog", "How the text is arranged", Q_NULLPTR));
        radioButton_Separator->setText(QApplication::translate("TextFileImportDialog", "Separated by delimiters", Q_NULLPTR));
        label_Separator->setText(QApplication::translate("TextFileImportDialog", "Separator:", Q_NULLPTR));
        pushButton_DatasView->setText(QApplication::translate("TextFileImportDialog", "datas view", Q_NULLPTR));
        groupBox_noTable->setTitle(QApplication::translate("TextFileImportDialog", "Data extraction method", Q_NULLPTR));
        radioButton_1D->setText(QApplication::translate("TextFileImportDialog", "Extract by column", Q_NULLPTR));
        radioButton_oneColumn->setText(QApplication::translate("TextFileImportDialog", "All data as a column", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabData), QApplication::translate("TextFileImportDialog", "Data preview", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabText), QApplication::translate("TextFileImportDialog", "Text preview", Q_NULLPTR));
        pushButton_moreSet->setText(QApplication::translate("TextFileImportDialog", "More...", Q_NULLPTR));
        pushButton_Back->setText(QApplication::translate("TextFileImportDialog", "Previous", Q_NULLPTR));
        pushButton_Next->setText(QApplication::translate("TextFileImportDialog", "Next", Q_NULLPTR));
        pushButton_Cancel->setText(QApplication::translate("TextFileImportDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextFileImportDialog: public Ui_TextFileImportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFILEIMPORTDIALOG_H
