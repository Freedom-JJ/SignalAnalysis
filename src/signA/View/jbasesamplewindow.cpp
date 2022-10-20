#include "jbasesamplewindow.h"

JBaseSampleWindow::JBaseSampleWindow(QWidget *parent) : QWidget(parent)
{
    QGridLayout *layout = new QGridLayout(parent);
    for (int var = 0; var < 4; ++var) {
        (*this->chartView)[var] = new QChartView(parent);
        this->chartView->at(var)->setRenderHint(QPainter::Antialiasing);
    }

    layout->addWidget(this->chartView->at(0),0,0);
    layout->addWidget(this->chartView->at(1),0,1);
    layout->addWidget(this->chartView->at(2),1,0);
    layout->addWidget(this->chartView->at(3),1,1);
    parent->setLayout(layout);
}

void JBaseSampleWindow::addCharts(QVector<QChart *> *charts){
    if(charts->size() != 4 )
        qDebug()<<"ERROR size is not 4"<<endl;
    for (int var = 0; var < 4; ++var) {
        this->chartView->at(var)->setChart(charts->at(var));
    }
}

