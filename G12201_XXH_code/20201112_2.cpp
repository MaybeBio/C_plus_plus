#include <iostream>

int main()
{
    using namespace std;
    int x;
    //inputing a three-digit number
    cin >> x;

    //get the hundreds digit
    int a = x / 100;

    //get the tens digit
    int b = x % 100 / 10;

    //get the ones digit
    int c = x % 10;

    if (a < b)
    {
        //method of using the third variable
        int t = a;
        a = b, b = t;
    }

    if (a < c)
    {
        //method of not using third variable
        a ^= c, c ^= a, a ^= c;
    }

    if (b < c)
    {
        //another method of not using third variable
        b += c, c = b - c, b -= c;
    }

    int d = a * 100 + b * 10 + c;
    //cout << d << endl;
    cout << d - x << "\t\t" << d + x << endl;
}