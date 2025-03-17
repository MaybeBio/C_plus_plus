#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2)
    {
        for (int row = 0; row < n; ++row)
        {
            for (int col = 0; col < n; ++col)
            {
                if (col == row || col == n - 1 - row)
                {
                    cout << '*';
                }
                else
                {
                    cout << ' ';
                }
            }
            cout << '\n';
        }
    }
    else
    {
        cout << "error!\n";
    }
}