#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "请输入三个数字" << endl;
	cin >> a >> b >> c;
	cout << "最大的数字是" << ((a > b ? a : b) < c ? c : (a > b ? a : b));
	return 0;


}