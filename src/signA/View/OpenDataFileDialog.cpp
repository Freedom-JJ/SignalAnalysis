#include "OpenDataFileDialog.h"
#include "ui_OpenDataFileDialog.h"

OpenDataFileDialog::OpenDataFileDialog(MainWindow *mv,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenDataFileDialog)
{
    this->mv = mv;
    ui->setupUi(this);
    initTableViewData();
}

void OpenDataFileDialog::setMainWindow(MainWindow *mw)
{
    this->mv = mv;
}

OpenDataFileDialog::~OpenDataFileDialog()
{
    delete ui;
}

void OpenDataFileDialog::initTableViewData()
{

    Result ress =  controller.getAllSumSignalWithProjectName(this->res);
    QStandardItemModel  * model = new QStandardItemModel();
    model->setHorizontalHeaderLabels(QStringList()<<"ID"<<"开始时间"<<"结束数据"<<"项目名称");
    for (int var = 0; var < this->res.size(); ++var) {
//        QStandardItem item;
        QList<QStandardItem *> list;
        list.append(new QStandardItem(QString::fromStdString(res[var].getId())));
        list.append(new QStandardItem(QString::fromStdString(res[var].getStartTime())));
        list.append(new QStandardItem(QString::fromStdString(res[var].getEndTime())));
        list.append(new QStandardItem(QString::fromStdString(res[var].getProjectName())));
//        item.appendRows(list);
        model->appendRow(list);
    }
    ui->tableView->setModel(model);
}


void OpenDataFileDialog::on_tableView_pressed(const QModelIndex &index)
{
    ui->tableView->selectRow(index.row());
}

void OpenDataFileDialog::on_tableView_clicked(const QModelIndex &index)
{
    ui->tableView->selectRow(index.row());
    this->index = index.row();
    qDebug()<<"选择行"<<index.row()<<endl;
}
/**
 * @brief 大家数据文件
 */
void OpenDataFileDialog::on_pushButtonOpen_clicked()
{

    if (this->index < 0){
        QMessageBox::warning(this,"警告","请选择某一个数据");
        return;
    }
    vector<SingleSignal *> singels;
    Result ss = controller.findSingleSignalsBySumSignalId(res[index].getId(),singels);
    if(ss.getCode() == 206){
        qDebug()<<"子信号查询为空"<<endl;
    }else if(ss.getCode() == 200){
        qDebug()<<"查询成功"<<endl;
    }
    for (int var = 0; var < singels.size(); ++var) {
        QString code = QString::number(singels[var]->getChannelId());
        mv->theApp->dataUrl[code] =QString::fromStdString(singels[var]->getDataUrl());

    }
    mv->theApp->playBackDataState = mv->theApp->PlayBackDataState::EXIST;
    close();


}
