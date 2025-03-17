#include <iostream>

int main()
{
    using namespace std;

    float weight, distance;
    cin >> weight >> distance;

    float price = 0;

    if (distance > 200)
    {
        price = 1.8 * 100 + 1.5 * 100 + 1.2 * (distance - 200);
    }
    else if (distance <= 100)
    {
        price = 1.8 * distance;
    }
    else
    {
        price = 1.8 * 100 + 1.5 * (distance - 100);
    }

    cout << weight * price << endl;
}