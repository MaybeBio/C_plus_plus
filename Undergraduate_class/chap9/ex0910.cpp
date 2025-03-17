//为指针类型变量定义引用

#include<iostream>
using namespace std;
int main()
{
	int a;
	int* p = &a;
	int*& p1 = p;
	*p1 = 5;
	*p += 3;
	a -= 1;
	cout << a << ',' << *p << ',' << *p1 << endl;
	return 0;
}