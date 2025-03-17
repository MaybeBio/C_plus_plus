#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int); //函数原型

int main()
{
    for (int v = 100, count = 0; v <= 200; ++v)
    {
        //调用函数后得到函数的值直接用于判断
        if (true == isprime(v)) //or: if(isprime(v))。
        {
            cout << v << '\t';
            if (0 == ++count % 8)
            {
                cout << '\n';
            }
        }
    }
    cout << '\n';
}

//函数定义
bool isprime(int x)
{
    int limit = (int)sqrt(x) + 1;
    for (int k = 2; k < limit; ++k)
    {
        if (0 == x % k)
        {
            return false;
        }
    }
    return true;
}