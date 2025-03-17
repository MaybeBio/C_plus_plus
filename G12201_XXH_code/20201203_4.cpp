#include <iostream>
using namespace std;

int gcd1(int, int);
int gcd2(int, int);
int gcd3(int, int);

int main()
{
    int x, y;
    cin >> x >> y;

    cout << gcd1(x, y) << "\n";
    cout << gcd2(x, y) << "\n";
    cout << gcd3(x, y) << "\n";
}

//1st:根据定义
int gcd1(int x, int y)
{
    int minv = x < y ? x : y;
    for (int i = minv; i > 1; --i)
    {
        if (0 == x % i && 0 == y % i)
        {
            return i;
        }
    }
    return 1;
}

//2nd:辗转相除法
int gcd2(int x, int y)
{
    //算法中需要先决出大小，这里让x保存小值
    if (x > y)
    {
        int t = x;
        x = y, y = t;
    }
    //辗转相除算法:
    int r = y % x;
    while (r)
    {
        y = x;
        x = r;
        r = y % x;
    }
    return x;
}

//3th:大数减小数
int gcd3(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            int t = x;
            x = y, y = t;
        }
        y -= x;
    }
    return x; //or: return y
}
