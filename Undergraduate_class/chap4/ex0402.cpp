#include<iostream>
using namespace std;
int main()
{
	float a, b, c, max;
	cout << "请输入三个数字" << endl;
	cin >> a >> b >> c;
	if (a < b)
	{
		max = b;
	}
	else
	{
		max = a;
	}
	if (max < c)
	{
		cout << "最大的数值是" << c << endl;
	}
	else
	{
		cout << "最大的数值是" << max << endl;

	}
	return 0;

}