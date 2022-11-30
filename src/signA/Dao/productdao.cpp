#include "productdao.h"

ProductDao::ProductDao()
{
#if(0)
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    QStringList list = QSqlDatabase::drivers(); //获取到QT中所支持的数据库驱动类型
    qDebug() << list;  //输出所支持的数据库驱动类型
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setDatabaseName("aricraft_db");
    db.setPassword("root");
    db.setPort(3306);
#endif
}

void ProductDao::insertProductWithProject(long long projectId, long long productId)
{
    QString sql = QString("insert into productwithproject(productId,projectId) values('%1','%2');").arg(QString::number(productId),
                                                                                                        QString::number(projectId));

    QSqlQuery query;
    if(query.exec(sql)){
        qDebug()<<"productwithproject 插入成功"<<endl;

    }else{
        qDebug()<<"productwithproject 插入失败"<<endl;
    }
}

void ProductDao::insertProduct(Product *value)
{
    if (value == nullptr){
        qDebug()<<"插入失败，空指针"<<endl;
        return;
    }

    QString sql = QString("insert into product(product_name,product_describe) values('%1','%2');").arg(value->getProduct_name(),value->getProduct_describe());
    QSqlQuery query;
    if(query.exec(sql)){
        qDebug()<<"product 插入成功"<<endl;
        QMessageBox::information(nullptr,"提示","插入成功");
    }else{
        qDebug()<<"product 插入失败"<<endl;
        QMessageBox::information(nullptr,"提示","插入失败");
    }
}

void ProductDao::changeProduct(Product *value)
{
    if (value == nullptr){
        qDebug()<<"修改失败，空指针"<<endl;
        return;
    }

    QString sql = QString("update product set product_name = '%1',product_describe='%2' where product_id='%3';").arg(value->getProduct_name(),
                                                                                                                     value->getProduct_describe(),
                                                                                                                     QString::number(value->getProduct_id()));
    QSqlQuery query;
    if(query.exec(sql)){
        qDebug()<<"product 修改成功"<<endl;
        QMessageBox::information(nullptr,"提示","修改成功");
    }else{
        qDebug()<<"product 修改失败"<<endl;
        QMessageBox::information(nullptr,"提示","修改失败");
    }
}

void ProductDao::deleteProduct(Product *value)
{
    if (value == nullptr){
        qDebug()<<"插入失败，空指针"<<endl;
        return;
    }
    QString sql = QString("delete from product   where product_id='%1';").arg(value->getProduct_id());
    QSqlQuery query;
    if(query.exec(sql)){
        QMessageBox::information(nullptr,"提示","删除成功");
    }else{
        QMessageBox::information(nullptr,"提示","删除失败");
    }
}

QVector<Product> ProductDao::seleAllProduct()
{
    QVector<Product> res;

    QString sql = "select product_id,product_name,product_describe from product";
    QSqlQuery query;
    query.exec(sql);
    while(query.next()){
        Product t;
        t.setProduct_id(query.value("product_id").toInt());
        t.setProduct_name(query.value("product_name").toString());
        t.setProduct_describe(query.value("product_describe").toString());
        res.append(t);
    }
    return res;
}

Product ProductDao::seleOneById(long long id)
{
    QString sql = QString("select product_id,product_name,product_describe from product where product_id='%1';").arg(QString::number(id));

    QSqlQuery query;
    query.next();
    Product t;
    t.setProduct_id(query.value("product_id").toInt());
    t.setProduct_name(query.value("product_name").toString());
    t.setProduct_describe(query.value("product_describe").toString());
    return t;
}

QVector<Product> ProductDao::seleAllByName(QString name)
{
    QSqlQuery query;
     QString sql = QString("select product_id,product_name,product_describe from product where product_name like '%%1%';").arg(name);
    qDebug()<<sql<<endl;
     QVector<Product> res;
     query.exec(sql);
     while(query.next()){
         Product t;
         t.setProduct_id(query.value("product_id").toInt());
         t.setProduct_name(query.value("product_name").toString());
         t.setProduct_describe(query.value("product_describe").toString());
         res.append(t);
     }
     return res;
}
