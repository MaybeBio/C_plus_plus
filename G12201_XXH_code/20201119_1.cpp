#include <iostream>
using namespace std;

int main()
{
    cout << "----  input x value:";
    float x;
    while (cin >> x) //非数情况下条件为false，循环终止
    {
        float y;
        if (x < 1)
        {
            y = x * x;
        }
        else if (x < 10) //隐含条件x>=1
        {
            y = 3. * x - 2.;
        }
        else
        {
            y = x * x * x - 10. * x * x + 28.;
        }
        cout << "y(" << x << ")=" << y << endl;
        cout << "----  input x value:";
    }
}