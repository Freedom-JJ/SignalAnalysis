#include "userdao.h"

UserDao::UserDao()
{

}

vector<User*> UserDao::listUsers(string query_condition)
{
    vector< vector<string> > query_result;
    string query_sql = "select * from user "+query_condition;
    global_pdsql->SelectMysql(query_result,query_sql);
    vector<User*> users;
    for(vector<string> user_attributes:query_result){
        User *user = new User(user_attributes);
        users.push_back(user);
    }
    return users;
}

User* UserDao::getUserById(long long id)
{
    string query_condition = "where id = '"+ mlltos(id)+"'";
    vector<User*> users = listUsers(query_condition);
    if(users.size()==0){
        return nullptr;
    }
    else{
        return users[0];
    }
}

User *UserDao::getUserByLoginName(string loginName)
{
    string query_condition = "where loginName = '"+ loginName+"'";
    vector<User*> users = listUsers(query_condition);
    if(users.size()==0){
        return nullptr;
    }
    else{
        return users[0];
    }
}

int UserDao::insert(User* user,bool insert_id)
{
    int id = 0;
    QString sql;
    if(insert_id){
        sql="insert into user(id, loginName, loginPassword, name, postId, telephone) values ('%1','%2','%3','%4','%5','%6')";
        sql = sql.arg(mstoqs(mlltos(user->getId()))).arg(mstoqs(user->getLoginName())).arg(mstoqs(user->getLoginPassword())).arg(mstoqs(user->getName())).arg(mstoqs(mlltos(user->getPostId()))).arg(mstoqs(user->getTelephone()));
    }
    else{
        sql="insert into user(loginName, loginPassword, name, postId, telephone) values ('%1','%2','%3','%4','%5')";
        sql = sql.arg(mstoqs(user->getLoginName())).arg(mstoqs(user->getLoginPassword())).arg(mstoqs(user->getName())).arg(mstoqs(mlltos(user->getPostId()))).arg(mstoqs(user->getTelephone()));
    }
    qInfo()<<"执行"<<sql;
    global_pdsql->InsertMysql(id,mqstos(sql));
    return id;
}
