#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int f1 = 1;
    int f2 = 1;
    double sum = 0.;

    while (true)
    {
        sum += f2 / (double)f1;
        if (20 == ++n)
        {
            break;
        }
        //
        int t = f1 + f2;
        f1 = f2;
        f2 = t;
    }
    cout << fixed;
    cout << "sum = " << sum << endl;
}