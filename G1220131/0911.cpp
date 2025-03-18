#include<iostream>
using namespace std;
int maxValue(int a[4][4])
{
	int* p = a[0];
	int max=a[0][0];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (p[i * 4 + j] > max)
			{
				max = p[i * 4 + j];
			}
		}
	}
	return max;
}
int main()
{
	int a[4][4] = { 1,3,2,1,2,3,12,3,45,21,2};
	cout << maxValue(a);
}