#include <iostream>
using namespace std;

class fraction
{
    int numerator, denominator; //分子 分母
public:
    fraction(int _numerator = 1, int _denominator = 1)
    {
        numerator = _numerator;
        denominator = _denominator;
        cout << "双参构造\n";
    }
    fraction(double d)
    {
        int n = 1;
        while (d * n != int(d * n))
            n *= 10;
        numerator = int(d * n);
        denominator = n;
        cout << "单参构造\n";
    }
    fraction(const fraction &f)
    {
        numerator = f.numerator;
        denominator = f.denominator;
        cout << "复制构造\n";
    }
    operator double()
    {
        return 1.0 * numerator / denominator;
    }
    void print()
    {
        cout << numerator << '/' << denominator << endl;
    }
};

int main()
{
    fraction f1(1, 3);
    double x = f1;
    cout << x << endl;
}
