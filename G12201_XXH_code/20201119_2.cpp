#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (x < y && x < z)
    {
        cout << x << ' ';
        y < z ? cout << y << ' ' << z << endl : cout << z << ' ' << y << endl;
    }
    else if (y < x && y < z)
    {
        cout << y << ' ';
        x < z ? cout << x << ' ' << y << endl : cout << z << ' ' << x << endl;
    }
    else
    {
        cout << z << ' ';
        x < y ? cout << x << ' ' << y << endl : cout << y << ' ' << x << endl;
    }
}