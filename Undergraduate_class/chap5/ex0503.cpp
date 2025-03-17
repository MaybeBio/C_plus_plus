
//this cpp is to验证全局变量以及局部变量的一些特点
#include<iostream>
using namespace std;
int i = 10;
int main()
{
	int i, j = 5;
	i = 20;
	::i += 4;
	j = ::i + i;
	cout << "::i=" << ::i << endl;
	cout << "i=" << i << endl;
	cout << "j=" << j<< endl;
	return 0;

}