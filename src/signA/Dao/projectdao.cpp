#include "projectdao.h"

ProjectDao::ProjectDao()
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




