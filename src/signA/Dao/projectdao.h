#ifndef PROJECTDAO_H
#define PROJECTDAO_H

#include "../Domain/project.h"
#include "pdsqlinitialize.h"
#include <vector>


class ProjectDao
{
public:
    ProjectDao();

    vector<Project*> listProjects(string query_condition="");

    Project* getProjectById(long long id);

    vector<Project*> getProjectsByUserId(long long userId);



};

#endif // PROJECTDAO_H
