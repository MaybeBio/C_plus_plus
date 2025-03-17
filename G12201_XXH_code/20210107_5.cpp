#include <iostream>
using namespace std;

void moveLeft(int *a, int n)
{
    //先暂存a[0]
    int tmp = *a;
    //依次向小一个的下标移动数据
    int *pa = a;
    while (pa < a + n - 1)
    {
        *pa = *(pa + 1);
        pa++;
    }
    //现在pa等于a+n-1，是a[n-1]的指针
    *pa = tmp;
}

void rotateLeft(int *a, int n, int k)
{
    for (int i = 0; i < k; i++)
        moveLeft(a, n);
}

int main()
{
    int a[] = {2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(int); //得到元素个数

    int i;
    for (i = 0; i < n; i++)
    {
        cout << *(a + i) << '\t';
    }
    cout << '\n';

    int k;
    cin >> k;
    rotateLeft(a, n, k);

    for (i = 0; i < n; i++)
    {
        cout << *(a + i) << '\t';
    }
}