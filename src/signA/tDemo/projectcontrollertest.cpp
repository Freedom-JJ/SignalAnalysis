#include "projectcontrollertest.h"

#include "../tDemo/projectcontrollertest.h"


void testAddProject()
{
    long long projectId;
    Project* project = new Project();
    project->setProjectCreateTime("202432-23-5325");
    project->setProjectName("gegheieh");
    project->setProjectParameterId(2);//这个id是根据之前向数据库中添加采集参数类返回的id，也可以不赋值，之后更新项目时再更新这个参数
    project->setUserId(1); //这个是根据添加用户后返回的自增id，也可以在更新时对其进行修改

    ProjectController projectController = ProjectController();
    Result result = projectController.addProject(project,projectId);
    project->setId(projectId);
    qInfo()<<result.getCode()<<mstoqs(result.getMsg());
    qInfo()<<projectId;
}

void testGetAllChannels()
{
    //找到项目id为1下的所有通道
    vector<Channel*> channels;
    ProjectController projectController = ProjectController();
    Result result = projectController.getAllChannelsByProjectId(1,channels);
    qInfo()<<result.getCode()<<mstoqs(result.getMsg());
    qInfo()<<channels.size();
    for(Channel* channel:channels){
        qInfo()<<channel->getId();
        qInfo()<<mstoqs(channel->getChannelCode());
    }
}

void testGetCollectionparas()
{
    //找到项目id为1的采集参数
    Collectionparas* collectionpara;
    ProjectController projectController = ProjectController();
    Result result = projectController.getCollectionparasByProjectId(1,collectionpara);
    qInfo()<<result.getCode()<<mstoqs(result.getMsg());
    qInfo()<<collectionpara->getId();
    qInfo()<<collectionpara->getSampleFrequency();
}



void testUpdateProject()
{
    ProjectController projectController = ProjectController();
    //获取id为1的项目,同时测试根据项目id找到项目
    Project* project;
    Result result = projectController.getProjectByProjectId(1,project);
    if(result.getCode()==200){
        qInfo()<<mstoqs(result.getMsg());
        qInfo()<<project->getId()<<mstoqs(project->getProjectName());
    }
    //更新项目的名字
    project->setProjectName("higei");
    result = projectController.updateProject(project);
    if(result.getCode()==200){
        qInfo()<<mstoqs(result.getMsg());
    }

    //当项目不存在，还要更新时
    Project* mproject = new Project();
    mproject->setId(200);
    result = projectController.updateProject(mproject);
    qInfo()<<result.getCode()<<mstoqs(result.getMsg());

}



void testDeleteProject()
{
    ProjectController projectController = ProjectController();
    //既可以新建一个项目，指定id，然后就可以删除和这个id相同的项目，因为删除靠id进行索引，也可以添加待删除的项目，前提该项目的id已经更新
    //删除id为2的项目
    Project* project;
    Result result = projectController.getProjectByProjectId(2,project);
    if(result.getCode()==200){
        result = projectController.deleteProject(project);
        qInfo()<<result.getCode()<<mstoqs(result.getMsg());
    }
}

void testGetProjectsByUserId()
{
    //返回userId为4对应用户创建的所有项目
    ProjectController projectController = ProjectController();
    vector<Project*> projects;
    Result result = projectController.getProjectsByUserId(4,projects);
    qInfo()<<result.getCode()<<mstoqs(result.getMsg());
    qInfo()<<projects.size();
    if(projects.size()){
        qInfo()<<projects[0]->getId()<<mstoqs(projects[0]->getProjectName());
    }
}
