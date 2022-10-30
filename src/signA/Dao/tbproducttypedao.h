#ifndef TBPRODUCTTYPEDAO_H
#define TBPRODUCTTYPEDAO_H

#include "mapper/pddatabase.h"
#include "entity/tbproducttype.h"

class TbProductTypeDao :
    public PDDatabase
{
public:

    TbProductTypeDao(PDSQL *pdsql);
    TbProductTypeDao(PDSQL *pdsql,const TbProductTypeDao & productType);

    ~TbProductTypeDao();




    PDAttribute m_Id;
    PDAttribute m_typeName;


    void GetTableFieldValues(TbProductType &productType);
    bool SelectObjectsByCondition(vector<TbProductTypeDao> &selectedValueVector, string strSqlQueryWhere = "");
    bool SelectObjectsByCondition(vector<TbProductTypeDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere = "");
    void SetTableFieldValues(TbProductType productType);
};

#endif // TBPRODUCTTYPEDAO_H
