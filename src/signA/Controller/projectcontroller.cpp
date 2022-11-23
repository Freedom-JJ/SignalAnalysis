#include "projectcontroller.h"

ProjectController::ProjectController()
{
    this->channelService = new ChannelService();
    this->collectionparaService = new CollectionparaService();
    this->projectService = new ProjectService();
}

ProjectController::~ProjectController()
{
    delete this->channelService;
    delete this->collectionparaService;
    delete this->projectService;
}

Result ProjectController::loadDefaultProject(Project &value)
{

    auto res = projectService->listProjects();
    std::sort(res.begin(),res.end(),[](Project *a ,Project *b){return a->getProjectCreateTime()>b->getProjectCreateTime();});
    if (res.size()>0) {
        value=*res[0];
        return Result(200,"加载成功");
    }
    return Result(404,"没有项目");
}

Result ProjectController::addProject(Project *project, long long &projectId)
{
    if(!project){
        return Result(205,"传入的project为空");
    }
    //判断添加的项目是否已经存在，如果project的id没有赋值，是一定不存在的
    qInfo()<<"查找待添加的项目是否已经存在";
    Project* qproject = projectService->getProjectById(projectId);
    if(qproject){
        return Result(204,"该项目已经存在");
    }
    project->setProjectCreateTime(DataUtil::GetCurrentCStringTime());
    qInfo()<<"执行添加项目";
    projectId = projectService->insertProject(project);
    if(projectId == 0){
        return Result(203,"添加项目失败");
    }
    else{
        return Result(200,"添加项目成功");
    }

}

Result ProjectController::getAllChannelsByProjectId(long long projectId, vector<Channel *> &channels)
{
    //判断该项目id对应的项目是否存在于数据库中
    Project* project = projectService->getProjectById(projectId);
    if(!project){
        return Result(205,"传入的项目id在数据库中不存在");
    }

    //查找该项目id对应的所有通道
    channels = channelService->getChannelsByProjectId(projectId);
    if(channels.size()==0){
        return Result(201,"该项目id对应的项目没有通道保存记录");
    }
    else{
        return Result(200,"已经返回该项目id对应的项目下的所有通道");
    }
}

Result ProjectController::getCollectionparasByProjectId(long long projectId, Collectionparas *&collectionpara)
{
    //判断该项目id对应的项目是否存在于数据库中
    Project* project = projectService->getProjectById(projectId);
    if(!project){
        return Result(205,"传入的项目id在数据库中不存在");
    }

    //查找该项目id对应的采集参数类
    collectionpara = collectionparaService->getCollectionparasById(project->getProjectParameterId());
    if(!collectionpara){
        return Result(201,"该项目id对应的采集参数类并没有保存到数据库中");
    }
    else{
        return Result(200,"已经返回该项目id对应的项目下的采集参数类");
    }
}

Result ProjectController::updateProject(Project *project)
{
    if(!project){
        return Result(205,"传入的project为空");
    }
    if(project->getId()==-1){
        return Result(202,"该项目的id仍未默认值-1，没有更新");
    }
    //判断该项目id对应的项目是否存在于数据库中
    Project* qproject = projectService->getProjectById(project->getId());
    if(!qproject){
        return Result(205,"传入的项目id在数据库中不存在");
    }
    int affected_num = projectService->updateProject(project);
    if(affected_num == 0){
        return Result(203,"该项目参数不需要更新");
    }
    else{
        return Result(200,"该项目参数更新成功");
    }
}

Result ProjectController::deleteProject(Project *project)
{
    if(!project){
        return Result(205,"传入的project为空");
    }
    if(project->getId()==-1){
        return Result(202,"该项目的id仍未默认值-1，没有更新");
    }
    //判断该项目id对应的项目是否存在于数据库中
    Project* qproject = projectService->getProjectById(project->getId());
    if(!qproject){
        return Result(205,"传入的项目id在数据库中不存在");
    }

    int delete_num = projectService->deleteProjectById(project->getId());
    if(delete_num==0){
        return Result(203,"删除项目失败");
    }
    else{
        return Result(200,"删除项目成功");
    }


}

Result ProjectController::getAllProjects(vector<Project *> &projects)
{

    projects = projectService->listProjects();
    return Result(200,"成功返回所有已经保存的项目");
}

Result ProjectController::getProjectByProjectId(long long projectId, Project *&project)
{
    project = projectService->getProjectById(projectId);
    if(!project){
        return Result(205,"传入的项目id在数据库中不存在，返回空指针");
    }
    else{
        return Result(200,"返回项目成功");
    }
}

Result ProjectController::getProjectsByUserId(long long userId, vector<Project *> &projects)
{
    projects = projectService->getProjectsByUserId(userId);
    if(projects.size()==0){
        return Result(201,"该用户id对应的用户不存在或者该用户没有创建项目");
    }
    else{
        return Result(200,"返回该用户创建的项目");
    }
}
