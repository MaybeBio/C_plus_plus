#include <iostream>

int main()
{
    using namespace std;
    //1st
    int sum = 0;
    for (int i = 1; i <= 100; ++i)
    {
        if (0 == i % 2)
        {
            sum += i;
        }
    }
    cout << "1st, sum = " << sum << endl;

    //2nd
    sum = 0;
    for (int i = 2; i <= 100; i += 2)
    {
        sum += i;
    }
    cout << "2nd, sum = " << sum << endl;

    //3rd
    sum = 0;
    for (int i = 1; i <= 50; ++i)
    {
        sum += i * 2;
    }
    cout << "3rd, sum = " << sum << endl;

    //4th, for checking
    cout << "4th, for checking, sum =" << (2 + 100) * 25 << endl;
}