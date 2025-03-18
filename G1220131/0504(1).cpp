#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	int i;
	if (x > y)
	{
		int t = x;
		x = y;
		y = t;
	}
	i = x;
		while (i > 0)
		{
			if (x % i == 0 && y % i == 0)
			{
				break;
			}
			i--;
		}

	return i;
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