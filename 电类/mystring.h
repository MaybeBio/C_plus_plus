#ifndef __MYSTRING_H
#define __MYSTRING_H
#include <string>
using namespace std;
class mystring
{
    char *str;
    int len;

public:
    mystring(const char *p = "");
    ~mystring();
    mystring(const mystring &my);
    mystring &operator=(const mystring &my);
    void print();
    mystring operator+(const mystring &my);
    mystring &operator+=(const mystring &my);
    char &operator[](int i);
    bool operator>(const mystring &my);
    //补上其它所有的关系运算
    //字符串操作函数
    mystring substr(int pos, int length);
    void remove(int pos, int length);
};
#endif