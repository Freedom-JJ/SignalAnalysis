#ifndef PROJECT_H
#define PROJECT_H
#include <string>
#include <vector>
#include "../Logger/log.h"
#include "../Tools/tool.h"

class Project
{
public:
    Project();
    //需要包含所有的属性
    Project(vector<string> project_attribute);

    void setId(long long id);
    long long getId();

    void setProjectName(string projectName);
    string getProjectName();

    void setProjectCreateTime(string projectCreateTime);
    string getProjectCreateTime();

    void setProjectUpdateTime(string projectUpdateTime);
    string getProjectUpdateTime();

    void setUserId(long long userId);
    long long getUserId();

    void setProjectParameterId(long long projectParameterId);
    long long getProjectParameterId();

    void setProjectStatus(int projectStatus);
    int getProjectStatus();

    friend ostream &operator<<(ostream &stream, Project project)
    {
        stream << "Project id: " <<project.getId();
        stream << " projectName: " << project.getProjectName();
        stream << " projectCreateTime: "<<project.getProjectCreateTime();
        stream << " projectUpdateTime: "<<project.getProjectUpdateTime();
        stream << " userId: "<<project.getUserId();
        stream << " projectParameterId: "<< project.getProjectParameterId();
        stream << " projectStatus: "<< project.getProjectStatus()<<endl;
        return stream;
    }



private:
    long long id;
    string projectName;
    string projectCreateTime;
    string projectUpdateTime;
    long long userId;
    long long projectParameterId;
    int projectStatus;

    int attribute_num = 7;//字段数目
};

#endif // PROJECT_H
