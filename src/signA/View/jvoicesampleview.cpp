#include "jvoicesampleview.h"


JVoiceSampleView::JVoiceSampleView(QWidget* parent) : JBaseSampleWindow(parent)
{
    this -> timer = new QTimer();
    this->init(parent);
}

void JVoiceSampleView::setDataViewEcho(JDataViewEcho *data){
    this->data = data;
}
void JVoiceSampleView::refresh(){
    int range = 20000;

    QVector<QVector<QPointF>> oldPoints;
    for (int var = 0; var < 4; ++var) {
        oldPoints.append(this->lines->at(var)->pointsVector());
    }
    map<QString,QVector<double>> ndata =  this->data->getNextData();
    QVector<QVector<QPointF>> res = convertIntToQPointF(ndata);
    QVector<QVector<QPointF>> newVectors ;

    /**
        将满20000的旧值往前推移，不满的不动

    */
    if(oldPoints[0].size() < range)
        newVectors = oldPoints;
    else {
        qDebug()<<"执行else"<<endl;
        for (int var = 0; var < 4; ++var) {
            QVector<QPointF> newVector;
            for (int index = res[var].size(); index < range; ++index) {
                newVector.append(QPointF(index - res[var].size() , oldPoints[var][index].y()));
            }
            newVectors.append(newVector);
        }
    }

    //添加新值,at得到的值如果不是指针的话，会爆出const错误
    for (int var = 0; var < 4; ++var) {
        int currentSize = newVectors[var].size();
        for (int index = 0; index < res[var].size(); ++index) {
            newVectors[var].append(QPointF(index + currentSize , res[var][index].y()));
        }
    }

    for (int var = 0; var < 4; ++var) {
        this->lines->at(var)->replace(newVectors[var]);
    }
}
void JVoiceSampleView::init(QWidget *parent){
    for (int var = 0; var < 4; ++var) {
        (*this->charts)[var] = new QChart();
        (*this->lines)[var] = new QLineSeries(parent);
        this->charts->at(var)->addSeries(this->lines->at(var));
        this->charts->at(var)->legend()->hide();
        this->charts->at(var)->createDefaultAxes();
        this->charts->at(var)->axisX()->setRange(0,20000);
        this->charts->at(var)->axisY()->setRange(-1,1);
    }
//    for (int i = 0; i < 4; ++i) {
//        for (int j = 0; j < 20000; ++j) {
//            this->lines->at(i)->append(j, sin(0.0001*j));

//        }
//    }
    //调用父类方法
    this->JBaseSampleWindow::addCharts(this->charts);

    connect(this->timer,&QTimer::timeout,this,&JVoiceSampleView::refresh);
    this->setInterval(50);
    this->start();
}
void JVoiceSampleView::show(){
    this->timer->start();

    for (int var = 0; var < 4; ++var) {
        this->lines->at(var)->show();
    }
}
void JVoiceSampleView::start(){
    this->timer->start();
}
void JVoiceSampleView::stop(){
    this->hide();
}
void JVoiceSampleView::hide(){
    this->timer->stop();
    for (int var = 0; var < 4; ++var) {
        this->lines->at(var)->hide();
    }
}
void JVoiceSampleView::pause(){
    this->timer->stop();
}
void JVoiceSampleView::resume(){
    this->timer->start();
}
void JVoiceSampleView::setInterval(int mec){
    this->timer->setInterval(mec);
}
/**
 * @brief convertIntToQPointF,类外工具
 * @param data
 * @return
 */
QVector<QVector<QPointF>> JVoiceSampleView::convertIntToQPointF(map<QString,QVector<double>> &data){
    QVector<QVector<QPointF>> res;
    res.append(QVector<QPointF>());
    res.append(QVector<QPointF>());
    res.append(QVector<QPointF>());
    res.append(QVector<QPointF>());

    map<QString,QVector<double>>::iterator iter = data.begin();

    for (int index = 0; iter != data.end(); iter++,index++) {
        for (int j = 0; j < iter->second.size(); ++j) {
            res[index].append(QPointF(this->currentAxisX+j,(iter->second)[j]));
        }
    }
    return res;
}
