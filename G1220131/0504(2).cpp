#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	if (x > y)//让x为小值
	{
		int t = x;
		x = y, y = t;
	}
	int r = y % x;
	while (r)
	{
		y = x;
		x = r;
		r = y % x;
	}
	return x;
}
int main()
{
	while (1)
	{
		int x, y;
		cout << "请输入两个整数" << endl;
		cin >> x >> y;
		cout << "这两个数的最大公约数为" << gcd(x, y) << endl;
	}
}