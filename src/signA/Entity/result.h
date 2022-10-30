#ifndef RESULT_H
#define RESULT_H
#include<string>
using namespace std;

class Result
{
public:

    Result();
    Result(bool isSuccess, string message);
    ~Result();
    bool GetIsSuccess();
    string GetMessages();

protected:
    bool m_isSuccess;
    string m_message;

};

#endif // RESULT_H
