#include <iostream>
#include <iomanip>

//获得位数
int getbits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

//分解,这里默认数组a足够大
void split(int a[], int n, int k)
{
    int i = 0;
    while (i < k)
    {
        a[i++] = n % 10;
        n /= 10;
    }
}

//降序排列(从大到小)
void sortd(int a[], int k)
{
    for (int i = k - 1; i > 0; i -= 1)
    {
        for (int j = 0; j < i; j += 1)
        {
            if (a[j] < a[j + 1])
            {
                a[j] += a[j + 1], a[j + 1] = a[j] - a[j + 1], a[j] -= a[j + 1];
            }
        }
    }
}

//数组逆序
void reverse(int a[], int k)
{
    for (int i = 0, j = k - 1; i < j; ++i, --j)
    {
        //a[i]、a[j]数据交换
        a[i] += a[j], a[j] = a[i] - a[j], a[i] -= a[j];
    }
}

//组合数据
int combine(int a[], int k)
{
    int ret = 0;
    for (int i = 0; i < k; i += 1)
    {
        ret *= 10;
        ret += a[i];
    }
    return ret;
}

int main()
{
    int oldn = -1, n;
    //数组元素可以多一点
    int a[6] = {0};

    std::cin >> n;
    int k = getbits(n);

    while (oldn != n)
    {
        oldn = n;
        //将n分解为k个一位数
        split(a, n, k);
        //降序排列
        sortd(a, k);
        //合并整数
        int n1 = combine(a, k);
        //
        //逆序
        reverse(a, k);
        //合并为另一整数
        int n2 = combine(a, k);
        //计算新的n值
        n = n1 - n2;
        //输出过程
        using namespace std;
        cout << setw(k) << n1 << " - " << setw(k) << n2 << " = " << setw(k) << n << '\n';
    }
}
