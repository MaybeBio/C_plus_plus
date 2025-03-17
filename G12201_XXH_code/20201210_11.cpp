#include <iostream>
using namespace std;

void pr_rev(int x)
{
    if (x >= 0 && x <= 9)
    {
        cout << x;
        return;
    }

    cout << x % 10;
    pr_rev(x / 10);
}

int main()
{
    int x;
    cin >> x;
    pr_rev(x);
}