#include <iostream>
using namespace std;

//编写函数，获取并保存用户任意长度的字符串输入，输出串的内容并管理好内存

char *input()
{
    int len = 80, count = 0;
    char *p = new char[len + 1], *q, c;
    while (cin.get(c), c != '\n')
    {
        p[count++] = c;
        if (count == len) //已经满了，需要扩容
        {
            len += 80;
            q = new char[len + 1]; //新开更大空间
            // strcpy(q, p);             //拷贝原有内容到新空间
            for (int i = 0; i < count; ++i)
                q[i] = p[i];
            delete[] p; //释放原有空间
            p = q;      //将指针p指向新空间
        }
    }
    p[count] = '\0';
    return p;
}

int main()
{
    char *p = input();
    cout << p << endl;
    delete[] p;
}
