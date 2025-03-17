#include <iostream>
using namespace std;

float Hermite(int n, float x)
{
    //method 1:
    // if (0 == n)
    // {
    //     return 1.f;
    // }
    // else if (1 == n)
    // {
    //     return (2.f * x);
    // }
    //return (2.f * x * Hermite(n - 1, x) - 2.f * (n - 1) * Hermite(n - 2, x));

    //method 2:
    switch (n)
    {
    case 0:
        return 1.f;
    case 1:
        return (2.f * x);
    }

    return (2.f * x * Hermite(n - 1, x) - 2.f * (n - 1) * Hermite(n - 2, x));
}

int main()
{
    cout << "H(0,3.6) = " << Hermite(0, 3.6) << endl;
    cout << "H(1,3.6) = " << Hermite(1, 3.6) << endl;
    cout << "H(2,3.6) = " << Hermite(2, 3.6) << endl;
    cout << "H(3,3.6) = " << Hermite(3, 3.6) << endl;
    cout << "H(4,3.6) = " << Hermite(4, 3.6) << endl;
}