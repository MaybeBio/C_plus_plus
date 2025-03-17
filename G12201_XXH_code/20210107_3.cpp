#include <iostream>
using namespace std;

int main()
{
    int a[10], *p = a;
    int min;
    while (p < a + 10) //a+10是紧接着a[9]后的指针（数组外）
    {
        cin >> *p++;
    }
    min = a[0];
    p = a + 1;
    while (p < a + 10)
    {
        if (*p < min)
            min = *p;
        p++;
    }
    for (p = a; p < a + 10; p++)
    {
        cout << *p << '\t';
    }
    cout << "\nmin = " << min << endl;
}