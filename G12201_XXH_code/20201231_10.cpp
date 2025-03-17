#include <iostream>
using namespace std;

#define N 4

void fsum(int a[][N], int i, int j, int b[])
{
    b[0] = b[1] = 0;
    for (int k = 0; k < N; k++)
    {
        b[0] += a[i][k];
        b[1] += a[k][j];
    }
}

int main()
{
    int a[N][N] = {3, 6, 4, 6, 8, 3, 1, 3, 4, 7, 1, 2, 2, 9, 5, 3};
    int b[2] = {0};
    int row, col;
    cin >> row >> col;
    fsum(a, row, col, b);
    cout << b[0] << ' ' << b[1] << '\n';
}