#include<iostream>
using namespace std;

int main()
{
	int x, y, z;
	cout << "输入三个整数" << endl;
	cin >> x >> y >> z;
	if (x <= y && y <= z)
	{
		cout << x << y << z << endl;
	}
	if (x <= z && z <= y)
	{
		cout << x << z << y << endl;
	}
	if (y <= x && x <= z)
	{
		cout << y << x << z << endl;
	}
	if (y <= z && z <= x)
	{
		cout << y << z << x << endl;
	}
	if (z <= x && x <= y)
	{
		cout << z << x << y << endl;
	}
	if (z <= y && y <= x)
	{
		cout << z << y << x << endl;
	}
	system("pause");
}