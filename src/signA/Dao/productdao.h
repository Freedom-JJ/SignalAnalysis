#ifndef PRODUCTDAO_H
#define PRODUCTDAO_H
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QDebug>
#include<QMessageBox>
#include"Domain/product.h"
class ProductDao
{
public:
    ProductDao();

    void insertProductWithProject(long long projectId , long long productId);
    void insertProduct(Product *value);
    void changeProduct(Product *value);
    void deleteProduct(Product *value);
    QVector<Product> seleAllProduct();
    Product seleOneById(long long id);
    QVector<Product> seleAllByName(QString name);


};

#endif // PRODUCTDAO_H
