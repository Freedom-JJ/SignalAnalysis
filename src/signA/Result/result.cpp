#include "result.h"

Result::Result()
{

}

Result::Result(int code, string msg)
{
    setCode(code);
    setMsg(msg);
}

void Result::setCode(int code)
{
    this->code = code;
}

int Result::getCode()
{
    return this->code;
}

void Result::setMsg(string msg)
{
    this->msg = msg;
}

string Result::getMsg()
{
    return this->msg;
}
