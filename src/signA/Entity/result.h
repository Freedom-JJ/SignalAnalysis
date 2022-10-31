#ifndef RESULT_H
#define RESULT_H
#include <string>
using namespace std;

class Result
{
public:
    Result();
    Result(int code,string msg);

    void setCode(int code);
    int getCode();

    void setMsg(string msg);
    string getMsg();


private:
    int code;
    string msg;
};

#endif // RESULT_H
