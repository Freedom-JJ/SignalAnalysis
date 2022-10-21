#include "productservice.h"
#include <QString>
ProductService::ProductService(PDSQL* pdsql):m_productDao(pdsql)
{

}


ProductService::~ProductService()
{
}
/**
 * @brief ProductService::GetAllProductBySearchCondition
 * @param searchProduct
 * @param productVec
 * @return
 */
bool ProductService::GetAllProductBySearchCondition(TbProduct searchProduct, vector<TbProduct> & productVec){
    string strSearchCondition = "1=1 ";
    //说明产品的id已经赋值过了，按照product_id进行查找
    if (searchProduct.GetProductId() != 0){
        int i =searchProduct.GetProductId();
        strSearchCondition += "and product_id = "+std::to_string(i);

        //strSearchCondition += std::to_string(searchProduct.GetProductId());
    }
    else{
        //如果产品的id没有赋值过
        if (searchProduct.GetProductName() != "")
                strSearchCondition += "and product_name like '%" + searchProduct.GetProductName()+"%'";
//		if (searchProduct.GetProductType() != "")
        if (searchProduct.GetProductType().GetId() != 0)
            strSearchCondition += "and product_type like '%" + searchProduct.GetProductType().GetTypeName() + "%'";
    }
    vector<TbProductDao>  productDaoVec;
    //是否找到符合条件的产品，只会返回product_id，其它都为空
    qDebug()<<QString::fromStdString(strSearchCondition);
    bool isSuccess = m_productDao.SelectObjectsByCondition(productDaoVec, strSearchCondition);
    if (isSuccess){
        for (auto productDao : productDaoVec){
            TbProduct product;
            productDao.GetTableFieldValues(product);
            productVec.push_back(product);
        }
    }
    return isSuccess;
}


bool ProductService::DeletProductByID(TbProduct product)
{

    m_productDao.SetTableFieldValues(product);
    bool isSuccess = m_productDao.DeleteByKey();
    return isSuccess;
}
bool ProductService::GetProductByID(TbProduct &product){
    m_productDao.m_productId.SetValue(product.GetProductId());
    bool isSuccess = m_productDao.SelectByKey();
    if (isSuccess){
        m_productDao.GetTableFieldValues(product);
    }
    return isSuccess;
}
bool ProductService::UpdateProduct(TbProduct product)
{
    m_productDao.SetTableFieldValues(product);
    bool isSuccess = m_productDao.UpdateByKey();
    return isSuccess;
}

bool ProductService::AddProduct(TbProduct product)
{

    m_productDao.SetTableFieldValues(product);
    bool isSuccess = m_productDao.Insert();
    return isSuccess;

}

bool ProductService::GetById(int  productId, TbProduct &product){
    m_productDao.m_key->SetValue(productId);
    bool isSuccess = m_productDao.SelectByKey();
    m_productDao.GetTableFieldValues(product);
    return isSuccess;
}
