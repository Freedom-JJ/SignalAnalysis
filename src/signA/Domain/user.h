#ifndef USER_H
#define USER_H
#include <string>
#include <vector>
#include "../Logger/log.h"
#include "../Tools/tool.h"
using namespace std;
class User
{
public:
    User();
    //需要包含所有的属性
    User(vector<string> user_attribute);

    void setId(long long id);

    long long getId();

    void setLoginName(string loginName);

    string getLoginName();

    void setLoginPassword(string loginPassword);

    string getLoginPassword();

    void setName(string name);

    string getName();

    void setPostId(long long postId);

    long long getPostId();

    void setTelephone(string telephone);

    string getTelephone();

    friend ostream &operator<<(ostream &stream, User user)
    {
        stream << "User id: " <<user.getId();
        stream << "loginName: " << user.getLoginName();
        stream << "loginPassword: "<<user.getLoginPassword();
        stream << "name: "<<user.getName();
        stream << "postId: "<<user.getPostId();
        stream << "telephone: "<< user.getTelephone()<<endl;
        return stream;
    }

private:
    long long id;
    string loginName;
    string loginPassword;
    string name;
    long long postId;
    string telephone;

    int attribute_num = 6;//字段数目

};

#endif // USER_H
