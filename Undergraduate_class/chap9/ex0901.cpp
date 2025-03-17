#include<iostream>
using namespace std;
int main()
{
	int a, * p;
	p = &a;
	cout << p << endl;
	cout << int(p) << endl;
	return 0;
}