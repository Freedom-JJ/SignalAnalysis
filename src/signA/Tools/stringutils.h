#ifndef STRINGUTILS_H
#define STRINGUTILS_H

#include<vector>
#include<string>
#include<sstream>
#include<iostream>
using namespace std;
class StringUtils
{
private:
    StringUtils();
public:
    static string join(vector<string> value,string spec="",string pre="",string suff="");
    static string join(vector<int> value,string spec="",string pre="",string suff="");
    static string join(vector<double> value,string spec="",string pre="",string suff="");
    static vector<string> split(string source , string separator);
    static vector<int> whereindex(string source,string who);

    static string fromInt(int value){
        stringstream ss;
        ss<<value;
        return ss.str();
    }
};

#endif // STRINGUTILS_H
