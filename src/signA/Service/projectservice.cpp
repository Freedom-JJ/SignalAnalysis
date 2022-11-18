#include "projectservice.h"

ProjectService::ProjectService()
{
    this->projectDao = new ProjectDao();
}

ProjectService::~ProjectService()
{
    delete this->projectDao;
}

vector<Project *> ProjectService::listProjects()
{
    return this->projectDao->listProjects();
}

Project *ProjectService::getProjectById(long long id)
{
    return this->projectDao->getProjectById(id);
}

vector<Project *> ProjectService::getProjectsByUserId(long long userId)
{
    return this->projectDao->getProjectsByUserId(userId);
}

int ProjectService::insertProject(Project *project)
{
    return this->projectDao->insertProject(project);
}

int ProjectService::updateProject(Project *project)
{
    return this->projectDao->updateProject(project);
}

int ProjectService::deleteProjectById(long long projectId)
{
    return this->projectDao->deleteProjectById(projectId);
}
