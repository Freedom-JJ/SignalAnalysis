/*******************************
*   File:       projectdetail.h
*   Author:     江德鸿
*   Company:    哈尔滨理工大学
*   Time:       2022-11-29
*   eMail:      1714203542@qq.com
*   brief:      应该为产品细节
********************************/
#ifndef PROJECTDETAIL_H
#define PROJECTDETAIL_H

#include <QDialog>
#include <Domain/product.h>
namespace Ui {
class ProjectDetail;
}

class ProjectDetail : public QDialog
{
    Q_OBJECT

public:
    explicit ProjectDetail(QWidget *parent = nullptr);
    ~ProjectDetail();

    Product *getValue() const;
    void setValue(Product *value);

private slots:
    void on_okBtn_clicked();

private:
    Ui::ProjectDetail *ui;
    Product *value = nullptr;
};

#endif // PROJECTDETAIL_H
