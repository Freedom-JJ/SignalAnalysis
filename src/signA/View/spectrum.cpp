#include "spectrum.h"
#include "ui_spectrum.h"

QSize Spectrum::sizeHint()
{
    return QSize(2000,1000);
}

Spectrum::Spectrum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Spectrum)
{
    ui->setupUi(this);
    timer = new QTimer(parent);
    auto layout = new QGridLayout(this);
    layout->setMargin(0);
    layout->setSpacing(0);
    plot = new QCustomPlot(this);
    plot->addGraph();
    plot->graph(0)->setPen(QPen(QColor(Qt::red)));
    layout->addWidget(plot,0,0);
    this->setLayout(layout);

    this->textItem = new QCPItemText(this->plot);
    textItem->setPositionAlignment(Qt::AlignTop|Qt::AlignLeft);
    textItem->setText("");
    textItem->setFont(QFont().family()); //设置Font没有边框,设置Pen有边框
    textItem->position->setType(QCPItemPosition::ptAxisRectRatio);
    textItem->position->setCoords(0,0);
    init(nullptr);
}


Spectrum::~Spectrum()
{
    delete textItem;
    delete plot;
    delete ui;
    delete axisRect;
    delete normalBars;
    delete abnormalBars;
    delete timer;

    axisRect = nullptr;
    normalBars = nullptr;
    abnormalBars = nullptr;
    timer = nullptr;
    ui=nullptr;
    plot = nullptr;
    textItem=nullptr;

}

void Spectrum::init(const QVector<double> *initData)
{
    if (initData != nullptr){
        key = new QVector<double>(initData->size());
        for (int var = 0; var < key->size(); ++var) {
            (*key)[var] = var;
        }
        plot->graph(0)->addData(*key,*initData);
        plot->replot();
    }

}

void Spectrum::init(bool isRescale, QVector<double> *initData)
{
    this->yIsRescale = isRescale;
    init(initData);
}

void Spectrum::setYAxisRange(double start, double end)
{
    this->yStart = start;
    yStop = end;
}

void Spectrum::setY_isScale(bool scale)
{
    yIsRescale = scale;
}

void Spectrum::setXAxisRange(int count)
{
    range = count;
}

void Spectrum::resume()
{
    if (!this->timer->isActive()){
        this->timer->start();
    }
}

void Spectrum::pause()
{
    if (this->timer->isActive()){
        this->timer->stop();
    }
}

void Spectrum::hide()
{
    pause();
    this->plot->hide();
}

void Spectrum::show()
{
    resume();
    this->plot->show();
}

void Spectrum::refresh(const QVector<double> &data)
{
    if(data.size()==0)
        return;
    refresh(feature->getFeaturesWithMap(data),data);
}

void Spectrum::refresh(std::map<QString, double> statistic,const QVector<double> &data)
{

    auto dataVec = new QVector<double>();


    this->plot->graph(0)->data()->clear();
    if(data.size() == 0 ){
        return;
    }
    if (isShowStatistic == true){
        auto it = statistic.begin();
        QString str;
        while(it!=statistic.end()){
            str +=(it->first + ":" + QString::number(it->second) + "\n");
            it++;
        }
        textItem->setText(str);
    }
    if(this->key == nullptr){
        this->init(&data);
    }
    refreshTimeAxis();

    this->plot->graph(0)->addData(*key,data);
    if (yIsRescale == true){
//        this->plot->graph(0)->rescaleValueAxis();
        this->plot->graph(0)->rescaleKeyAxis();
        this->plot->graph(0)->valueAxis()->setRange(yStart , feature->getMax() * rescaleRate);
    }else{
        this->plot->graph(0)->valueAxis()->setRange(yStart,yStop);
        this->plot->graph(0)->keyAxis()->setRange(0.0,this->range/1.0);
    }
//    this->plot->replot();
    plot->replot(QCustomPlot::rpQueuedReplot);

}

void Spectrum::autoRescale(double rate)
{
    yIsRescale = true;
    this->rescaleRate = rate;
}

void Spectrum::start()
{
    clearTimeAxis();
    if(viewData == nullptr){
        QMessageBox me(QMessageBox::Warning,"提示","没有设置显示数据对象");
        me.exec();
    }
    connect(timer,SIGNAL(timeout()),this,SLOT(refresh(void)));
    resume();
}

void Spectrum::stop()
{
    pause();
}

void Spectrum::setInterval(int mec)
{
    this->timer->setInterval(mec);
}

void Spectrum::setDataViewEcho(BaseEchoSignal *data)
{
    viewData = data;
}

void Spectrum::openStatistic()
{
    isShowStatistic = true;
}

void Spectrum::closeStatstic()
{
    isShowStatistic = false;
}

void Spectrum::openTimeAxis()
{
    if(isOpenTimeAxis)
        return;
    analysisBuffer.reserve(10);
    //创建时间轴
    this->axisRect = new QCPAxisRect(plot);
    plot->plotLayout()->addElement(1,0,axisRect);
    plot->plotLayout()->setRowSpacing(0);
    plot->plotLayout()->setMargins(QMargins(0,0,0,0));
    plot->setInteractions(QCP::iRangeDrag);
    axisRect->setMaximumSize(QSize(QWIDGETSIZE_MAX,10));
    axisRect->setRangeDrag(Qt::Horizontal);
    normalBars = new QCPBars(axisRect->axis(QCPAxis::atBottom),axisRect->axis(QCPAxis::atLeft));
    abnormalBars = new QCPBars(axisRect->axis(QCPAxis::atBottom),axisRect->axis(QCPAxis::atLeft));

    normalBars->setPen(Qt::NoPen);
    normalBars->setBrush(QColor(Qt::GlobalColor::green));
    normalBars->setWidth(barWidth-0.1);
    abnormalBars->setPen(Qt::NoPen);
    abnormalBars->setBrush(QColor(Qt::GlobalColor::red));
    abnormalBars->setWidth(barWidth-0.1);
    axisRect->axis(QCPAxis::atLeft)->setVisible(false);
    isOpenTimeAxis = true;
}

void Spectrum::closeTimeAxis()
{
    if(isOpenTimeAxis == false)
        return;
    bool flag = plot->plotLayout()->remove(axisRect);

    if(flag){
        qDebug()<<"删除成功"<<endl;
    }
    isOpenTimeAxis = false;
}

void Spectrum::clearTimeAxis()
{
    if (isOpenTimeAxis == false)
        return;
    normalBars->data()->clear();
    abnormalBars->data()->clear();
    count=0;
}


void Spectrum::addDataTimeAxis(AnalysisResult &res)
{
    if(isOpenTimeAxis == false){
        return;
    }
    std::lock_guard<std::mutex> lk(mu);

    analysisBuffer.append(res);
}

//加锁了，速度变快还是会闪退
void Spectrum::refreshTimeAxis()
{
    if(isOpenTimeAxis ){
        std::lock_guard<std::mutex> lk(mu);
        for(auto res:analysisBuffer){
            if(count!=res.getId().toInt()){
                qDebug()<<"信号反馈祯ID不对应,内部id"<<count<<"----外部id"<<res.getId().toInt()<<endl;
            }
            if(res.getErrorInf()==AnalysisResult::ABNORMAL){
                abnormalBars->addData(count*barWidth,20);
            }else{
                normalBars->addData(count*barWidth,20);
            }
            count++;
            if(count>200){
                axisRect->axis(QCPAxis::atBottom)->rescale();
            }else{
                axisRect->axis(QCPAxis::atBottom)->setRange(0,200);
            }
        }
        analysisBuffer.clear();
    }
}

