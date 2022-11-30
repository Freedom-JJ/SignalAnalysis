#include "productdialog.h"
#include "ui_productdialog.h"

ProductDialog::ProductDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductDialog)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("产品管理"));
    //设置表格的列数，必须要先设置，不然表格显示不出来

    ui->tableWidget->setColumnCount(2);
    //建立表头
    QStringList header;
    header <<"产品名" << "描述";
    ui->tableWidget->setHorizontalHeaderLabels(header);
    //设置表头显示模式,这里设置的是拉伸模式
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection); //设置单个选中

    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);       //设置选择行

    initData("");
}

ProductDialog::~ProductDialog()
{
    delete ui;
}

void ProductDialog::initData(QString name="")
{
    productVec.clear();
    ui->tableWidget->clearContents();
    productVec = productDao.seleAllByName(name);
    ui->tableWidget->setRowCount(productVec.size());
    for (int var = 0; var < productVec.size(); ++var) {
        ui->tableWidget->setItem(var,0,new QTableWidgetItem(productVec[var].getProduct_name()));
        ui->tableWidget->setItem(var,1,new QTableWidgetItem(productVec[var].getProduct_describe()));
    }
}

void ProductDialog::on_openBtn_clicked()
{
    int index =  ui->tableWidget->currentRow();
    if(index < 0){
        qDebug()<<"行有错误:"<<index<<endl;
        QMessageBox::information(this,"提示","选择具体产品");
        return;
    }
    qDebug()<<"当前行::"<<index;
    Product  item = productVec[index];
    auto window = new ProjectDetail(this);
    window->setValue(&item);
    window->exec();
}

void ProductDialog::on_changeBtn_clicked()
{
    int index =  ui->tableWidget->currentRow();
    if(index < 0){
        qDebug()<<"行有错误:"<<index<<endl;
        QMessageBox::information(this,"提示","选择具体产品");
        return;
    }
    qDebug()<<"当前行::"<<index;
    Product  item = productVec[index];
    auto window = new ProjectDetail(this);
    window->setValue(&item);
    window->exec();
    productDao.changeProduct(&item);
    initData("");
}

void ProductDialog::on_newBtn_clicked()
{
    Product *item=new Product;
    auto window = new ProjectDetail(this);
    window->setValue(item);
    window->exec();
    if(item->getProduct_name() == ""){
        QMessageBox::information(this,"提示","产品名不允许为空");
    }
    productDao.insertProduct(item);
    initData("");
}

void ProductDialog::on_searchBtn_clicked()
{
    productVec = productDao.seleAllByName(ui->searchEdit->text());
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(productVec.size());
    ui->tableWidget->setColumnCount(2);
    for (int var = 0; var < productVec.size(); ++var) {
        ui->tableWidget->setItem(var,0,new QTableWidgetItem(productVec[var].getProduct_name()));
        ui->tableWidget->setItem(var,1,new QTableWidgetItem(productVec[var].getProduct_describe()));
    }
}

void ProductDialog::on_deleteBtn_clicked()
{
    int index =  ui->tableWidget->currentRow();
    if(index < 0){
        qDebug()<<"行有错误:"<<index<<endl;
        QMessageBox::information(this,"提示","选择具体产品");
        return;
    }
    productDao.deleteProduct(&productVec[index]);
    initData("");
}
