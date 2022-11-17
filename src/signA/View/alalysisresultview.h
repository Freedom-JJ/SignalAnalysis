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
    void setAnalysisResult( std::shared_ptr<std::map<QString, QVector<AnalysisResult> > > value);

private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::AlalysisResultView *ui;
    std::shared_ptr<std::map<QString,QVector<AnalysisResult>>> analysisResult;
    MainWindow *mw;
};

#endif // ALALYSISRESULTVIEW_H
