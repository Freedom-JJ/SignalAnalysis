#include "alalysisresultview.h"
#include "ui_alalysisresultview.h"


AlalysisResultView::AlalysisResultView(MainWindow * context, QWidget *parent):
    QWidget(parent),
    ui(new Ui::AlalysisResultView)
{
    ui->setupUi(this);
    this->mw= context;
    analysisResult = context->theApp->getAnalysisResultNoChannel();
    setWindowTitle("异常结果显示");
    initChannelData();
}

AlalysisResultView::~AlalysisResultView()
{
    delete ui;
}

void AlalysisResultView::initChannelData()
{
    //闪退原因是，这个item改变之后触发了下面的槽函数
    std::vector<QString> channelCode = mw->theApp->m_vchannelCodes;
    ui->comboBox->addItem("所有错误信息");
}

void AlalysisResultView::on_comboBox_currentIndexChanged(int index)
{
//    QString code = ui->comboBox->currentText();
//    //触发槽函数时，如果通过set方法赋值analysisResult还是一个null指针
//    if(analysisResult->count(code)==0){
//        return;
//    }
    QVector<AnalysisResult>  res =*(mw->theApp->getAnalysisResultNoChannel().get());
    QStringList lables;
    lables<<"错误信息"<<"故障发生时间";
    ui->tableWidget->setSizePolicy(QSizePolicy::Ignored,QSizePolicy::Ignored);
    ui->tableWidget->setRowCount(res.size());
    ui->tableWidget->setColumnCount(2);
    ui->tableWidget->setHorizontalHeaderLabels(lables);

    for (int i = 0; i < res.size(); ++i) {
//        QTableWidgetItem *item1 = new QTableWidgetItem(res[i].getChannel());
//        QTableWidgetItem *item2 = new QTableWidgetItem(res[i].getId());
//        QTableWidgetItem *item3 = new QTableWidgetItem(res[i].getErrorInf());
        QTableWidgetItem *item3 = new QTableWidgetItem(res[i].strLevel());
        QTableWidgetItem *item4 = new QTableWidgetItem(res[i].getStart());
//        QTableWidgetItem *item5 = new QTableWidgetItem(res[i].getEnd());

//        ui->tableWidget->setItem(i,0,item1);
//        ui->tableWidget->setItem(i,1,item2);
        ui->tableWidget->setItem(i,0,item3);
        ui->tableWidget->setItem(i,1,item4);
//        ui->tableWidget->setItem(i,4,item5);
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

void AlalysisResultView::setAnalysisResult( std::shared_ptr<QVector<AnalysisResult>> value)
{
    analysisResult = value;
}
