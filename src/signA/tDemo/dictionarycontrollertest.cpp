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



void testDictionary_add()
{
    DictionaryController dictionaryController = DictionaryController();
    //添加Dictionary
    Dictionary* dictionary = new Dictionary();
    dictionary->setDictName("hel");
    dictionary->setDictValue("gegege");
    long long dictId = 0;
    dictionaryController.addDictionary(dictionary,dictId);
    qInfo()<<"添加字典记录，新添加的字典id为"<<dictId;
}







void testDictionary_delete()
{
    DictionaryController dictionaryController = DictionaryController();

    //添加Dictionary
    Dictionary* dictionary = new Dictionary();
    dictionary->setDictName("hel");
    dictionary->setDictValue("gegege");
    long long dictId = 0;
    dictionaryController.addDictionary(dictionary,dictId);

    //删除新添加的记录
    Result result = dictionaryController.deleteDictionaryByDictId(dictId);
    qInfo()<<mstoqs(result.getMsg());
}

void testDictionary_update()
{
    DictionaryController dictionaryController = DictionaryController();
    //添加Dictionary
    Dictionary* dictionary = new Dictionary();
    dictionary->setDictName("hel");
    dictionary->setDictValue("gegege");
    long long dictId = 0;
    dictionaryController.addDictionary(dictionary,dictId);
    dictionary->setId(dictId);

    //更新Dictionary,更新Dictionary时需要保证其id已经赋值，因为是根据主键id更新
    dictionary->setDictValue("new_ge");
    Result result = dictionaryController.updateDictionary(dictionary);
    qInfo()<<mstoqs(result.getMsg());
}
