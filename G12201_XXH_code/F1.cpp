#include <iostream>
using namespace std;

int main()
{
    double f1 = 0.1, f2 = 0.15;
    int count = 0;
    double sum = 0;
    do
    {
        sum += f1 / f2;
        double t = f1 + f2;
        f1 = f2;
        f2 = t;
    } while (++count < 21);
    cout << sum << endl;
}
