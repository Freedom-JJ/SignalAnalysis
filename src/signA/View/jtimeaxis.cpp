#include "jtimeaxis.h"

JTimeAxis::JTimeAxis(QWidget *parent) : QWidget(parent),trickerTime(new QCPAxisTickerDateTime)
{
    timer = new QTimer();


    plot= new QCustomPlot();
    trickerTime->setDateTimeFormat("hh:mm:ss");
    setContentsMargins(0,0,0,0);
    connect(this->timer,&QTimer::timeout,this,&JTimeAxis::refesh);
    QPalette pal(this->palette());
    pal.setColor(QPalette::Background,Qt::black);
    setAutoFillBackground(true);
    setPalette(pal);
    setSizePolicy(QSizePolicy::Preferred,QSizePolicy::Fixed);
}

void JTimeAxis::init()
{
    auto hbox  = new QVBoxLayout();
    hbox->setMargin(0);

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
    for (int i = AnalysisResult::NORMAL; i<=AnalysisResult::ABNORMAL1;i++ ){
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
    axisRect->axis(QCPAxis::atBottom)->setRange(QDateTime::currentDateTime().toTime_t(),QDateTime::currentDateTime().toTime_t()+range);


    hbox->addWidget(plot);
    setLayout(hbox);
    adjustSize();
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
    if(count == 0){
        if(mw->theApp->m_iplaybackState > 0){
            startTime = QDateTime::fromString(QString::fromStdString( mw->theApp->m_sumSignal->getStartTime()),"yyyy-MM-dd hh:mm:ss").toTime_t();
        }else{
            startTime = QDateTime::currentDateTime().toTime_t();
        }
    }
    if(value.getId().toInt() !=count){
        qDebug()<<"ID 不对应 也刷新"<<endl;
    }
    if(value.getErrorInf()!=AnalysisResult::NORMAL){
        value.setStart(QDateTime::fromTime_t(startTime + count).toString("hh:mm:ss"));
//        value.setEnd(QDateTime::fromTime_t(startTime + count+1).toString("hh:mm:ss"));
        anares->push_back(value);
        qDebug()<<"添加错误祯!"<<endl;
    }
//    qDebug()<<"添加时间轴!"<<endl;
    int index = int(value.getErrorInf());
    if (index !=0){
        index = 1;
    }
    barVec[index]->addData(count + startTime,5);//暂时没有实现多颜色
    if(count > range){
        axisRect->axis(QCPAxis::atBottom)->rescale();
    }else{
        axisRect->axis(QCPAxis::atBottom)->setRange(startTime,startTime+range); //十分钟
    }
    count++;
    plot->replot(QCustomPlot::rpQueuedReplot);
}

QSize JTimeAxis::sizeHint() const
{

    QSize t(this->width(),100);
    qDebug()<<"plot height:"<<this->plot->height();
    qDebug()<<"axisRect height:"<<axisRect->height(); // 高度为0
    qDebug()<<"widget height:"<<height(); //plot高度与widget高度一致
    return t;
}

void JTimeAxis::resizeEvent(QResizeEvent *event)
{
    qDebug()<<"old height-----"<<event->oldSize().height();
    qDebug()<<"new height-----"<<event->size().height();
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
//实时刷新
void JTimeAxis::addDataTimeAxis(AnalysisResult value)
{
    refresh(value);
//    std::lock_guard<std::mutex> lk(mu);
//    analysisBuffer.push_back(value);

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
