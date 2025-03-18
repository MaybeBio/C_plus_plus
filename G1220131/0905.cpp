#include<iostream>
using namespace std;
void moveleft(int* a, int n)
{
	int _1;
	_1 = *a;
	for (int i = 0; i < n - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
	*(a + n - 1) = _1;
}
void rotateLeft(int* a, int n, int k)
{
	for (int i = 0; i < k; i++)
	{
		moveleft(a, n);
	}
}
int main()
{
	int a[10] = { 0 };
	int* p = a;
	for (int i = 0; i < 10; i++)
	{
		cin >> *(p + i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << *(p + i) << '\t';
	}
	rotateLeft(p, 10, 2);
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << *(p + i) << '\t';
	}
}