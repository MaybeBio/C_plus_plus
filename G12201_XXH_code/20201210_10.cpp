#include <iostream>
#include <windows.h>
using namespace std;

//算法：行数、列数从0开始计;每行中,列数小于所在行数的为空格，其他为*
//考虑美观，输出是空格是连续两个空，*为“* ”（*+空格）。
void printTriangle(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col < row)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        //换行
        cout << "\n";
        //休眠，形成动画效果
        Sleep(100);
    }
}

int main()
{
    int n;
    cin >> n;

    printTriangle(n);
}
