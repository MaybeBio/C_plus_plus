#include "mystring.h"
#include <iostream>
using namespace std;

mystring::mystring(const char *p)
{
    len = strlen(p);
    str = new char[len + 1];
    strcpy(str, p);
}

mystring::~mystring()
{
    delete[] str;
}

mystring::mystring(const mystring &my)
{
    len = my.len;
    str = new char[len + 1];
    strcpy(str, my.str);
}

mystring &mystring::operator=(const mystring &my)
{
    if (this == &my)
        return *this;
    delete[] str;
    len = my.len;
    str = new char[len + 1];
    strcpy(str, my.str);
    return *this;
}
void mystring::print()
{
    cout << str << endl;
}

mystring mystring::operator+(const mystring &my)
{
    // x "123" y "456"
    int _len = len + my.len;
    char *temp = new char[_len + 1];
    strcpy(temp, str);
    strcat(temp, my.str);
    mystring t(temp);
    delete[] temp;
    return t;
}
mystring &mystring::operator+=(const mystring &my)
{
    len += my.len;
    char *temp = new char[len + 1];
    strcpy(temp, str);
    strcat(temp, my.str);
    delete[] str;
    str = temp;
    return *this;
}
char &mystring::operator[](int i)
{
    static char temp;
    if (i < 0 || i >= len)
        return temp;
    return str[i];
}

bool mystring::operator>(const mystring &my)
{
    return strcmp(str, my.str) == 1;
}
mystring mystring::substr(int pos, int length)
{
    // s = "1234567" pos=2 length = 3
    if (pos < 0 || pos >= len || length <= 0)
        return mystring("");
    if (length > len - pos)
        length = len - pos;
    char *temp = new char[length + 1]{0};
    for (int i = 0; i < length; ++i)
        temp[i] = str[pos + i];
    mystring t(temp);
    delete[] temp;
    return t;
}

void mystring::remove(int pos, int length)
{
    // 1234567 删除345 pos = 2 length = 3
    if (pos < 0 || pos >= len || length <= 0)
        return;
    if (length > len - pos)
        length = len - pos;
    char *temp = new char[len - length + 1]{0};
    int i, j;
    for (i = 0, j = 0; i < pos; ++i, ++j)
        temp[j] = str[i];
    for (i = pos + length; i < len; ++i, ++j)
        temp[j] = str[i];
    len -= length;
    delete[] str;
    str = temp;
}