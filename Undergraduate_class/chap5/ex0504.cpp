#include<iostream>
using namespace std;
int fun(int x)
{
	static int a = 3;
	a += x;
	return a;

}
int main()
{
	int k = 2, m = 1, n;
	n = fun(k);
	cout << "第一次n=" << n << endl;
	n = fun(m);
	cout << "第二次n=" << n << endl;
	return 0;

}