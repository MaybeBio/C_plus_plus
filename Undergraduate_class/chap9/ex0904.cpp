#include<iostream>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 }, * p = a, sum = 0, i;
	for (i = 0; i < 10; i++)
	{
		sum += p[i]; // sum+=*(p+i)
	}
	for (i = 0; i < 10; i++, p++)
	{
		cout << *p << endl;
	}
	cout << "sum=" << sum << endl;
	return 0;
}