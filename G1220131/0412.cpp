#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i=153,a,b,c;
	while (i <= 999)
	{
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
		{
			cout << i << '\n';
		}
		i++;
	}
	system("pause");
}