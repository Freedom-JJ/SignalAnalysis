#ifndef TBDICTIONARYDAO_H
#define TBDICTIONARYDAO_H
#include "mapper/pddatabase.h"
#include "entity/tbdictionary.h"

class TbDictionaryDao :
    public PDDatabase
{
public:
    /**
     * @brief TbDictionaryDao 初始化
     * @param pdsql
     */
    TbDictionaryDao(PDSQL* pdsql);
    /**
     * @brief TbDictionaryDao 复制dictionary中的参数进行初始化
     * @param pdsql
     * @param dictionary
     */
    TbDictionaryDao(PDSQL* pdsql,const TbDictionaryDao  & dictionary);
    ~TbDictionaryDao();
public:

    PDAttribute m_dictId;

    PDAttribute m_dictName;
    PDAttribute m_dictValue;

    /**********************************************************************
    功能描述：根据TbDictionaryDao的属性值，封装参数给TbDictionary
    输入参数：
    输出参数：
    返 回 值：
    其它说明：
    修改日期 版本号 修改人 修改内容------------------------------------------------------------
    ***********************************************************************/
    void GetTableFieldValues(TbDictionary &dictionary);
    /**********************************************************************
    功能描述：根据TbDictionary的属性值，封装参数给TbDictionaryDao
    输入参数：
    输出参数：
    返 回 值：
    其它说明：
    ----------
    修改日期 版本号 修改人 修改内容
    ----------------------------------------------------------------------
    ***********************************************************************/
    void SetTableFieldValues(TbDictionary dictionary);
    /**********************************************************************
    功能描述：根据主键查询字典数据
    输入参数：
    输出参数：
    返 回 值：
    其它说明：
    修改日期 版本号 修改人 修改内容
    ----------------------------------------------------------------------
    ***********************************************************************/
    void SelectByObject(TbDictionary &dictionary);

    /**********************************************************************
    功能描述：根据查詢條件查询
    输入参数：
    输出参数：
    返 回 值：
    其它说明：
    修改日期 版本号 修改人 修改内容
    ----------------------------------------------------------------------
    ***********************************************************************/
    bool SelectObjectsByCondition(vector<TbDictionaryDao> &selectedValueVector, string strSqlQueryWhere = "");
    bool SelectObjectsByCondition(vector<TbDictionaryDao> &selectedValueVector, int iStartNumber, int iRecordCount, string strSqlQueryWhere = "");
};


#endif // TBDICTIONARYDAO_H
