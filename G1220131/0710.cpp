#include<iostream>
using namespace std;
#define N 4
void fsum(int a[N][N], int i, int j, int b[2] = { 0 })
{
	for (int row = 0; row < N; row++)
	{
		b[0] += a[i-1][row];
	}
	for (int col = 0; col < N; col++)
	{
		b[1] += a[col][j-1];
	}
}
int main()
{
	int i, j, b[2] = { 0 };
	cin >> i >> j;
	int a[][4] = { 3,6,4,6,8,3,1,3,4,7,1,2,2,9,5,3 };
	fsum(a, i, j, b);
	cout << "sum_row=" << b[0] <<'\t'<< "sum_col=" << b[1] << endl;
}