#ifndef POST_H
#define POST_H
#include "../Logger/log.h"
#include "Tools/tool.h"
#include <string>
#include <vector>
class Post
{
public:
    Post();

    Post(vector<string> post_attribute);

    void setId(long long id);

    long long getId();

    void setPost(string post);

    string getPost();

    friend ostream &operator<<(ostream &stream, Post post)
    {
        stream << "Post id: " <<post.getId()<<" ";
        stream << "post: " << post.getPost()<<" ";
        return stream;
    }



private:
    long long id;
    string post;
    int attribute_num = 2;//字段数目
};

#endif // POST_H
