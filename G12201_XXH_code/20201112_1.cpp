#include <iostream>
#include <iomanip>

int main()
{
    using namespace std;
    int a, b, c;
    cin >> oct >> a;
    cin >> hex >> b;
    cin >> dec >> c;

    cout << setw(8) << a << setw(8) << b << setw(9) << c << endl;
}
