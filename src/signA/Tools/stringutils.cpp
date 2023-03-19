#include "stringutils.h"

StringUtils::StringUtils()
{

}

string StringUtils::join(vector<string> value,string spec,string pre  ,string suff)
{
      stringstream ss;
      ss<<pre;
      cout<<"size : "<<value.size()<<endl;
      for(unsigned int i = 0;i < value.size();i++){
          ss<<value[i];
          ss<<spec;
      }
      string res = ss.str();
      res = res.substr(0,res.size() - spec.size());
      res +=suff;
      return res;
}

string StringUtils::join(vector<int> value,string spec,string pre  ,string suff )
{
    vector<string> svalue;
    svalue.reserve(value.size());
    for(unsigned int i =0; i < value.size() ; i ++){
        svalue.push_back(std::to_string(value[i]));
    }

    return StringUtils::join(svalue,spec,pre,suff);
}

string StringUtils::join(vector<double> value,string spec,string pre  ,string suff )
{
    //vector中下标的使用最好是在有数据的情况下
    //std 11 专用
    vector<string> svalue;
    svalue.reserve(value.size());
    for(unsigned int i =0; i < value.size() ; i ++){
        svalue.push_back(std::to_string(value[i]));
    }
    return StringUtils::join(svalue,spec,pre,suff);
}

vector<string> StringUtils::split(string source, string separator)
{
    vector<string> res;
    vector<int> indes = whereindex(source,separator);
    unsigned int l = 0;
    unsigned int index = 0;
    while(l < source.size() && index < indes.size()){
        string sub = source.substr(l , indes[index] - l);
        if(sub.size() > 0){
            res.push_back(sub);
        }
        l = indes[index] + separator.size();
        ++index;
    }
    if (l < source.size()){
        res.push_back(source.substr(l , source.size()));
    }
    return res;
}

vector<int> StringUtils::whereindex(string source, string who)
{
    vector<int> res;
    int index = -1 ;
    while (index < (int)source.size() ) {
         index =  source.find(who,index + 1);
         if(index >=0)
             res.push_back(index);
         else
             return res;
    }
}
