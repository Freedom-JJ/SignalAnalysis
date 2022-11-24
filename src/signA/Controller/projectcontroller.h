#ifndef PROJECTCONTROLLER_H
#define PROJECTCONTROLLER_H

#include "../Service/channelservice.h"
#include "../Service/collectionparaservice.h"
#include "../Service/projectservice.h"
#include "../Service/userservice.h"
#include "../Result/result.h"
#include "Tools/datautil.h"
class ProjectController
{
public:
    ProjectController();
    ~ProjectController();

    //加载默认项目
    Result loadDefaultProject(Project &value);


    //添加项目,注意添加项目后返回的项目id,projectId 需要更新到project对象中，否则project的id仍然为初始化时的-1
    Result addProject(Project* project,long long &projectId);

    //返回项目id对应项目下的所有通道的集合
    Result getAllChannelsByProjectId(long long projectId,vector<Channel*> &channels);

    //返回项目id对应的项目的采集参数类
    Result getCollectionparasByProjectId(long long projectId,Collectionparas* &collectionpara);

    //更新项目
    Result updateProject(Project* project);

    //删除项目
    Result deleteProject(Project* project);

    //返回所有已经建立的项目
    Result getAllProjects(vector<Project*> &projects);

    //根据项目id获取项目
    Result getProjectByProjectId(long long projectId,Project* &project);

    //根据用户id获取项目列表
    Result getProjectsByUserId(long long userId,vector<Project*> &projects);






private:
    ProjectService* projectService;
    ChannelService* channelService;
    CollectionparaService* collectionparaService;
};

#endif // PROJECTCONTROLLER_H
