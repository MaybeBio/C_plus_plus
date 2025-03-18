#include<iostream>
using namespace std;
int fib(int n)
{
	int num;
	if (n<=2)
	{
		return 1;
	}
	if(n>2)
	{
		num = fib(n - 1) + fib(n - 2);

	}
	return num;
}
int main()
{
	int n,a=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << fib(i)<<'\t';
		if (i % 5 == 0)
		{
			cout << '\n';
		}
	}
}