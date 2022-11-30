#ifndef PRODUCT_H
#define PRODUCT_H

#include<QString>
class Product
{
public:
    Product();

    long long getProduct_id() const;
    void setProduct_id(long long value);

    QString getProduct_name() const;
    void setProduct_name(const QString &value);

    QString getProduct_describe() const;
    void setProduct_describe(const QString &value);

private:
    long long product_id;
    QString product_name;
    QString product_describe;
};

#endif // PRODUCT_H
