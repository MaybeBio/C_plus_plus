#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //1st
    cout << "1st: ";
    for (int n = 100; n < 1000; ++n)
    {
        int m = n, mr = 0;
        while (m)
        {
            int t = m % 10;
            mr += t * t * t;
            m /= 10;
        }
        if (n == mr)
        {
            cout << setw(5) << n;
        }
    }
    cout << endl;

    //2nd
    cout << "2nd: ";
    for (int a = 1; a < 10; ++a)
    {
        for (int b = 0; b < 10; ++b)
        {
            for (int c = 0; c < 10; ++c)
            {
                int mr = 100 * a + 10 * b + c;
                if (a * a * a + b * b * b + c * c * c == mr)
                {
                    cout << setw(5) << mr;
                }
            }
        }
    }
    cout << endl;
}