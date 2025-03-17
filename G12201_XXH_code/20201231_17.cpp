#include <iostream>
#include <cstring>
using namespace std;

//交集
//算法：逐个比较
void intersection(int a[], int an, int b[], int bn, int c[], int &cn)
{
    cn = 0;
    for (int i = 0; i < an; ++i)
    {
        for (int j = 0; j < bn; ++j)
        {
            if (a[i] == b[j])
            {
                c[cn++] = a[i];
            }
        }
    }
}

//
void _union(int a[], int an, int b[], int bn, int c[], int &cn)
{
    cn = 0;
    int i, j;
    //复制数组a至c
    for (i = 0; i < an; ++i)
    {
        c[cn++] = a[i];
    }
    //b中数据没有出现在c中的，增加到c
    for (i = 0; i < bn; ++i)
    {
        for (j = 0; j < cn; ++j)
        {
            if (b[i] == c[j])
            {
                break;
            }
        }
        //
        if (j == cn)
        {
            c[cn++] = b[i];
        }
    }
}

//a-b差集
//a集合中删去b集合也出现的数据
void difference(int a[], int an, int b[], int bn, int c[], int &cn)
{
    cn = 0;
    int i, j;
    for (i = 0; i < an; ++i)
    {
        for (j = 0; j < bn; ++j)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if (j == bn)
        {
            c[cn++] = a[i];
        }
    }
}

//集合相等判断
bool same(int a[], int b[], int n)
{
    int i, j;
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if (j == n)
        {
            return false;
        }
    }
    return true;
}
void print(int x[], int n)
{
    cout << "{";
    for (int i = 0; i < n; ++i)
    {
        i ? cout << "," << x[i] : cout << x[i];
    }
    cout << "}";
}

int main()
{
    int a[5] = {3, 4, 2, 0, 9};
    int b[4] = {1, 2, 8, 3};
    int c[10] = {0};
    int cn = 0;
    //求交集
    intersection(a, 5, b, 4, c, cn);
    cout << "a∩b: ";
    print(c, cn);
    cout << '\n';
    //求并集
    cout << "a∪b: ";
    _union(a, 5, b, 4, c, cn);
    print(c, cn);
    cout << '\n';
    //求a-b差集
    cout << "a-b: ";
    difference(a, 5, b, 4, c, cn);
    print(c, cn);
    cout << '\n';
    //
    int a1[3] = {3, 2, 6};
    int b1[3] = {2, 6, 3};
    char symbol[10] = {0};
    if (same(a1, b1, 3))
    {
        strcpy(symbol, " == ");
    }
    else
    {
        strcpy(symbol, " != ");
    }
    print(a1, 3);
    cout << symbol;
    print(b1, 3);
    cout << '\n';
}