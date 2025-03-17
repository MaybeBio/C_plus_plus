//该程序使用动态数组空间

#include<iostream>
using namespace std;
int main()
{
	int n, * p, i;
	cin >> n;
	p = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	for (i = 0; i < n; i++)
	{
		cout<<p[i];
	}
	cout << endl;
	delete[]p;
	return 0;

}