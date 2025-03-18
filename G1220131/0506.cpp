#include<iostream>
using namespace std;
int max3(int x, int y, int z)
{
	int t;
	if (x < y)
	{
		t = y;
		y = x;
		x = t;
	}
	if (x < z)
	{
		return z;
	}
	return x;
}
int main()
{
	while (1)
	{
		int x, y, z;
		cin >> x >> y >> z;
		cout << max3(x, y, z) << endl;
	}
}