#ifndef JBASESAMPLEWINDOW_H
#define JBASESAMPLEWINDOW_H

#include <QWidget>
#include <QChart>
#include <QChartView>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDebug>
#include <QTimer>
/**
 * @brief 该抽象类的目的是,打好四个窗口的模板,不做任何槽和信号连接
 */

QT_CHARTS_USE_NAMESPACE
class JBaseSampleWindow : public QWidget
{
    Q_OBJECT
public:
    explicit JBaseSampleWindow(QWidget *parent = nullptr);
    /**
     * @brief 添加charts进去，charts需要用的series需要在外部实现
     * @param charts
     */
    void addCharts(QVector<QChart *> *charts);
    virtual void init(QWidget * parent) = 0;

    /**
     * @brief 继续显示
     */
    virtual void resume() = 0;
    /**
     * @brief 暂停
     */
    virtual void pause() = 0;

    /**
     * @brief 隐藏series
     */
    virtual void hide() = 0;
    /**
     * @brief 显示series
     */
    virtual void show() = 0;

    /**
     * @brief 刷新接口
     */
    virtual void refresh() = 0;


protected:

private:

public:
    QVector<QChartView *> *chartView = new QVector<QChartView *>(4) ;


signals:

};

#endif // JBASESAMPLEWINDOW_H
