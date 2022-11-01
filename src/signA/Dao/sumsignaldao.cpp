#include "sumsignaldao.h"

SumSignalDao::SumSignalDao()
{

}

vector<SumSignal*> SumSignalDao::listSumSignals(string query_condition)
{
    vector< vector<string> > query_result;
    string query_sql = "select * from sum_signal "+query_condition;
    global_pdsql->SelectMysql(query_result,query_sql);
    vector<SumSignal*> sumSignals;
    for(vector<string> sumSignal_attributes:query_result){
        SumSignal* sumSignal = new SumSignal(sumSignal_attributes);
        sumSignals.push_back(sumSignal);
    }
    return sumSignals;
}

SumSignal *SumSignalDao::getSumSignalById(string id)
{
    string query_condition = "where id = '"+ id +"'";
    vector<SumSignal*> sumSignals = listSumSignals(query_condition);
    if(sumSignals.size()==0){
        return nullptr;
    }
    else{
        return sumSignals[0];
    }
}

vector<SumSignal *> SumSignalDao::getSumSignalsByProjectId(long long projectId)
{
    string query_condition = "where projectId = '"+ mlltos(projectId) +"'"+" order by startTime desc";
    vector<SumSignal*> sumSignals = listSumSignals(query_condition);
    return sumSignals;
}

string SumSignalDao::insert(SumSignal *sumSignal)
{
    int id = 0;
    if(!sumSignal){
        return "";//返回一个空字符串，表示插入的信号id为空指针
    }
    QString sql;
    sql = "insert into sum_signal values ('%1', '%2', '%3', '%4')";
    sql = sql.arg(mstoqs(sumSignal->getId())).arg(mstoqs(sumSignal->getStartTime()))
            .arg(mstoqs(sumSignal->getEndTime())).arg(mstoqs(mlltos(sumSignal->getProjectId())));
    qInfo()<<"执行"<<sql;
    //这里传入的id，返回为0，因为主键为string
    global_pdsql->InsertMysql(id,mqstos(sql));
    return sumSignal->getId();
}
