#include "dictionarycontrollertest.h"



void testDictionary()
{
    DictionaryController dictionaryController = DictionaryController();
    Dictionary *dictionary = new Dictionary();
    Result result = dictionaryController.findDictionaryByDictionaryId(30,dictionary);
    qInfo()<<mstoqs(result.getMsg());
    if(result.getCode()==200){
        qInfo()<<mstoqs(dictionary->getDictName());
        qInfo()<<mstoqs(dictionary->getDictValue());
    }

    vector<Dictionary*> dictionaies;
    result = dictionaryController.findDictionariesByDictName("engineeringunit",dictionaies);
    qInfo()<<"找到字典的记录条数为"<<dictionaies.size();
    for(Dictionary* dict: dictionaies){
        qInfo()<<mstoqs(mlltos(dict->getId()));
        qInfo()<<mstoqs(dict->getDictName());
        qInfo()<<mstoqs(dict->getDictValue());
    }
}
