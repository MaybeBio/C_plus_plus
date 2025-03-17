#include <iostream>

void output(int a[], int n)
{
    for (int i = 0; i < n; i += 1)
    {
        std::cout << a[i] << (i == n - 1 ? '\n' : ' ');
    }
}

int deleteElement(int a[], int n, int x)
{
    //n是数组元素的个数
    for (int i = 0; i < n; i += 1)
    {
        if (a[i] == x)
        {
            //下标i后面的元素依次前移
            for (int j = i + 1; j < n; j += 1)
            {
                a[j - 1] = a[j];
            }
            //元素个数减少一个
            n -= 1;
        }
    }
    return n;
}

int main()
{
    int a[6] = {9, 5, 6, 7, 8, 5};
    output(a, 6);
    int delvalue = 5;
    int size = deleteElement(a, 6, delvalue);
    //这里注意：数组元素还是6个，但有效的只有size个
    output(a, size);
}