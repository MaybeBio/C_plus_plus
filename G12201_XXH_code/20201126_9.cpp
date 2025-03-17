#include <iostream>
using namespace std;

int main()
{
    double x;
    cin >> x;

    int sig = -1; //signal
    int n = 1;
    double item = x;
    double res = x;

    while (item >= 1.e-7)
    {
        item *= (2. * n - 1) / (2. * n) * x * x * (2. * n - 1) / (2. * n + 1);
        res += sig * item;
        sig *= -1;
        n++;
    }
    cout << "arcsh(" << x << ") = " << res << endl;
}