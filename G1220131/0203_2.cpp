#include<iostream>
using namespace std;

int main()
{
	int m = 10, n = 8, b;

	b = m++ + ++n;//a=++i，相当于i=i+1，a=i         a=i++，相当于a=i，i=i+1
	cout << b << '\n';
	return 0;
}