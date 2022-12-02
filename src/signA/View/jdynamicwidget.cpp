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
    if(channelNum == spectrumVec.size()){
        return;
    }
    if(scrollArea == nullptr){
        scrollArea = new QScrollArea(this);
        gridLayout = new QGridLayout(this);
        hlayout = new QHBoxLayout(this);
        scrollContents = new QWidget(this);
        hlayout->addWidget(scrollArea);
        scrollArea->setWidgetResizable(true);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidget(scrollContents);
        scrollContents->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
        gridLayout->setMargin(0);
        gridLayout->setSpacing(0);
    }
    if(spectrumVec.size() < channelNum){
        for (int var = spectrumVec.size(); var < channelNum; ++var) {
            this->spectrumVec.push_back(new Spectrum(this));
            gridLayout->addWidget(spectrumVec[var],int(var/2),var%2);
        }
        gridLayout->update();
    }else if(spectrumVec.size() > channelNum){
        for (int var = spectrumVec.size(); var > channelNum; --var) {
            Spectrum * widget = spectrumVec.back(); //得到最后一个
            widget->setVisible(false); //一定要隐藏,这样layout会自适应大小
            this->spectrumVec.pop_back(); //移除最后一个
            gridLayout->removeWidget(widget);
        }
        gridLayout->update();
    }
    scrollContents->setLayout(gridLayout);
    setLayout(hlayout);
//    QDockWidget *parent =(QDockWidget *) this->parentWidget();
//    parent->setWidget(this);
    adjustSize();
}

void JDynamicWidget::init(std::map<QString, std::shared_ptr<StaticSpectralEchoSignal> > mapData)
{
    setDataViewEcho(mapData);
    init(mapData.size());
}

void JDynamicWidget::resume()
{
    b_suspand = false;
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->resume();
    }
}

void JDynamicWidget::pause()
{
    b_suspand = true;
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
    if(b_suspand){
//        qDebug()<<"已经暂停"<<endl;
        return;
    }
    auto it = this->mapData.begin();
    while (it!=mapData.end()) {

        int index = bindSpectrum[it->first];
        QVector<double> data = it->second->PopEchoSignal();
        if(data.size()==0){ //血泪！！！！！！！
            return;
        }
        //测试异常判断，极其相关接口
        int num = count[it->first];
        spectrumVec[index]->refresh(data); //内部排除了size为0
        count[it->first] = num+1;
        oldData[it->first] = data;
        it++;
    }
}

void JDynamicWidget::start()
{

    b_suspand = false;
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->clearTimeAxis();
    }
    if(timer->isActive()){
        return;
    }
    this->timer->start();
}

void JDynamicWidget::stop()
{
    b_suspand = true;
    if(timer->isActive()){
        timer->stop();
    }
}

void JDynamicWidget::setDataViewEcho(std::map<QString, std::shared_ptr<StaticSpectralEchoSignal> > mapData)
{
    bindSpectrum.clear();
    this->mapData = mapData;
    auto it = mapData.begin();
    int index = 0;
    while (it!=mapData.end()) {
        count[it->first] = 0;
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

void JDynamicWidget::openTimeAxis()
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->openTimeAxis();
    }
}

void JDynamicWidget::closeTimeAxis()
{
    for (int var = 0; var < spectrumVec.size(); ++var) {
        spectrumVec[var]->closeTimeAxis();
    }
}

void JDynamicWidget::addDataTimeAxis(QVector<AnalysisResult> res)
{
    for(auto index : res){
        addDataTimeAxis(index);
    }
}

//需要预防多线程调用
void JDynamicWidget::addDataTimeAxis(AnalysisResult res)
{
    std::lock_guard<mutex> lk(mu);
    //通道错误
    if(bindSpectrum.count(res.getChannel())==0){
        qDebug()<<"信号反馈结果，的通道不存在"<<endl;
        return;
    }
    if(res.getErrorInf()==AnalysisResult::ABNORMAL){
        (*analysisResult)[res.getChannel()].append(res);
    }

    int index = bindSpectrum[res.getChannel()];
    spectrumVec[index]->addDataTimeAxis(res);
}

void JDynamicWidget::clearWindow()
{
    for(int i=0;i<spectrumVec.size();i++){
        spectrumVec[i]->clearWindow();
    }
}

JDynamicWidget::~JDynamicWidget()
{
    qDebug()<<"释放成功"<<endl;
    delete timer;
    delete scrollArea;
    delete hlayout;
    delete gridLayout;
    delete scrollContents;
    delete ui;
}

void JDynamicWidget::resetWindow(QDockWidget *parent, JDynamicWidget *child)
{
    parent->setWidget(child);
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
//    qDebug()<<"old size: w = "<<event->oldSize().width() <<" h = "<<event->oldSize().height()<<endl;
//    qDebug()<<"new size: w = "<<event->size().width() <<" h = "<<event->size().height()<<endl;
}

void JDynamicWidget::setAnalysisResult(const std::shared_ptr<std::map<QString, QVector<AnalysisResult> > > &value)
{
    analysisResult = value;
}



void JDynamicWidget::mouseClick()
{
    qDebug()<<this->parentWidget()->width()<<endl<<this->parentWidget()->height()<<endl;
}

//暂时无法实现，因为缺少存储的数据
void JDynamicWidget::jumpAndRefresh(const AnalysisResult &value)
{

}

void JDynamicWidget::jumpAndRefresh(const std::map<QString, QVector<double> > &value)
{
    auto it = value.begin();
    while(it!=value.end()){
        if (bindSpectrum.count(it->first)==0){
            qDebug()<<"通道不存在!!!"<<endl;
            continue;
        }
        int index = bindSpectrum[it->first];
        spectrumVec[index]->refresh(it->second);
        it++;
    }
}
