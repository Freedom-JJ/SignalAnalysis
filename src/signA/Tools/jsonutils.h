#ifndef JSONUTILS
#define JSONUTILS

#define MAX_VALUE_BYTE (1024*1024)
#include<string.h>
#include<stdio.h>
#include<map>
#include"stringutils.h"
using namespace std;
class JsonUtils{
    private:
        JsonUtils();
        
    public:

};
class JSonKey{
private:
        string key = "";
    public:
        virtual string value(){return this->key;}
};

class Value{
private:
    int _int;
    unsigned int _uint;
    float _float;
    double _double;

    Value *_array; //数组指针
    unsigned int size = 0;

    bool _bool;
    char * _str;

    char * _key;
    enum Type{
        INT,
        UINT,
        FLOAT,
        DOUBLE,
        ARRAY,
        BOOL,
        STRING,
        VALUE, // json对象
        NONETYPE
    };
    enum Type type;

    std::map<string,Value *> * _map;


    static Value * deepcopy(Value * other){
        Value * res = new Value;
        res->type = other->type;
        switch (other->type) {
        case VALUE:
            {
                res->_map = new map<string,Value *>();
                auto it = other->_map->begin(); //因为申明了变量 需要放在{}中，要不然后续case可见，报错
                while(it!=other->_map->end()){
                    (*res->_map)[it->first] = deepcopy((*other->_map)[it->first]);
                    it++;
                }
                break;
            }
        case ARRAY:
            res->_array = new Value[other->size];
            res->size = other->size;
            for(unsigned int i = 0;i < res->size; i++){
                res->_array[i] = deepcopy(other->_array + i);
            }
            break;
        case INT:
            res->_int = other->_int;
            break;
        case UINT:
            res->_uint = other->_uint;
            break;
        case FLOAT:
            res->_float = other->_float;
            break;
        case DOUBLE:
            res->_double = other->_double;
            break;
        case BOOL:
            res->_bool = other->_bool;
            break;
        case STRING:
            res->_str = new char[strlen(other->_str) + 1];
            strcpy(res->_str,other->_str);
            break;
        default:
            break ;
        }
        return res;
    }
    static void MESSAGE(bool condition,string mess){
        if(condition){
            cout<<mess<<endl;
        }
    }

public:
    Value(){
        type = VALUE;
    }
    Value(int other){
        _int = other;
        type = Type::INT;
    }
    Value(unsigned int other){
        _uint = other;
        type = Type::UINT;
    }
    Value(float other){
        _float = other;
        type = Type::FLOAT;
    }
    Value(double other){
        _double = other;
        type = Type::DOUBLE;
    }
    Value(Value *other , unsigned int len){ //waring , point may have some problem,deepcopy?
        _array = deepcopy(other); //try
    }
    Value(bool other){
        _bool = other;
        type = Type::BOOL;
    }
    Value(char *other){
        _str = new char [strlen(other) + 1];
        strcpy(_str,other);
        type = Type::STRING;
    }
    Value(void * other){
        if(other == NULL || other == nullptr){
            type = Type::NONETYPE;
        }
    }
//    Value(Value *other){
//        object = new
//        object = other;
//        type = VALUE;
//    }

    ~Value(){
        switch (type) {
        case INT:
        case UINT:
        case FLOAT:
        case DOUBLE:
        case BOOL:
        case NONETYPE:
            break;
        case STRING:
            delete _str;
            break;
        case ARRAY:
            delete _array; //waring
            size = 0;
            break;
        case VALUE:
            delete _map; //waring
            break;
        }
    }

public:
    //身为Object的方法
    void set(string key,string value){
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return;
        }
        (*_map)[key] = new Value(value.c_str());
    }
    void set(string key , int value){
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return;
        }
        (*_map)[key] = new Value(value);

    }
    void set(string key , unsigned int value){
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return;
        }
        (*_map)[key] = new Value(value);

    }
    void set(string key , float value){
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return;
        }
        (*_map)[key] = new Value(value);

    }
    void set(string key , double value){
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return;
        }
        (*_map)[key] = new Value(value);

    }
    void set(string key , bool value){
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return;
        }
        (*_map)[key] = new Value(value);
    }
    void set(string key , void * value){
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return;
        }
        (*_map)[key] = new Value(value);

    }
    void set(string key , Value * value){ //数组或者对象
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return;
        }
        (*_map)[key] = deepcopy(value);
    }
    Value *get(string key){
        if(type != VALUE){
            MESSAGE(type!=VALUE,"非Object类型");
            return NULL;
        }
        return (*_map)[key];
    }
    int getInt(){
        if(type == INT){
            MESSAGE(type!=VALUE,"非INT类型");
            throw new
            bad_exception;
        }
        return _int;
    }


};

#endif

