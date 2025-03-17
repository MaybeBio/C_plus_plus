#include<iostream>
using namespace std;
int main()
{
	float a, b, c, max;
	cout << "请输入三个数字" << endl;
	cin >> a >> b >> c;
	max = a;
	if (max < b)max = b;
	if (max < c)max = c;
	cout << "最大的数值是" << max;
	return 0;


}