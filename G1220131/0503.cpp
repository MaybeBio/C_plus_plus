#include<iostream>
using namespace std;
int fact(int x)
{
	int n=1,m=1;
	while (n <= x)
	{
		m *= n;
		n++;
	}
	return m;
}
int com(int m, int r)
{
	return fact(m) / fact(r) / fact(m - r);
}
int main()
{
	cout << com(4, 2) << '\t' << com(6, 4) << '\t' << com(8, 7) << endl;
}
