#ifndef PROJECTSERVICE_H
#define PROJECTSERVICE_H
#include "../Dao/projectdao.h"

class ProjectService
{
public:
    ProjectService();
    ~ProjectService();

    //返回所有项目集合
    vector<Project*> listProjects();

    //根据项目id，返回指定项目
    Project* getProjectById(long long id);

    //根据用户id，找到该用户创建的所有项目
    vector<Project*> getProjectsByUserId(long long userId);

    //添加项目
    int insertProject(Project* project);

    //更新项目
    int updateProject(Project* project);

    //删除项目
    int deleteProjectById(long long projectId);



private:
    ProjectDao* projectDao;

};

#endif // PROJECTSERVICE_H
