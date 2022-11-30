#include "product.h"

Product::Product()
{

}

long long Product::getProduct_id() const
{
    return product_id;
}

void Product::setProduct_id(long long value)
{
    product_id = value;
}

QString Product::getProduct_name() const
{
    return product_name;
}

void Product::setProduct_name(const QString &value)
{
    product_name = value;
}

QString Product::getProduct_describe() const
{
    return product_describe;
}

void Product::setProduct_describe(const QString &value)
{
    product_describe = value;
}
