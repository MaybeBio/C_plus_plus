#include<iostream>
using namespace std;
int fact(int x)
{
	int m = 1, z = 0, n = 1;
	while (n <= x)
	{
		m *= n;
		n++;
		z += m;
	}
	return z;
}
int main()
{
	int sum;
	cout << "ÇëÊäÈën" << endl;
	cin >> sum;
	cout << "sum=" << fact(sum) << endl;
	system("pause");
}