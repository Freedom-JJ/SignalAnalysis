#include "OpenDataFileDialog.h"
#include "ui_OpenDataFileDialog.h"

OpenDataFileDialog::OpenDataFileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenDataFileDialog)
{

    ui->setupUi(this);

}

OpenDataFileDialog::~OpenDataFileDialog()
{
    delete ui;
}

void OpenDataFileDialog::on_tableView_pressed(const QModelIndex &index)
{
    ui->tableView->selectRow(index.row());
}
