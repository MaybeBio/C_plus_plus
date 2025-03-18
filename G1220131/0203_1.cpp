#include<iostream>
using namespace std;

int main()
{
	int m = 10, n = 8, a;
	a = m-- + n++;//a=m=10£¬m=10-1=9£¬a=n=8£¬n=8+1=9
	cout << a << '\n';
	return 0;
}