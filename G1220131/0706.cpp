#include<iostream>
using namespace std;
int gcd(int x, int y)
{
	int t = x % y;
	if (!t)
	{
		return y;
	}
	else return gcd(y, t);
}
int main()
{
	int a[8] = { 24,1007,956,705,574,371,416,35 };
	int b[8] = { 60,631,772,201,262,763,1000,77 };
	int c[8];
	for (int i = 0; i < 8; i++)
	{
		c[i] = gcd(a[i], b[i]);
		cout << c[i] << '\t';
	}
	system("pause");
}