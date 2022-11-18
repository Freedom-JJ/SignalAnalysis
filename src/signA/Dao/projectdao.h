#ifndef PROJECTDAO_H
#define PROJECTDAO_H

#include "../Domain/project.h"
#include "pdsqlinitialize.h"
#include <vector>


class ProjectDao
{
public:
    ProjectDao();
    ~ProjectDao();

    //返回所有项目集合
    vector<Project*> listProjects(string query_condition="");

    //根据项目id，返回指定项目
    Project* getProjectById(long long id);

    //根据用户id，找到该用户创建的所有项目
    vector<Project*> getProjectsByUserId(long long userId);

    //添加项目
    int insertProject(Project* project,bool insert_id = false);

    //更新项目
    int updateProject(Project* project);

    //删除项目
    int deleteProjectById(long long projectId);




};

#endif // PROJECTDAO_H
