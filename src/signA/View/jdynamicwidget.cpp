#include "jdynamicwidget.h"
#include "ui_jdynamicwidget.h"

JDynamicWidget::JDynamicWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JDynamicWidget)
{
    ui->setupUi(this);
    timer= new QTimer(this);
    setInterval(50);
    connect(this->timer,&QTimer::timeout,this,&JDynamicWidget::refresh);
    connect(this,SIGNAL(clicked()),this,SLOT(mouseClick()));
}
void JDynamicWidget::init(int channelNum)
{
    scrollArea = new QScrollArea(this);
    gridLayout = new QGridLayout(this);
    gridLayout->setMargin(0);
    gridLayout->setSpacing(0);
    hlayout = new QHBoxLayout(this);
    scrollContents = new QWidget(this);
    hlayout->addWidget(scrollArea);
    for (int var = 0; var < channelNum; ++var) {
        this->spectrumVec.push_back(new Spectrum(this));
        gridLayout->addWidget(spectrumVec[var],int(var/2),var%2);
    }
    scrollArea->setWidgetResizable(true);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scrollArea->setWidget(scrollContents);
    scrollContents->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    scrollContents->setLayout(gridLayout);
    setLayout(hlayout);
    adjustSize();
}

void JDynamicWidget::init(std::map<QString, std::shared_ptr<StaticSpectralEchoSignal> > mapData)
{
    setDataViewEcho(mapData);
    init(mapData.size());
}

void JDynamicWidget::resume()
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->resume();
    }
}

void JDynamicWidget::pause()
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->pause();
    }
}

void JDynamicWidget::hide()
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->hide();
    }
}

void JDynamicWidget::show()
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->show();
    }
}

void JDynamicWidget::refresh()
{
    qDebug()<<"refresh"<<endl;
    auto it = this->mapData.begin();
    while (it!=mapData.end()) {
        int index = bindSpectrum[it->first];
        QVector<double> data = it->second->PopEchoSignal();
        spectrumVec[index]->refresh(data); //内部排除了size为0
        it++;
    }
}

void JDynamicWidget::start()
{
    if(timer->isActive()){
        return;
    }
    this->timer->start();
}

void JDynamicWidget::stop()
{
    if(timer->isActive()){
        timer->stop();
    }
}

void JDynamicWidget::setDataViewEcho(std::map<QString, std::shared_ptr<StaticSpectralEchoSignal> > mapData)
{
    this->mapData = mapData;
    auto it = mapData.begin();
    int index = 0;
    while (it!=mapData.end()) {
        bindSpectrum[it->first] = index++;
        it++;
    }
}

void JDynamicWidget::setInterval(int mec)
{
    timer->setInterval(mec);
}

void JDynamicWidget::setYAxisRange(double start, double end)
{
    yStart = start;
    yEnd = end;
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->setYAxisRange(start,end);
    }
}

void JDynamicWidget::setY_isScale(bool scale)
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->setY_isScale(scale);
    }
}

void JDynamicWidget::setXAxisRange(int count)
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->setXAxisRange(count);
    }
}

void JDynamicWidget::openAutoYAxisRescalse(double rate)
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->autoRescale(rate);
    }
}

void JDynamicWidget::setIsShowStatistic(bool state)
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
         spectrumVec[var]->closeStatstic();
        if(state == true){
             spectrumVec[var]->openStatistic();
        }

    }
}





















































JDynamicWidget::~JDynamicWidget()
{
    delete ui;
}



void JDynamicWidget::mousePressEvent(QMouseEvent *ev)
{

}

void JDynamicWidget::mouseReleaseEvent(QMouseEvent *ev)
{
    qDebug()<<"鼠标释放"<<endl;
    emit clicked();
}

void JDynamicWidget::resizeEvent(QResizeEvent *event)
{
    double pageCount = spectrumVec.size() / 4; //4个窗口为一页
    double pageHeight = event->size().height(); //一页的高度
    this->scrollContents->setFixedHeight(pageCount * pageHeight -40); //-10的原因是，QScrollArea无法完全占据QWidget区域
//    this->scrollContents->resize(event->size().width()/2,event->size().height()/2);
    qDebug()<<"old size: w = "<<event->oldSize().width() <<" h = "<<event->oldSize().height()<<endl;
    qDebug()<<"new size: w = "<<event->size().width() <<" h = "<<event->size().height()<<endl;
}

void JDynamicWidget::mouseClick()
{
    qDebug()<<this->parentWidget()->width()<<endl<<this->parentWidget()->height()<<endl;
}
