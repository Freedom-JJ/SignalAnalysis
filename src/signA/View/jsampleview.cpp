#include "jsampleview.h"

QT_CHARTS_USE_NAMESPACE

QVector<QVector<QPointF>> convertIntToQPointF(QVector<QVector<double>> data);

JSampleView::JSampleView(QWidget *parent) : QWidget(parent)
{
    this->mec = 1000;
    this->timer=new QTimer();
    initUI();
    init(parent);

}
void JSampleView::init(QWidget *parent){

    for (int index =0;index < 4; index++) {
        (*this->charts)[index] = new QChart();
        (*this->chartview)[index] = new QChartView(this->charts->at(index),parent);
        (*this->lineSeries)[index]=new QLineSeries();
        this->charts->at(index)->legend()->hide();
        this->charts->at(index)->addSeries(this->lineSeries->at(index));
        this->charts->at(index)->createDefaultAxes();
        this->charts->at(index)->axisX()->setRange(0,20000);
        this->charts->at(index)->axisY()->setRange(-10,10);
        this->chartview->at(index)->setRenderHint(QPainter::Antialiasing);
    }
    for (int var = 0; var < 20000; ++var) {
        this->lineSeries->at(0)->append(var,var%10);
        this->lineSeries->at(1)->append(var,var%5+5);
        this->lineSeries->at(2)->append(var,sin(var));
        this->lineSeries->at(3)->append(var,cos(var));
    }
    QGridLayout *layout = new QGridLayout(parent);
    layout->addWidget(this->chartview->at(0),0,0);
    layout->addWidget(this->chartview->at(1),0,1);
    layout->addWidget(this->chartview->at(2),1,0);
    layout->addWidget(this->chartview->at(3),1,1);
    parent->setLayout(layout);
}

void JSampleView::initUI(){
    connect(this->timer,&QTimer::timeout,this,&JSampleView::refresh);
}

void JSampleView::setDataViewEcho(JDataViewEcho *data){
    this->dataViewEcho = data;
}

void JSampleView::stopSample(){
    qDebug()<<"停止刷新"<<endl;
    this->timer->stop();
    this->hide();
}
/**
 * todo
 * @brief JSampleView::setNextShowData
 * @param data
 * @param size
 * @param flag
 */
void JSampleView::setNextShowData(QVector<QVector<double>> *data, int size,bool *flag){
    if (*flag != false)
        return;
    QVector<QLineSeries *> series;
    QVector<QVector<QPointF>> points =  convertIntToQPointF(*data);
    for (int var = 0; var < data->size(); ++var) {
        this->lineSeries->at(var)->replace(points[var]);
    }
    data->clear();
}

void JSampleView::setInterval(int mesc){
    this->mec = mesc;
}

void JSampleView::startSampleWithTimer(){
    if(this->timer->isActive()){
        qDebug()<<"定时器已经激活!!"<<endl;
        return;
    }
    qDebug()<<"定时器启动"<<endl;
    this->show();
    this->timer->setInterval(this->mec);
    this->timer->start();
}

void JSampleView::refresh(){
    qDebug()<<"demo refresh"<<endl;

    QVector<QVector<double>> *data =new QVector<QVector<double>>(4);
    map<QString, QVector<double>> res = this->dataViewEcho->getNextData();
    for (int code = 0 ; code < 4 ; code ++) {
        (*data)[code] = res[QString::number(code)];
    }
    bool * flag = new bool;
    *flag = false;
    setNextShowData(data,20000,flag);
    delete data;
}

void JSampleView::hide(){

    for (int var = 0; var < 4; ++var) {
        this->lineSeries->at(var)->hide();
    }
}

void JSampleView::show(){
    for (int var = 0; var < 4; ++var) {
        this->lineSeries->at(var)->show();
    }
}
void JSampleView::pause(){
    this->timer->stop();
}
void JSampleView::resume(){
    this->timer->start(this->mec);
}



/* 类外工具  */

QVector<QVector<QPointF>> convertIntToQPointF(QVector<QVector<double>> data){
    QVector<QVector<QPointF>> res;
    res.append(QVector<QPointF>());
    res.append(QVector<QPointF>());
    res.append(QVector<QPointF>());
    res.append(QVector<QPointF>());
    for(int i= 0 ; i < data.size();i++){
        for(int j =0;j<data[i].size();j++){
            res[i].append(QPointF(j,data[i][j]));
        }
    }
    return res;
}
