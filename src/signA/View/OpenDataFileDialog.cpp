#include "OpenDataFileDialog.h"
#include "ui_OpenDataFileDialog.h"

OpenDataFileDialog::OpenDataFileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenDataFileDialog)
{

    ui->setupUi(this);
    initTableViewData();
}

OpenDataFileDialog::~OpenDataFileDialog()
{
    delete ui;
}

void OpenDataFileDialog::initTableViewData()
{
    QVector<SumSignalAndProjectNameVo> res;
    Result ress =  controller.getAllSumSignalWithProjectName(res);
    QStandardItemModel  * model = new QStandardItemModel();
    model->setHorizontalHeaderLabels(QStringList()<<"ID"<<"开始时间"<<"结束数据"<<"项目名称");
    for (int var = 0; var < res.size(); ++var) {
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
    qDebug()<<"选择行"<<index.row()<<endl;
}
