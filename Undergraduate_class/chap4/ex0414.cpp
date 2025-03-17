//寻找两个数的最大公约数和最小公倍数

#include<iostream>
using namespace std;
int main()
{
	int x, y, i, k;
	cout << "请输入两个数";
	cin >> x >> y;
	k = x > y ? y : x;
	for (i = k; i >= 1; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			break;
		}
	}
	cout << "最大公约数" << i << endl;
	k = x < y ? y : x;
	for (i = k; i <= x * y; i++)
	{
		if (i % x == 0 && i % y == 0)
		{
			break;
		}
		
	}
	cout << "最大公倍数" << i << endl;
	return 0;

}