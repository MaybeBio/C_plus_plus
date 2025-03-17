#include <iostream>
using namespace std;

#define N 4
#define M 5

int sumBorder(int a[][M])
{
    int sum = 0;
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < M; col++)
        {
            if (0 == row || N - 1 == row || 0 == col || M - 1 == col)
            {
                sum += a[row][col];
            }
        }
    }
    return sum;
}

int main()
{
    int a[N][M] = {3, 6, 4, 6, 1, 8, 3, 1, 3, 2, 4, 7, 1, 2, 7, 2, 9, 5, 3, 3};
    cout << sumBorder(a) << endl;
}