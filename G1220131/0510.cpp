#include<iostream>
using namespace std;
void printTriangle1(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i-1; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << "*";
		}
		cout << '\n';
	}
}
void printTriangle2(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j >= i)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << '\n';
	}
}
int main()
{
	cout << "ÇëÊäÈënµÄÖµ" << endl;
	int n;
	cin>>n;
	printTriangle1(n);
		cout << '\n';
		printTriangle2(n);
}