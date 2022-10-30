#ifndef TBPRODUCT_H
#define TBPRODUCT_H

#include "tbproducttype.h"
class TbProduct
{
public:
    //TbProduct(int productId = 0, string productName = "", string productType = "");
    TbProduct(int productId = 0, string productName = "");
    TbProduct(int productId, string productName, TbProductType productType);
    ~TbProduct();

    bool operator == (TbProduct product);

    bool operator != (TbProduct product);

    int m_productId;
    string m_productName;
    TbProductType m_productType;

    int GetProductId();
    void SetProductId(int productId);
    string GetProductName();
    void SetProductName(string productName);


    void SetProductType(TbProductType productType);
    //string GetProductType();
    TbProductType & GetProductType();

};

#endif // TBPRODUCT_H
