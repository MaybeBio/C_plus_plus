#include<iostream>
using namespace std;

bool isprime(int x)
{
	int a = 0;
	for (int i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			a++;
		}
	}
	if (a == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num = 100, a = 0;
	while (num <= 200)
	{
		if (isprime(num))
		{
			cout << num << '\t';
			a++;
		}
		num++;
		if (a % 8 == 0)
		{
			cout << '\n';
		}
	}
	system("pause");
}