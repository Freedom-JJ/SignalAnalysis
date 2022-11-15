#include "project.h"

Project::Project()
{
    this->projectCreateTime = "";
    this->projectUpdateTime = "";
    this->userId = -1;
    this->projectParameterId = -1;//对应collectionparas类的id
    this->projectStatus = 1;//默认状态
    this->projectName = "newProject";//默认项目名称
}

Project::Project(vector<string> project_attribute)
{
    if(project_attribute.size()!=attribute_num){
        qCritical()<<"project initialized falsed, the size of project_attribute should be equal to attribute_num";
    }
    this->id = mstoll(project_attribute[0]);
    this->projectName = project_attribute[1];
    this->projectCreateTime = project_attribute[2];
    this->projectUpdateTime = project_attribute[3];
    this->userId = mstoll(project_attribute[4]);
    this->projectParameterId = mstoll(project_attribute[5]);
    this->projectStatus = mstoi(project_attribute[6]);

}

void Project::setId(long long id)
{
    this->id = id;
}

long long Project::getId()
{
    return this->id;
}

void Project::setProjectName(string projectName)
{
    this->projectName = projectName;
}

string Project::getProjectName()
{
    return this->projectName;
}

void Project::setProjectCreateTime(string projectCreateTime)
{
    this->projectCreateTime = projectCreateTime;
}

string Project::getProjectCreateTime()
{
    return this->projectCreateTime;
}

void Project::setProjectUpdateTime(string projectUpdateTime)
{
    this->projectUpdateTime = projectUpdateTime;
}

string Project::getProjectUpdateTime()
{
    return this->projectUpdateTime;
}

void Project::setUserId(long long userId)
{
    this->userId = userId;
}

long long Project::getUserId()
{
    return this->userId;
}

void Project::setProjectParameterId(long long projectParameterId)
{
    this->projectParameterId = projectParameterId;
}

long long Project::getProjectParameterId()
{
    return this->projectParameterId;
}

void Project::setProjectStatus(int projectStatus)
{
    this->projectStatus = projectStatus;
}

int Project::getProjectStatus()
{
    return this->projectStatus;
}
