#ifndef ALALYSISRESULTVIEW_H
#define ALALYSISRESULTVIEW_H

#include <QWidget>
#include "mainwindow.h"
namespace Ui {
class AlalysisResultView;
}

class AlalysisResultView : public QWidget
{
    Q_OBJECT

public:
    explicit AlalysisResultView(MainWindow * context,QWidget *parent = nullptr);

    ~AlalysisResultView();

    void initChannelData();
    void setAnalysisResult( std::shared_ptr<QVector<AnalysisResult>> value);

private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::AlalysisResultView *ui;
    std::shared_ptr<QVector<AnalysisResult>> analysisResult;
    QVector<QString> temp = {"飞附机齿轮轴外侧轴承磨损",
                             "加力泵齿轮轴磨损",
                             "加力泵齿轮中间轴磨损",
                             "加力泵齿轮中间轴轴承磨损",
                             "油压不足导致润滑度不够",
                             "辅助支板固定螺栓松动"};

    MainWindow *mw;
};

#endif // ALALYSISRESULTVIEW_H
