#ifndef JBASESAMPLEWINDOW_H
#define JBASESAMPLEWINDOW_H

#include <QWidget>
#include <QChart>


/**
 * @brief 该抽象类的目的是,打好四个窗口的模板
 */

QT_CHARTS_USE_NAMESPACE
class JBaseSampleWindow : public QWidget
{
    Q_OBJECT
public:
    explicit JBaseSampleWindow(QWidget *parent = nullptr);



private:
    void addCharts(QVector<QChart *> *charts);
signals:

};

#endif // JBASESAMPLEWINDOW_H
