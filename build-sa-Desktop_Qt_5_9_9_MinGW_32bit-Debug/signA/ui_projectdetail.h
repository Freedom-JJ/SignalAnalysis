/********************************************************************************
** Form generated from reading UI file 'projectdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDETAIL_H
#define UI_PROJECTDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ProjectDetail
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *nameEdit;
    QTextEdit *detailEdit;
    QLabel *label;
    QPushButton *okBtn;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;

    void setupUi(QDialog *ProjectDetail)
    {
        if (ProjectDetail->objectName().isEmpty())
            ProjectDetail->setObjectName(QStringLiteral("ProjectDetail"));
        ProjectDetail->resize(400, 300);
        gridLayout_2 = new QGridLayout(ProjectDetail);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        nameEdit = new QLineEdit(ProjectDetail);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 3);

        detailEdit = new QTextEdit(ProjectDetail);
        detailEdit->setObjectName(QStringLiteral("detailEdit"));

        gridLayout->addWidget(detailEdit, 1, 1, 1, 3);

        label = new QLabel(ProjectDetail);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        okBtn = new QPushButton(ProjectDetail);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        gridLayout->addWidget(okBtn, 3, 3, 1, 1);

        label_2 = new QLabel(ProjectDetail);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(ProjectDetail);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton = new QPushButton(ProjectDetail);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(nameEdit);
        label_2->setBuddy(detailEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ProjectDetail);

        QMetaObject::connectSlotsByName(ProjectDetail);
    } // setupUi

    void retranslateUi(QDialog *ProjectDetail)
    {
        ProjectDetail->setWindowTitle(QApplication::translate("ProjectDetail", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ProjectDetail", "\344\272\247\345\223\201\345\220\215", Q_NULLPTR));
        okBtn->setText(QApplication::translate("ProjectDetail", "\345\256\214\346\210\220", Q_NULLPTR));
        label_2->setText(QApplication::translate("ProjectDetail", "\344\272\247\345\223\201\347\273\206\350\212\202", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ProjectDetail", "PushButton", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ProjectDetail", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ProjectDetail: public Ui_ProjectDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDETAIL_H
