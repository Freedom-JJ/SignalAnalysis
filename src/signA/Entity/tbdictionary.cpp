#include "tbdictionary.h"

TbDictionary::TbDictionary(int dictId  , string dictName , string dictValue  )
{
    m_dictId = dictId;
    m_dictName = dictName;
    m_dictValue = dictValue;
}

bool TbDictionary::operator == (TbDictionary dictionary)
{

    bool tag = true;
    if (m_dictId != dictionary.GetDictId()) tag = false;
    if (m_dictValue != dictionary.GetDictValue()){tag = false;}
    if (m_dictName != dictionary.GetDictName()){ tag = false; }
    return tag;
}

bool TbDictionary::operator != (TbDictionary dictionary)
{

    return *this == dictionary ? false : true;

}



TbDictionary::~TbDictionary()
{
}

void TbDictionary::SetDictValue(string dictValue){
    this->m_dictValue = dictValue;
}
void TbDictionary::SetDictName(string dictName){
    this->m_dictName = dictName;
}
void TbDictionary::SetDictId(int  dictId){
    this->m_dictId = dictId;
}

int TbDictionary::GetDictId(){
    return this->m_dictId;
}
string TbDictionary::GetDictName(){
    return this->m_dictName;
}
string TbDictionary::GetDictValue(){
    return this->m_dictValue;
}
