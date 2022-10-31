#include "JSpectrumWindow.h"

JSpectrumWindow::JSpectrumWindow(QWidget *parent)
{
    this->timer = new QTimer();
    this->init(parent);
    this->setXAxisRange(10000);
    setInterval(50);
    setYAxisRange(0,20000);
    setY_isScale(true);
    connect(this->timer,&QTimer::timeout,this,&JSpectrumWindow::refresh);
}

JSpectrumWindow::~JSpectrumWindow()
{

}

/**

 * 采用一个Barset输入10000个数，创建QBarCategoryAxis，那么总共有4个barset复用一个Category
 *
 *  @brief JSpectrumWindow::init
 * @param parent
 */
void JSpectrumWindow::init(QWidget *parent){
    auto layout = new QGridLayout(parent);
    for (int var = 0; var < 10000; ++var) {
        (*xAxis)[var] = var;
    }
    for (int var = 0; var < 4; ++var) {
        (*this->customPlot)[var] = new QCustomPlot();
        this->customPlot->at(var)->addGraph();
        this->customPlot->at(var)->graph()->setPen(QPen(QColor(Qt::red)));
        (*this->textItem)[var] = new QCPItemText(this->customPlot->at(var));
//        this->customPlot->at(var)->graph(0)->addData(*xAxis,y[var],true);
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
    int index = 0;
    for (auto it = data.begin(); it != data.end(); ++it) {
        index = this->bindCustonPlot[it->first];
         if(it->second.size() == 0 || it->second.size()>10000){
             qDebug()<<it->second.size()<<endl;
             continue;
         }
        this->customPlot->at(index)->graph(0)->data()->clear();
        this->customPlot->at(index)->graph(0)->addData(*xAxis,it->second);


        textItem->at(index)->setPositionAlignment(Qt::AlignTop|Qt::AlignLeft);
        textItem->at(index)->setText(it->first);
        textItem->at(index)->setFont(QFont().family()); //设置Font没有边框,设置Pen有边框
        textItem->at(index)->position->setType(QCPItemPosition::ptAxisRectRatio);
        textItem->at(index)->position->setCoords(0,0);


        if (yIsRescale == true){
            this->customPlot->at(index)->graph(0)->rescaleValueAxis();
            this->customPlot->at(index)->graph(0)->rescaleKeyAxis();
        }else{
            this->customPlot->at(index)->graph(0)->valueAxis()->setRange(yStart,yStop);
            this->customPlot->at(index)->graph(0)->keyAxis()->setRange(0.0,this->range/1.0);
        }

//        this->customPlot->at(index)->graph(0)->rescaleKeyAxis();
        this->customPlot->at(index)->replot(); //为什么放外面跑就实现不了
    }

}
void JSpectrumWindow::setDataViewEcho(std::map<QString,std::shared_ptr<StaticSpectralEchoSignal>> mapData) {
    this->mapData = mapData;
    auto it = mapData.begin();
    for(int index = 0 ;it != mapData.end();it++,index++){
        this->bindCustonPlot[it->first] = index;

//        item->setFont();
    }

}
void JSpectrumWindow::setInterval(int mec){
    this->timer->setInterval(mec);
}

/**
 * @brief 设置四个窗口的Y轴范围
 * @param start
 * @param end
 */
void JSpectrumWindow::setYAxisRange(double start, double end)
{
    yStart = start;
    yStop = end;

}

void JSpectrumWindow::setY_isScale(bool scale)
{
    yIsRescale = scale;
}
void JSpectrumWindow::setXAxisRange(int count){
    this->range = count;
}

void JSpectrumWindow::setMainWindowObject(MainWindow *vw){
    this->mainSpectrum = vw;
}
