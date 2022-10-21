#ifndef TBDICTIONARY_H
#define TBDICTIONARY_H
#include<string>
using namespace std;

class TbDictionary
{
private:
    int m_dictId;
    string m_dictName;
    string m_dictValue;
public:
    TbDictionary(int dictId = 0,	string dictName = "",	string dictValue = "");
    ~TbDictionary();

    bool operator == (TbDictionary dictionary);

    bool operator != (TbDictionary dictionary);

    void SetDictValue(string dictValue);
    void SetDictName(string dictName);
    void SetDictId(int  dictId);

    int GetDictId();
    string GetDictName();
    string GetDictValue();
};

#endif // TBDICTIONARY_H
