#include<iostream>
using namespace std;
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '\t';
	}
	cout << endl;
}int deleteElement(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			for (int j = i + 1; j < n; j++)
			{
				a[j - 1] = a[j];
			}
			n--;
		}
	}
	return n;
}
int main()
{
	int a[6] = { 9,5,6,7,8,5 };
	output(a, 6);
	int size = deleteElement(a, 6, 5);
	output(a, size);
	system("pause");
}