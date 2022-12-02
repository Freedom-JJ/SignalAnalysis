#include "jtimeaxis.h"

JTimeAxis::JTimeAxis(QWidget *parent) : QWidget(parent),trickerTime(new QCPAxisTickerTime)
{
    timer = new QTimer();
    auto hbox  = new QHBoxLayout();
    hbox->setMargin(0);
    plot= new QCustomPlot();
    trickerTime->setTimeFormat("%h:%m:%s");
    hbox->addWidget(plot);
    setLayout(hbox);
    setContentsMargins(0,0,0,0);
    connect(this->timer,&QTimer::timeout,this,&JTimeAxis::refesh);
}

void JTimeAxis::init()
{
    axisRect = new QCPAxisRect(plot);
    axisRect->setupFullAxesBox();
    axisRect->axis(QCPAxis::atBottom)->setTicker(trickerTime);
    plot->plotLayout()->clear();
    plot->plotLayout()->addElement(0,0,axisRect);
    axisRect->axis(QCPAxis::atBottom)->setLayer("axes");
    axisRect->axis(QCPAxis::atBottom)->grid()->setLayer("grid");
    plot->plotLayout()->setRowSpacing(0);
    plot->plotLayout()->setMargins(QMargins(0,0,0,0));
    plot->setInteractions(QCP::iRangeDrag);
    axisRect->setMaximumSize(QSize(QWIDGETSIZE_MAX,5));
    for (int i = AnalysisResult::NORMAL; i<=AnalysisResult::ABNORMAL;i++ ){
        barVec.push_back(new QCPBars(axisRect->axis(QCPAxis::atBottom),axisRect->axis(QCPAxis::atLeft)));
        switch (i) {
        case 0:
            barVec[i]->setPen(Qt::NoPen);
            barVec[i]->setBrush(QColor(Qt::GlobalColor::green));
            break;
        case 1:
            barVec[i]->setPen(Qt::NoPen);
            barVec[i]->setBrush(QColor(Qt::GlobalColor::red));
            break;
        }
        barVec[i]->setWidth(barWidth-0.1);
    }
    axisRect->axis(QCPAxis::atLeft)->setVisible(false);
    axisRect->axis(QCPAxis::atBottom)->setRange(0,100);
}

void JTimeAxis::clearTimeAxis()
{
    analysisBuffer.clear();
    anares->clear();
    for (int var = 0; var < barVec.size(); ++var) {
        qDebug()<<"清理时间轴"<<endl;
        barVec[var]->data()->clear();
    }
    count = 0;
    plot->replot();
}

void JTimeAxis::start(int interal)
{

    this->clearTimeAxis();

    timer->setInterval(interal);
    resume();
}

void JTimeAxis::stop()
{
    pause();
}

void JTimeAxis::pause()
{
    if(!timer->isActive()){
        qDebug()<<"定时器，没活动"<<endl;
        return;
    }
    timer->stop();
}

void JTimeAxis::resume()
{
    if(timer->isActive()){
        qDebug()<<"定时器，正在活动"<<endl;
        return;
    }
    timer->start();
}

void JTimeAxis::refresh(AnalysisResult &value)
{
    static QTime time = QTime::currentTime();
    double key = time.elapsed()/1000;
    if(value.getId().toInt() !=count){
        qDebug()<<"ID 不对应 也刷新"<<endl;
    }
    if(value.getErrorInf()!=AnalysisResult::NORMAL){
        anares->push_back(value);
        qDebug()<<"添加错误祯!"<<endl;
    }
    barVec[int(value.getErrorInf())]->addData(key,5);
    if(count > range){
        axisRect->axis(QCPAxis::atBottom)->rescale();
    }
    count++;
    this->plot->replot();
}

void JTimeAxis::refesh()
{
    std::lock_guard<std::mutex> lk(mu);
    for (int var = 0; var < analysisBuffer.size(); ++var) {
        refresh(analysisBuffer[var]);
    }
    analysisBuffer.clear();
}

void JTimeAxis::openTimeAxis()
{

}

void JTimeAxis::closeTimeAxis()
{

}

void JTimeAxis::addDataTimeAxis(QVector<AnalysisResult> res)
{
    for (int var = 0; var < res.size(); ++var) {
        addDataTimeAxis(res[var]);
    }
}

void JTimeAxis::addDataTimeAxis(AnalysisResult value)
{
    std::lock_guard<std::mutex> lk(mu);
    analysisBuffer.push_back(value);

}

MainWindow *JTimeAxis::getMw() const
{
    return mw;
}

void JTimeAxis::setMw(MainWindow *value)
{
    mw = value;
    anares = mw->theApp->getAnalysisResultNoChannel();
}
