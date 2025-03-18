#include<iostream>
using namespace std;
#define N 10
int main()
{
	int a[N] = {0}, min = 0;
	int* p = a;
	for (int i = 0; i < N; i++)
	{
		cin >> *(p+i);
	}
	min = *p;
	for (int i = 1; i < N; i++)
	{
		if (*(p + i) < min)
		{
			min = *(p + i);
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << *(p + i)<<'\t';
	}
	cout << '\n' << "最小值为" << min << endl;
}