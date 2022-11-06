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
    qInfo()<<"查询条件为"<<QString::fromStdString(id);
    string query_condition = "where id = '"+ id +"'";
    qInfo()<<"查询条件为"<<QString::fromStdString(query_condition);
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

string SumSignalDao::update(SumSignal *sumSignal)
{
    int affected_num = 0;
    if(!sumSignal){
        return "";//返回一个空字符串，代表更新信号的指针为空
    }
    QString sql;
    sql = "update sum_signal set startTime='%1' , endTime='%2', projectId='%3' where id = '%4'";
    sql = sql.arg(mstoqs(sumSignal->getStartTime())).arg(mstoqs(sumSignal->getEndTime())).arg(mstoqs(mlltos(sumSignal->getProjectId()))).arg(mstoqs(sumSignal->getId()));
    qInfo()<<"执行"<<sql;
    //判断是否更新
    global_pdsql->UpdateMysql(affected_num,mqstos(sql));
    if(affected_num==0){
        return "";
    }
    else{
        return sumSignal->getId();
    }
}

vector<SumSignalAndProjectNameVo> SumSignalDao::getAllSumSigWithProjectName()
{
    string sql = "select s.id , s.startTime , s.endTime , s.projectId , project.projectName from sum_signal as s left join project on projectId = project.id";
    vector< vector<string> > query_result;
    global_pdsql->SelectMysql(query_result , sql);

    vector<SumSignalAndProjectNameVo> sumSignals;
    for(vector<string> sumSignal_attributes:query_result){
        SumSignalAndProjectNameVo sumSignal(sumSignal_attributes);
        sumSignals.push_back(sumSignal);
    }
    return sumSignals;
}
