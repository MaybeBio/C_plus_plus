#include<iostream>
#include<iomanip>
using namespace std;
int getbits(int n)
{
	int times=0;
	while (n)
	{
		n /= 10;
		times++;
	}
	return times;
}
void split(int a[], int n, int k)
{
	int i = 0;
	while (i < k)
	{
		a[i++] = n % 10;
		n /= 10;
	}
}
void sortd(int a[], int k)
{
	for (int i = k - 1; i > 0; i -= 1)
	{
		for (int j = 0; j < i; j += 1)
		{
			if (a[j] < a[j + 1])
			{
				a[j] += a[j + 1], a[j + 1] = a[j] - a[j + 1], a[j] = a[j] - a[j + 1];
			}
		}
	}
}
void reverse(int a[], int k)
{
	for (int i = 0, j = k - 1; i < j; i++, j--)
	{
		a[i] += a[j], a[j] = a[i] - a[j], a[i] -= a[j];
	}
}
int combine(int a[], int k)
{
	int ret = 0;
	for (int i = 0; i < k; i += 1)
	{
		ret *= 10;
		ret += a[i];
	}
	return ret;
	/*int sum=0, t=1;
	while (k > 0)
	{
		sum += a[k - 1] * t;
		k--;
		t *= 10;
	}*/
}
int main()
{
	int oldn = -1,n;
	int a[6] = { 0 };
	cout << "输入一个各位数相异的四位数或三位数:" << endl;
	cin >> n;
	int k = getbits(n);
	while (n != oldn)
	{
		oldn = n;
		split(a, n, k);
		sortd(a, k);
		int n1 = combine(a, k);
		reverse(a, k);
		int n2 = combine(a, k);
		n = n1 - n2;
		cout << setw(k) << n1 << "-" << setw(k) << n2 << "=" << setw(k) << n << '\n';
	}
}