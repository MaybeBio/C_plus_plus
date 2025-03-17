#include <iostream>
using namespace std;

int fact(int n)
{
    int ret = 1;
    while (n)
    {
        ret *= n--;
    }
    return ret;
}

int com(int m, int r)
{
    return fact(m) / (fact(r) * fact(m - r));
}

int main()
{
    cout << "C(4,2) = " << com(4, 2) << endl;
    cout << "C(6,4) = " << com(6, 4) << endl;
    cout << "C(8,7) = " << com(8, 7) << endl;
}