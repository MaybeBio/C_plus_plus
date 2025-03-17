#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double e = 1.0;
    int i = 1;

    //1st method
    int t = 1;
    while (t < 1e7)
    {
        t *= i++;
        e += 1.0 / t;
        //
        //e += 1.0 / (t *= i++);
    }
    cout << fixed;
    cout << "e = " << e << endl;

    //2nd method
    e = 1.0;
    i = 1;
    double tt = 1.0;
    while (tt > 1e-7)
    {
        tt *= 1.0 / i++;
        e += tt;
        //
        //e += (tt *= 1.0 / i++);
    }
    cout << "e = " << e << endl;
}