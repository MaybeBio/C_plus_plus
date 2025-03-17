#include<iostream>
using namespace std;
int main()
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 }, * p , sum = 0;
	for (p=a;p<a+10;p++)
	{
		sum += *p; // sum+=*(p+i)
	}
	for (p = a; p < a + 10; p++)
	{
		cout << *p << endl;
	}
	cout << "sum=" << sum << endl;
	return 0;
}