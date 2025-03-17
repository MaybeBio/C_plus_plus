#include<iostream>
using namespace std;
void swap(int, int);
int main()
{
	int a(4), b(5);
	swap(a, b);

	cout << "a=" << a << "," << "b=" <<b<< endl;
	return 0;
}
void swap(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	cout << "a=" << a << "," << "b=" <<b<< endl;
}