#include<iostream>
using namespace std;

int main()
{
	double x, y;
	cout << "输入x和y的值" << endl;
	cin >> x >> y;
	if (x > 0 && y > 0)
	{
		cout << "1" << endl;
	}
	if (x < 0 && y>0)
	{
		cout << "2" << endl;
	}
	if (x < 0 && y < 0)
	{
		cout << "3" << endl;
	}
	if (x > 0 && y < 0)
	{
		cout << "4" << endl;
	}
	if (0 == x || 0 == y)
	{
		cout << "5" << endl;
	}
	system("pause");
}