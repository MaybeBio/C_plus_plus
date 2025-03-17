#include<iostream>
using namespace std;
int total(int(*p)[4], int n)
{
	int i, j, sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sum += *(*(p + i) + j);
		}
		
	}return sum;
}
int main()
{
	int a[3][4], sum, i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cin >> *(a[i] + j);
		}
	}
	sum = total(a, 3);
	cout << "×ÜºÍÊÇ" << sum << endl;
	return 0;
}