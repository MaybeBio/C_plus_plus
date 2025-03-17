
#define SQUARE(x) sqrt((double)(x))
#define DIST(x1, y1, x2, y2) SQUARE(((x1) - (x2)) * ((x1) - (x2)) + ((y1) - (y2)) * ((y1) - (y2)))

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << DIST(x1, y1, x2, y2) << endl;
}