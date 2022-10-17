#include "result.h"

Result::Result()
{

}
Result::Result(bool isSuccess, string message)
{
    this->m_isSuccess = isSuccess;
    this->m_message = message;
}

bool Result::GetIsSuccess(){
    return this->m_isSuccess;
}
string Result::GetMessages(){
    return this->m_message;
}
Result::~Result()
{

}
