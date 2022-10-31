#ifndef POSTDAO_H
#define POSTDAO_H
#include "../Domain/post.h"
#include "pdsqlinitialize.h"
#include <vector>
class PostDao
{
public:
    PostDao();

    //返回所有的用户
    vector<Post*> listPosts(string query_condition="");

    //根据id返回post
    Post* getPostById(long long id);

    //根据人员类型返回post
    Post* getPostByPost(string post);

};

#endif // POSTDAO_H
