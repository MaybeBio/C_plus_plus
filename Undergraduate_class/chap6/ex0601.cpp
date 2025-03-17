#include<iostream>
using namespace std;
int x[5];
int main()
{
	static int y[5];
	int i, z[5];
	for (i = 0; i < 5; i++)
	{
		cout << x[i] << '\t';
	}
	cout << endl;
	for (i = 0; i < 5; i++)
	{
		cout << y[i] << '\t';
	}
	cout << endl;
	for (i = 0; i < 5; i++)
	{
		cout << z[i] << '\t';
	}
	cout << endl;
	return 0;

}