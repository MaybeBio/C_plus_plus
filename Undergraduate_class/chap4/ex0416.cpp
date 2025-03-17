#include<iostream>
using namespace std;
int main()
{
	int f1, f2;
	f1 = f2 = 1;
	for (int i = 1; i <= 20; i++)
	{
		cout << f1 << endl << f2 << endl;
		f1 = f1 + f2;
		f2 = f1 + f2;
	}
	return 0;
}