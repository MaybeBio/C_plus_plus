#include<iostream>
using namespace std;

int main()
{
	int i = 1;
	int sum = 0;
	do
	{
		if (i % 2 != 1)
		{
			sum += i;
		}
		i++;
	} while (i <= 100);
	cout << sum << endl;
	system("pause");
}
