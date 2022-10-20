#include "JSpectrumWindow.h"

JSpectrumWindow::JSpectrumWindow(QWidget *parent)
{
    this->timer = new QTimer();
    this->setRange(10000);
    this->init(parent);
    setInterval(50);
    connect(this->timer,&QTimer::timeout,this,&JSpectrumWindow::refresh);
}

/**

 * 采用一个Barset输入10000个数，创建QBarCategoryAxis，那么总共有4个barset复用一个Category
 *
 *  @brief JSpectrumWindow::init
 * @param parent
 */
void JSpectrumWindow::init(QWidget *parent){
    auto layout = new QGridLayout(parent);
    QVector<QVector<double>> y(4);
    for (int i = 0; i < 10000; ++i) {
        (*xAxis)[i] = i;
        for (int j = 0; j < 4; ++j) {
            double signal ;
            if(i < 2000 || i > 5000){
                signal = sin(i) +20;
            }else
                signal = sin(i) + 10;
            y[j].append(1);
        }
    }

    for (int var = 0; var < 4; ++var) {
        (*this->customPlot)[var] = new QCustomPlot();
        this->customPlot->at(var)->addGraph();
        this->customPlot->at(var)->graph(0)->addData(*xAxis,y[var],true);
//        connect(customPlot->at(var)->xAxis,SIGNAL(rangeChanged(QCPRange)),
//                   customPlot->at(var)->xAxis2,SLOT(setRange(QCPRange)));
//           connect(customPlot->at(var)->yAxis,SIGNAL(rangeChanged(QCPRange)),
//                   customPlot->at(var)->yAxis2,SLOT(setRange(QCPRange)));

    }
    layout->addWidget(this->customPlot->at(0),0,0);
    layout->addWidget(this->customPlot->at(1),0,1);
    layout->addWidget(this->customPlot->at(2),1,0);
    layout->addWidget(this->customPlot->at(3),1,1);
    parent->setLayout(layout);
}
void JSpectrumWindow::show(){

    for (int i = 0; i < 4; ++i) {
        this->customPlot->at(i)->show();
    }

}
void JSpectrumWindow::hide(){
    for (int i = 0; i < 4; ++i) {
        this->customPlot->at(i)->hide();
    }
}

void JSpectrumWindow::pause(){
    this->timer->stop();
    hide();
}
void JSpectrumWindow::resume(){
    this->timer->start();
    show();
}
void JSpectrumWindow::start(){
    this->timer->start();
    show();
}
void JSpectrumWindow::stop(){
    this->timer->stop();

}
void JSpectrumWindow::refresh(){
    //qDebug()<<"refresh"<<endl;

    std::map<QString,QVector<double>> data;
    for(auto it = mapData.begin();it!=mapData.end();it++){
        QVector<double> singleChannelVector = it->second->PopEchoSignal();;
        data[it->first] = singleChannelVector;
    }

    if(data.size()==0){
        return;
    }
    auto iter = data.begin();
    int index = 0;
    static int key = 10000;

    for (auto it = data.begin(); it != data.end(); ++it) {
        index = this->bindCustonPlot[it->first];
         if(it->second.size() == 0){
             break;
         }
        this->customPlot->at(index)->graph(0)->data()->clear();
        this->customPlot->at(index)->graph(0)->addData(*xAxis,it->second);
        this->customPlot->at(index)->graph(0)->keyAxis()->setRange(0,10000);
        this->customPlot->at(index)->graph(0)->rescaleValueAxis();
        this->customPlot->at(index)->graph(0)->rescaleKeyAxis();
        this->customPlot->at(index)->replot(); //为什么放外面跑就实现不了
    }
    key++;
}
void JSpectrumWindow::setDataViewEcho(std::map<QString,std::shared_ptr<StaticSpectralEchoSignal>> mapData) {
    this->mapData = mapData;
    auto it = mapData.begin();
    for(int index = 0 ;it != mapData.end();it++,index++){
        this->bindCustonPlot[it->first] = index;
    }

}
void JSpectrumWindow::setInterval(int mec){
    this->timer->setInterval(mec);
}
void JSpectrumWindow::setRange(int count){
    this->range = count;
}
