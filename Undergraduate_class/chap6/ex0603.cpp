//该程序用于逆序存放一个数组，首先数组大小宏定义，至于实际数组逆序存放函数的形参使用通用性定义，只放一个参数

#include<iostream>
using namespace std;
#define N 7
void inverse(int b[], int n)
{
	int i;
	for (i = 0; i < n / 2; i++)
	{
		int t;
		t = b[i];
		b[i] = b[n - 1 - i];
		b[n - 1 - i] = t;
	}
}
int main()
{
	int a[N] = { 1,2,3,4,5,6,7 }, i;
	cout << "原始数组元素为：" << endl;
	for (i = 0; i < N; i++)
	{
		cout << a[i] << '\t';
	}
	cout << endl;
	inverse(a, N);
	cout << "逆序之后的数组元素为:" << endl;
	for (i = 0; i < N; i++)
	{
		cout << a[i] << '\t';
	}
	cout << endl;
	return 0;
}