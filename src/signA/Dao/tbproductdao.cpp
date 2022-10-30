#include "tbproductdao.h"


TbProductDao::TbProductDao(PDSQL *pdsql):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_product";
    m_key = &m_productId;
    SetVectorAndField("product_id", "int", m_productId);
    SetVectorAndField("product_name", "string", m_productName);
    SetVectorAndField("product_type", "int", m_productType);
}




TbProductDao::~TbProductDao()
{
}
TbProductDao::TbProductDao(PDSQL *pdsql,const TbProductDao & product):PDDatabase(pdsql)
{
    this->m_strTableName = "tb_product";
    m_key = &m_productId;
    SetVectorAndField("product_id", "int", m_productId);
    SetVectorAndField("product_name", "string", m_productName);
    SetVectorAndField("product_type", "int", m_productType);
    operator = (product);
}
/**
 * @brief TbProductDao::SelectObjectsByCondition 返回符合条件的记录，以TbProductDao的形式存储主键，其它字段应该都为空
 * @param selectedValueVector 以TbProductDao的形式存储主键
 * @param strSqlQueryWhere 查询条件
 * @return
 */
bool TbProductDao::SelectObjectsByCondition(vector<TbProductDao> &selectedValueVector, string strSqlQueryWhere){
     return SelectObjectsByCondition(selectedValueVector, 0, 0, strSqlQueryWhere);
}

 bool TbProductDao::SelectObjectsByCondition(vector<TbProductDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere){
     vector<string> tmpDetectedObjecIDs;
     TbProductDao product(pdsql);
     //GetKeyIdList 返回主键列表
     if (product.GetKeyIdList(tmpDetectedObjecIDs, strSqlQueryWhere, iStartNumber, iRecordCount))
     {
         //对于所有符合条件主键
         for (int iStart = 0; iStart < int(tmpDetectedObjecIDs.size()); iStart++)
         {
             product.m_productId.m_strValue = tmpDetectedObjecIDs[iStart];
             //再查询一遍，因为SelectObjectsByCondition肯定为空，肯定能够查询到,感觉没有意义
             if (product.SelectByKey())
             {
                 selectedValueVector.push_back(product);
             }
             else
             {
                 return false;
             }
         }
         return true;
     }
     //找不到符合条件的记录
     else
     {
         return false;
     }
}

 void TbProductDao::GetTableFieldValues(TbProduct &product){
     product.SetProductId(m_productId.GetInt());
     product.SetProductName(m_productName.m_strValue);
     product.GetProductType().SetId(m_productType.GetInt());
 }

 void TbProductDao::SetTableFieldValues(TbProduct product)
 {
     m_productId.SetValue(product.GetProductId());
     m_productName.SetValue(product.GetProductName());
     m_productType.SetValue(product.GetProductType().GetId());

 }
