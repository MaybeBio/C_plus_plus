#include <iostream>
#include <cstring>
using namespace std;

//用strcmp的结果排序，注意strcmp比较的含义
void swap(char *p1, char *p2)
{
    if (strcmp(p1, p2) > 0)
    {
        char buf[64] = {0};
        strcpy(buf, p1);
        strcpy(p1, p2);
        strcpy(p2, buf);
    }
}

int main()
{
    char str1[64], str2[64], str3[64];
    cin >> str1 >> str2 >> str3;
    swap(str1, str2);
    swap(str1, str3);
    swap(str2, str3);
    cout << str1 << "  " << str2 << "  " << str3 << '\n';
}