#include "postdao.h"

PostDao::PostDao()
{

}

vector<Post *> PostDao::listPosts(string query_condition)
{
    vector< vector<string> > query_result;
    string query_sql = "select * from post "+query_condition;
    qInfo()<<"执行"<<mstoqs(query_sql);
    global_pdsql->SelectMysql(query_result,query_sql);
    vector<Post*> posts;
    for(vector<string> post_attributes:query_result){
        Post *post = new Post(post_attributes);
        posts.push_back(post);
    }
    return posts;
}

Post *PostDao::getPostById(long long id)
{
    string query_condition = "where id = '"+ mlltos(id)+"'";
    vector<Post*> posts = listPosts(query_condition);
    if(posts.size()==0){
        return nullptr;
    }
    else{
        return posts[0];
    }
}

Post *PostDao::getPostByPost(string post)
{
    string query_condition = "where post = '"+ post+"'";
    vector<Post*> posts = listPosts(query_condition);
    if(posts.size()==0){
        return nullptr;
    }
    else{
        return posts[0];
    }
}



