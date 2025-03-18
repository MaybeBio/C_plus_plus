#include<iostream>
#include<cmath>
using namespace std;
void input(double F[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> F[i];
	}
}
double aver(double F[],int n)
{
	double sum=0.0;
	for (int i=0; i < n; i++)
	{
		sum += F[i];
	}
	return sum / n;
}
double stddev(double F[],int n)
{
	double M = aver(F, n), sum=0.0;
	for (int i=0; i < n; i++)
	{
		sum += (F[i] - M) * (F[i] - M);
	}
	return sqrt(sum / n);
}
int main()
{
	int n;
	cin >> n;
	if (n > 100)
	{
		cout << "请输入维数100以内的数组" << endl;
		exit(0);
	}
	double F[100] = { 0 };
	input(F, n);
	cout << stddev(F, n) << endl;;
}