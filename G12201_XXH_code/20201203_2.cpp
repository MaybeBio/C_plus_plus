#include <iostream>
using namespace std;

//函数原型
int fact(int);
int fact_d(int); //递归形式
int fact_s(int); //静态变量

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += fact(i);
    }
    cout << sum << '\n';
    //调用递归形式的函数
    sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += fact_d(i);
    }
    cout << sum << '\n';
    //利用静态变量
    sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum += fact_s(i);
    }
    cout << sum << '\n';
}

//函数定义：循环累乘形式
int fact(int n)
{
    int d = 1;
    for (int i = 2; i <= n; ++i)
    {
        d *= i;
    }
    return d;
}

//函数定义：递归形式
int fact_d(int n)
{
    if (n > 1)
    {
        return (n * fact_d(n - 1));
    }
    return 1;
}

//函数定义：利用静态变量
//此题每一步阶层的值可以利用上一步的计算值
int fact_s(int n)
{
    static int s = 1; //此句仅执行一次
    s *= n;
    return s;
}