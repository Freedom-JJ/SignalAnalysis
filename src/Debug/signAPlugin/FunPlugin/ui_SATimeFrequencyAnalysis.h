/********************************************************************************
** Form generated from reading UI file 'SATimeFrequencyAnalysis.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATIMEFREQUENCYANALYSIS_H
#define UI_SATIMEFREQUENCYANALYSIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <SAChart2D.h>

QT_BEGIN_NAMESPACE

class Ui_SATimeFrequencyAnalysis
{
public:
    QVBoxLayout *verticalLayout_11;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_import;
    QLabel *label;
    QLineEdit *lineEdit_interval;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_intervalLength;
    QLabel *label_4;
    QComboBox *comboBox_window;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    SAChart2D *waveChart;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_locate;
    QPushButton *pushButton_leftMove;
    QSlider *horizontalSlider_windowRange;
    QPushButton *pushButton_rightMove;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_localtionPane;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_startIndex;
    QLabel *label_8;
    QSpinBox *spinBox_endIndex;
    QLabel *label_info;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_set;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButton_fft;
    QRadioButton *radioButton_psd;
    QCheckBox *checkBox_detrend;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton_amp;
    QRadioButton *radioButton_ampDB;
    QRadioButton *radioButton_mag;
    QRadioButton *radioButton_magDB;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButton_msa;
    QRadioButton *radioButton_ssa;
    QRadioButton *radioButton_tisa;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_exportData;
    QSpacerItem *horizontalSpacer_3;
    SAChart2D *spectrogramChart;

    void setupUi(QWidget *SATimeFrequencyAnalysis)
    {
        if (SATimeFrequencyAnalysis->objectName().isEmpty())
            SATimeFrequencyAnalysis->setObjectName(QStringLiteral("SATimeFrequencyAnalysis"));
        SATimeFrequencyAnalysis->resize(887, 541);
        verticalLayout_11 = new QVBoxLayout(SATimeFrequencyAnalysis);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        splitter = new QSplitter(SATimeFrequencyAnalysis);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setOrientation(Qt::Vertical);
        splitter->setOpaqueResize(true);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_import = new QPushButton(layoutWidget);
        pushButton_import->setObjectName(QStringLiteral("pushButton_import"));

        horizontalLayout->addWidget(pushButton_import);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_interval = new QLineEdit(layoutWidget);
        lineEdit_interval->setObjectName(QStringLiteral("lineEdit_interval"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_interval->sizePolicy().hasHeightForWidth());
        lineEdit_interval->setSizePolicy(sizePolicy);
        lineEdit_interval->setMinimumSize(QSize(20, 0));
        lineEdit_interval->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(lineEdit_interval);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_intervalLength = new QSpinBox(layoutWidget);
        spinBox_intervalLength->setObjectName(QStringLiteral("spinBox_intervalLength"));
        spinBox_intervalLength->setMinimumSize(QSize(100, 0));
        spinBox_intervalLength->setMinimum(16);
        spinBox_intervalLength->setMaximum(999999999);
        spinBox_intervalLength->setSingleStep(16);
        spinBox_intervalLength->setValue(256);

        horizontalLayout->addWidget(spinBox_intervalLength);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBox_window = new QComboBox(layoutWidget);
        comboBox_window->setObjectName(QStringLiteral("comboBox_window"));

        horizontalLayout->addWidget(comboBox_window);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_10->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        waveChart = new SAChart2D(layoutWidget);
        waveChart->setObjectName(QStringLiteral("waveChart"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(waveChart->sizePolicy().hasHeightForWidth());
        waveChart->setSizePolicy(sizePolicy1);
        waveChart->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(waveChart);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_locate = new QPushButton(layoutWidget);
        pushButton_locate->setObjectName(QStringLiteral("pushButton_locate"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/res_image/expand_down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_locate->setIcon(icon);

        horizontalLayout_7->addWidget(pushButton_locate);

        pushButton_leftMove = new QPushButton(layoutWidget);
        pushButton_leftMove->setObjectName(QStringLiteral("pushButton_leftMove"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_leftMove->sizePolicy().hasHeightForWidth());
        pushButton_leftMove->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/res_image/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_leftMove->setIcon(icon1);

        horizontalLayout_7->addWidget(pushButton_leftMove);

        horizontalSlider_windowRange = new QSlider(layoutWidget);
        horizontalSlider_windowRange->setObjectName(QStringLiteral("horizontalSlider_windowRange"));
        horizontalSlider_windowRange->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_windowRange);

        pushButton_rightMove = new QPushButton(layoutWidget);
        pushButton_rightMove->setObjectName(QStringLiteral("pushButton_rightMove"));
        sizePolicy2.setHeightForWidth(pushButton_rightMove->sizePolicy().hasHeightForWidth());
        pushButton_rightMove->setSizePolicy(sizePolicy2);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/res_image/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_rightMove->setIcon(icon2);

        horizontalLayout_7->addWidget(pushButton_rightMove);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(1);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        widget_localtionPane = new QWidget(layoutWidget);
        widget_localtionPane->setObjectName(QStringLiteral("widget_localtionPane"));
        widget_localtionPane->setMinimumSize(QSize(400, 0));
        horizontalLayout_2 = new QHBoxLayout(widget_localtionPane);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        spinBox_startIndex = new QSpinBox(widget_localtionPane);
        spinBox_startIndex->setObjectName(QStringLiteral("spinBox_startIndex"));
        spinBox_startIndex->setMaximum(999999999);

        horizontalLayout_2->addWidget(spinBox_startIndex);

        label_8 = new QLabel(widget_localtionPane);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_2->addWidget(label_8);

        spinBox_endIndex = new QSpinBox(widget_localtionPane);
        spinBox_endIndex->setObjectName(QStringLiteral("spinBox_endIndex"));
        spinBox_endIndex->setMaximum(999999999);

        horizontalLayout_2->addWidget(spinBox_endIndex);

        label_info = new QLabel(widget_localtionPane);
        label_info->setObjectName(QStringLiteral("label_info"));

        horizontalLayout_2->addWidget(label_info);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_6->addWidget(widget_localtionPane);


        verticalLayout->addLayout(verticalLayout_6);


        verticalLayout_10->addLayout(verticalLayout);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_9 = new QVBoxLayout(layoutWidget1);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_set = new QGroupBox(layoutWidget1);
        groupBox_set->setObjectName(QStringLiteral("groupBox_set"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_set->sizePolicy().hasHeightForWidth());
        groupBox_set->setSizePolicy(sizePolicy3);
        groupBox_set->setAutoFillBackground(false);
        groupBox_set->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(groupBox_set);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        radioButton_fft = new QRadioButton(groupBox_set);
        radioButton_fft->setObjectName(QStringLiteral("radioButton_fft"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(radioButton_fft->sizePolicy().hasHeightForWidth());
        radioButton_fft->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(radioButton_fft);

        radioButton_psd = new QRadioButton(groupBox_set);
        radioButton_psd->setObjectName(QStringLiteral("radioButton_psd"));

        horizontalLayout_6->addWidget(radioButton_psd);


        verticalLayout_5->addLayout(horizontalLayout_6);

        checkBox_detrend = new QCheckBox(groupBox_set);
        checkBox_detrend->setObjectName(QStringLiteral("checkBox_detrend"));

        verticalLayout_5->addWidget(checkBox_detrend);

        label_5 = new QLabel(groupBox_set);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        radioButton_amp = new QRadioButton(groupBox_set);
        radioButton_amp->setObjectName(QStringLiteral("radioButton_amp"));

        verticalLayout_3->addWidget(radioButton_amp);

        radioButton_ampDB = new QRadioButton(groupBox_set);
        radioButton_ampDB->setObjectName(QStringLiteral("radioButton_ampDB"));

        verticalLayout_3->addWidget(radioButton_ampDB);

        radioButton_mag = new QRadioButton(groupBox_set);
        radioButton_mag->setObjectName(QStringLiteral("radioButton_mag"));

        verticalLayout_3->addWidget(radioButton_mag);

        radioButton_magDB = new QRadioButton(groupBox_set);
        radioButton_magDB->setObjectName(QStringLiteral("radioButton_magDB"));

        verticalLayout_3->addWidget(radioButton_magDB);


        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_5);

        label_6 = new QLabel(groupBox_set);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        radioButton_msa = new QRadioButton(groupBox_set);
        radioButton_msa->setObjectName(QStringLiteral("radioButton_msa"));

        verticalLayout_4->addWidget(radioButton_msa);

        radioButton_ssa = new QRadioButton(groupBox_set);
        radioButton_ssa->setObjectName(QStringLiteral("radioButton_ssa"));

        verticalLayout_4->addWidget(radioButton_ssa);

        radioButton_tisa = new QRadioButton(groupBox_set);
        radioButton_tisa->setObjectName(QStringLiteral("radioButton_tisa"));

        verticalLayout_4->addWidget(radioButton_tisa);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        verticalLayout_2->addWidget(groupBox_set);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_exportData = new QPushButton(layoutWidget1);
        pushButton_exportData->setObjectName(QStringLiteral("pushButton_exportData"));

        horizontalLayout_3->addWidget(pushButton_exportData);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        spectrogramChart = new SAChart2D(layoutWidget1);
        spectrogramChart->setObjectName(QStringLiteral("spectrogramChart"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(spectrogramChart->sizePolicy().hasHeightForWidth());
        spectrogramChart->setSizePolicy(sizePolicy5);
        spectrogramChart->setMinimumSize(QSize(0, 100));

        horizontalLayout_4->addWidget(spectrogramChart);


        verticalLayout_9->addLayout(horizontalLayout_4);

        splitter->addWidget(layoutWidget1);

        verticalLayout_11->addWidget(splitter);


        retranslateUi(SATimeFrequencyAnalysis);

        QMetaObject::connectSlotsByName(SATimeFrequencyAnalysis);
    } // setupUi

    void retranslateUi(QWidget *SATimeFrequencyAnalysis)
    {
        SATimeFrequencyAnalysis->setWindowTitle(QApplication::translate("SATimeFrequencyAnalysis", "Form", Q_NULLPTR));
        pushButton_import->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\257\274\345\205\245\346\225\260\346\215\256", Q_NULLPTR));
        label->setText(QApplication::translate("SATimeFrequencyAnalysis", "\344\277\241\345\217\267\346\227\266\351\227\264\351\227\264\351\232\224", Q_NULLPTR));
        label_2->setText(QApplication::translate("SATimeFrequencyAnalysis", "ms", Q_NULLPTR));
        label_3->setText(QApplication::translate("SATimeFrequencyAnalysis", " \346\210\252\346\226\255\351\225\277\345\272\246:", Q_NULLPTR));
        spinBox_intervalLength->setSuffix(QString());
        label_4->setText(QApplication::translate("SATimeFrequencyAnalysis", " \347\252\227:", Q_NULLPTR));
        comboBox_window->setCurrentText(QString());
        pushButton_locate->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\256\232\344\275\215", Q_NULLPTR));
        pushButton_leftMove->setText(QString());
        pushButton_rightMove->setText(QString());
        spinBox_startIndex->setPrefix(QApplication::translate("SATimeFrequencyAnalysis", "\350\265\267\345\247\213\347\264\242\345\274\225:", Q_NULLPTR));
        label_8->setText(QApplication::translate("SATimeFrequencyAnalysis", "~", Q_NULLPTR));
        spinBox_endIndex->setPrefix(QApplication::translate("SATimeFrequencyAnalysis", "\347\273\223\346\235\237\347\264\242\345\274\225:", Q_NULLPTR));
        label_info->setText(QApplication::translate("SATimeFrequencyAnalysis", "0,0", Q_NULLPTR));
        groupBox_set->setTitle(QApplication::translate("SATimeFrequencyAnalysis", "\350\260\261\350\256\276\347\275\256", Q_NULLPTR));
        radioButton_fft->setText(QApplication::translate("SATimeFrequencyAnalysis", "\351\242\221\350\260\261\345\210\206\346\236\220", Q_NULLPTR));
        radioButton_psd->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\212\237\347\216\207\350\260\261\345\210\206\346\236\220", Q_NULLPTR));
        checkBox_detrend->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\216\273\345\235\207\345\200\274", Q_NULLPTR));
        label_5->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\271\205\345\200\274\350\256\276\347\275\256:", Q_NULLPTR));
        radioButton_amp->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\271\205\345\200\274\350\260\261", Q_NULLPTR));
        radioButton_ampDB->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\271\205\345\200\274\350\260\261(dB)", Q_NULLPTR));
        radioButton_mag->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\271\205\345\272\246\350\260\261", Q_NULLPTR));
        radioButton_magDB->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\271\205\345\272\246\350\260\261(dB)", Q_NULLPTR));
        label_6->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\212\237\347\216\207\350\260\261\350\256\276\347\275\256:", Q_NULLPTR));
        radioButton_msa->setText(QApplication::translate("SATimeFrequencyAnalysis", "MSA", Q_NULLPTR));
        radioButton_ssa->setText(QApplication::translate("SATimeFrequencyAnalysis", "SSA", Q_NULLPTR));
        radioButton_tisa->setText(QApplication::translate("SATimeFrequencyAnalysis", "TISA", Q_NULLPTR));
        pushButton_exportData->setText(QApplication::translate("SATimeFrequencyAnalysis", "\345\257\274\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SATimeFrequencyAnalysis: public Ui_SATimeFrequencyAnalysis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATIMEFREQUENCYANALYSIS_H
