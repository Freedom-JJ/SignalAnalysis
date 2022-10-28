#include "post.h"

Post::Post()
{

}

Post::Post(vector<string> post_attribute)
{
    if(int(post_attribute.size())!=attribute_num){
        qCritical()<<"post initialized falsed, the size of post_attribute should be equal to attribute_num";
    }
    this->id = mstoll(post_attribute[0]);
    this->post = post_attribute[1];
}

void Post::setId(long long id)
{
    this->id = id;
}

long long Post::getId()
{
    return this->id;
}

void Post::setPost(string post)
{
    this->post = post;
}

string Post::getPost()
{
    return this->post;
}
