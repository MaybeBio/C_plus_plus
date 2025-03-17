//本程序将数组元素逆序存放，不过使用的是通过指针访问数组元素的算法

#include<iostream>
using namespace std;
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, t;
	int* p1 = a, * p2 = a + 9;
	while (p1 < p2)
	{
		t = *p1;
		*p1 = *p2;
		*p2 = t;
		p1++;
		p2--;
	}
	for (p1 = a; p1 < a + 10; p1++)
	{
		cout << *p1 << endl;
	}
	return 0;
}