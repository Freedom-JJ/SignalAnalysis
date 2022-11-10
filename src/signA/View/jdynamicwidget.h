#ifndef JDYNAMICWIDGET_H
#define JDYNAMICWIDGET_H

#include <QWidget>
#include <QScrollArea>
#include <QGridLayout>
#include"spectrum.h"
#include"Signal/StaticSpectralEchoSignal.h"
#include"Utils/SignalFeature.h"
namespace Ui {
class JDynamicWidget;
}

class JDynamicWidget : public QWidget
{
    Q_OBJECT

public:
    explicit JDynamicWidget(QWidget *parent = nullptr);
    ~JDynamicWidget();

    void init( int channelNum = 4) ;
    void init(std::map<QString,std::shared_ptr<StaticSpectralEchoSignal>> mapData);

    /**
     * @brief 继续显示
     */
     void resume();
    /**
     * @brief 暂停
     */
     void pause() ;

    /**
     * @brief 隐藏series
     */
     void hide() ;
    /**
     * @brief 显示series
     */
     void show() ;

    /**
     * @brief 刷新接口
     */
     void refresh();

     void setMainWindowObject(MainWindow *vw);
     void start();
     void stop();
     void setDataViewEcho(std::map<QString,std::shared_ptr<StaticSpectralEchoSignal>> mapData) ;
     void setInterval(int mec) ;
     /**
      * @brief setYAxisRange 四个窗口的Y轴范围,未关闭自动缩放
      * @param start
      * @param end
      */
     void setYAxisRange(double start , double end);
     /**
      * @brief setY_isScale,设置Y轴是否动态收缩
      * @param scale
      */
     void setY_isScale(bool scale);
     /**
      * @brief 设置频谱范围
      * @param count为最大频谱，0为最小，那么就是总共count+1跟谱线
      */
     void setXAxisRange(int count);
     /**
      * @brief 设置缩放比率,rate表示当前最大值的倍数
      * @param rate
      */
     void openAutoYAxisRescalse(double);

     /**
      * @brief 设置是否显示统计值
      */
     void setIsShowStatistic(bool );





protected:
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);
    void resizeEvent(QResizeEvent *event);
private:
    Ui::JDynamicWidget *ui;
    QTimer *timer = nullptr;

    QScrollArea * scrollArea = nullptr;
    QHBoxLayout* hlayout = nullptr;
    QGridLayout *gridLayout = nullptr;
    QWidget * scrollContents = nullptr;
    QVector<Spectrum *> spectrumVec;
    std::map<QString,int> bindSpectrum;
    std::map<QString, std::shared_ptr<StaticSpectralEchoSignal> > mapData;
    SignalFeature * feature = SignalFeature::getInstance();


    double yStart,yEnd;
 signals:
    void clicked();
 public slots:
    void mouseClick();
};

#endif // JDYNAMICWIDGET_H
