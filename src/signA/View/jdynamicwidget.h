#ifndef JDYNAMICWIDGET_H
#define JDYNAMICWIDGET_H

#include <QWidget>
#include <QScrollArea>
#include <QGridLayout>
#include"spectrum.h"
#include"Signal/StaticSpectralEchoSignal.h"
#include"Utils/SignalFeature.h"
#include "interface/itimeaxis.h"
#include "interface/isignaljumpable.h"
#include "httputil/httplib.h"
#include "Tools/stringutils.h"
namespace Ui {
class JDynamicWidget;
}

class JDynamicWidget : public QWidget ,public ITimeAxis,public ISignalJumpAble
{
    Q_OBJECT

public:
    explicit JDynamicWidget(QWidget *parent = nullptr);
    ~JDynamicWidget();

    /**
     * @brief resetWindow,窗口可能发生变化时调用
     * @param parent
     * @param child
     */
    void resetWindow(QDockWidget *parent , JDynamicWidget * child);
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

      void openTimeAxis() override;
     void closeTimeAxis() override;
     /**
      * @brief 往时间轴添加数据,供外部调用，已经废弃
      * @param res
      */
     void addDataTimeAxis(QVector<AnalysisResult> res) override;
     void addDataTimeAxis(AnalysisResult) override;

     void clearWindow();
     void setTimeAxis(ITimeAxis *axis);
protected:
    void mousePressEvent(QMouseEvent *ev) override;
    void mouseReleaseEvent(QMouseEvent *ev) override;
    void resizeEvent(QResizeEvent *event) override;
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

    //存放异常数据
    std::shared_ptr<std::map<QString,QVector<AnalysisResult>>> analysisResult;
    std::map<QString,int> count;
    std::map<QString,QVector<double>> oldData;
    mutex mu;
    int number= 0;

    //一些控制条件
    bool b_suspand = false;

    httplib::Client *cli = new httplib::Client("http://127.0.0.1:8000");
    //单时间轴，多时间轴已经废弃
    ITimeAxis *singleAxis;


 signals:
    void clicked();
 public slots:
    void mouseClick();

    // ISignalJumpAble interface
public:
    void jumpAndRefresh(const AnalysisResult &) override;
    void jumpAndRefresh(const std::map<QString, QVector<double> > &) override;

    void setAnalysisResult(const std::shared_ptr<std::map<QString, QVector<AnalysisResult> > > &value);
};

#endif // JDYNAMICWIDGET_H
