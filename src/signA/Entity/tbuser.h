#ifndef TBUSER_H
#define TBUSER_H
#include<string>
using namespace std;
class TbUser
{
public:
    TbUser(int userId = 0, string loginName = "", string password = "", int Status = 1);
    ~TbUser();
    string GetLoginName();
    string GetPassWord();
    void SetLoginName(string loginName);
    void SetPassWord(string password);
    void SetUserId(int userId);
    int GetUserId();
    string GetName();
    void SetName(string realName);
    void SetPost(string Post);
    string GetPost();
    void SetTelephone(string telephone);
    string GetTelephone();

    void SetStatus(int Status);
    int GetStatus();

protected:

    int m_userId;
    string m_loginName;
    string m_Password;
    string m_Name;
    string m_Post;
    string m_Telephone;
    int m_status;
};

#endif // TBUSER_H
