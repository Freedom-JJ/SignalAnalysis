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

    ui=nullptr;
    plot = nullptr;
    textItem=nullptr;

}

void Spectrum::init(QVector<double> *initData)
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

void Spectrum::refresh(QVector<double> &data)
{
    if(data.size()==0)
        return;
    refresh(feature->getFeaturesWithMap(data),data);
}

void Spectrum::refresh(std::map<QString, double> statistic, QVector<double> &data)
{
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

    this->plot->graph(0)->addData(*key,data);
    if (yIsRescale == true){
//        this->plot->graph(0)->rescaleValueAxis();
        this->plot->graph(0)->rescaleKeyAxis();
        this->plot->graph(0)->valueAxis()->setRange(yStart , feature->getMax() * rescaleRate);
    }else{
        this->plot->graph(0)->valueAxis()->setRange(yStart,yStop);
        this->plot->graph(0)->keyAxis()->setRange(0.0,this->range/1.0);
    }
    this->plot->replot();


}

void Spectrum::autoRescale(double rate)
{
    yIsRescale = true;
    this->rescaleRate = rate;
}

void Spectrum::start()
{
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
