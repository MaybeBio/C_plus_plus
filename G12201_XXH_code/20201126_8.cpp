#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 1;
    double res = 1.;
    while (n != 1000)
    {
        res *= (2. * n) / (2. * n - 1.) * (2. * n) / (2. * n + 1.);
        n++;
    }
    cout << fixed;
    cout << "n=1000,  pi=" << res << endl;
    //
    res = 1.;
    n = 1;
    while (n != 10000)
    {
        res *= (2. * n) / (2. * n - 1.) * (2. * n) / (2. * n + 1.);
        n++;
    }
    cout << "n=10000, pi=" << res << endl;
}