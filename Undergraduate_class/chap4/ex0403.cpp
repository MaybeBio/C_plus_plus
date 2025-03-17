#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三个数字";
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		cout << "最大的数字是" << a << endl;

	}
	else if (b >= a && b >= c)
	{
		cout<< "最大的数字是" << b<< endl;
	}
	else
	{
		cout << "最大的数字是" << c << endl;
	}
	return 0;
}