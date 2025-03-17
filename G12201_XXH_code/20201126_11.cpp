#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    //1st
    cout << "1st:" << endl;
    for (int i = 0; i < m; ++i)
    {
        if (0 == i || m - 1 == i)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << '*';
            }
        }
        else
        {
            cout << '*';
            for (int j = 1; j < n - 1; ++j)
            {
                cout << ' ';
            }
            cout << '*';
        }
        cout << endl;
    }

    //2nd
    cout << "2nd:\n";
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            char c = ' ';
            if (0 == i || m - 1 == i || 0 == j || n - 1 == j)
            {
                c = '*';
            }
            cout << c;
        }
        cout << endl;
    }
}