#ifndef TBPRODUCTDAO_H
#define TBPRODUCTDAO_H
#include "mapper/pddatabase.h"
#include "entity/tbproduct.h"

class TbProductDao :
    public PDDatabase
{
public:

    TbProductDao(PDSQL *pdsql);
    TbProductDao(PDSQL *pdsql,const TbProductDao & product);

    ~TbProductDao();




    PDAttribute m_productId;
    PDAttribute m_productName;
    PDAttribute m_productType;

    void GetTableFieldValues(TbProduct &product);
    bool SelectObjectsByCondition(vector<TbProductDao> &selectedValueVector, string strSqlQueryWhere = "");
    bool SelectObjectsByCondition(vector<TbProductDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere = "");
    void SetTableFieldValues(TbProduct product);
};


#endif // TBPRODUCTDAO_H
