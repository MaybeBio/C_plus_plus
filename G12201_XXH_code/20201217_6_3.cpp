#include <iostream>
#include <cmath>
using namespace std;

double square(int x)
{
    return sqrt((double)x);
}

double dist(int x1, int y1, int x2, int y2)
{
    return square((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << dist(x1, y1, x2, y2) << endl;
}