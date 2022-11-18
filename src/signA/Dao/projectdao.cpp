#include "projectdao.h"

ProjectDao::ProjectDao()
{

}

ProjectDao::~ProjectDao()
{

}

vector<Project *> ProjectDao::listProjects(string query_condition)
{
    vector< vector<string> > query_result;
    string query_sql = "select * from project "+query_condition;
    global_pdsql->SelectMysql(query_result,query_sql);
    vector<Project*> projects;
    for(vector<string> project_attributes:query_result){
        Project* project = new Project(project_attributes);
        projects.push_back(project);
    }
    return projects;
}

Project *ProjectDao::getProjectById(long long id)
{
    string query_condition = "where id = '"+ mlltos(id) +"'";
    vector<Project*> projects = listProjects(query_condition);
    if(projects.size()==0){
        return nullptr;
    }
    else{
        return projects[0];
    }

}

vector<Project *> ProjectDao::getProjectsByUserId(long long userId)
{
    string query_condition = "where userId = '"+ mlltos(userId) +"'";
    vector<Project*> projects = listProjects(query_condition);
    return projects;
}

int ProjectDao::insertProject(Project *project, bool insert_id)
{
    int id =0;
    if(!project){
        return -1;
    }
    QString sql;
    if(insert_id){
        sql = "insert into project(`id`,`projectName`,`projectCreateTime`,`projectUpdateTime`,`userId`,`projectParameterId`,`projectStatus`) values ('%1','%2','%3','%4','%5','%6','%7')";
        sql = sql.arg(mstoqs(mlltos(project->getId()))).arg(mstoqs(project->getProjectName())).arg(mstoqs(project->getProjectCreateTime())).arg(mstoqs(project->getProjectUpdateTime()))
                .arg(mstoqs(mlltos(project->getUserId()))).arg(mstoqs(mlltos(project->getProjectParameterId()))).arg(mstoqs(mitos(project->getProjectStatus())));
    }
    else{
        sql = "insert into project(`projectName`,`projectCreateTime`,`projectUpdateTime`,`userId`,`projectParameterId`,`projectStatus`) values ('%1','%2','%3','%4','%5','%6')";
        sql = sql.arg(mstoqs(project->getProjectName())).arg(mstoqs(project->getProjectCreateTime())).arg(mstoqs(project->getProjectUpdateTime()))
                .arg(mstoqs(mlltos(project->getUserId()))).arg(mstoqs(mlltos(project->getProjectParameterId()))).arg(mstoqs(mitos(project->getProjectStatus())));
    }
    qInfo()<<"插入项目记录"<<sql;
    global_pdsql->InsertMysql(id,mqstos(sql));
    return id;
}

int ProjectDao::updateProject(Project *project)
{
    int affected_num = 0;
    if(!project){
        return -1;
    }
    QString sql;
    sql = "update project set projectName = '%1', projectCreateTime='%2', projectUpdateTime = '%3', userId = '%4', projectParameterId = '%5', projectStatus = '%6' where id = '%7'";
    sql = sql.arg(mstoqs(project->getProjectName())).arg(mstoqs(project->getProjectCreateTime())).arg(mstoqs(project->getProjectUpdateTime()))
            .arg(mstoqs(mlltos(project->getUserId()))).arg(mstoqs(mlltos(project->getProjectParameterId()))).arg(mstoqs(mitos(project->getProjectStatus()))).arg(mstoqs(mlltos(project->getId())));

    global_pdsql->UpdateMysql(affected_num,mqstos(sql));
    if(affected_num==0){
        return 0;
    }
    else{
        return affected_num;
    }
}

int ProjectDao::deleteProjectById(long long projectId)
{
    string delete_sql = "delete from project where id = '"+mlltos(projectId)+"'";
    int delete_num = 0;
    global_pdsql->DeleteMysql(delete_num,delete_sql);
    qInfo()<<"删除项目记录"<<mstoqs(delete_sql);
    return delete_num;
}





