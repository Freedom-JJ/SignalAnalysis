#include "projectdetail.h"
#include "ui_projectdetail.h"

ProjectDetail::ProjectDetail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectDetail)
{
    ui->setupUi(this);
    ui->pushButton->setVisible(false);
    ui->pushButton_3->setVisible(false);
}

ProjectDetail::~ProjectDetail()
{
    delete ui;
}

void ProjectDetail::on_okBtn_clicked()
{
    value->setProduct_name(ui->nameEdit->text());
    value->setProduct_describe(ui->detailEdit->toPlainText());
    accept();
}

Product *ProjectDetail::getValue() const
{
    return value;
}

void ProjectDetail::setValue(Product *value)
{

    this->value = value;
    ui->nameEdit->setText(value->getProduct_name());
    ui->detailEdit->setText(value->getProduct_describe());
}
