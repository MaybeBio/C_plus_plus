#include <iostream>
#include <iomanip>
using namespace std;

int fib(int n)
{
    int ret = 1;
    int f1 = 1, f2 = 1;
    int i = 2;
    while (i < n)
    {
        ret = f1 + f2;
        f1 = f2;
        f2 = ret;
        i++;
    }
    return ret;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << setw(6) << fib(i);
        if (0 == i % 5)
        {
            cout << endl;
        }
    }
    cout << endl;
}