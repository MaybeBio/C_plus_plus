#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    float px1 = -3.1;
    float py1 = 4.5;
    float px2 = 5.12;
    float py2 = 2.34;
    float px3 = -1.03;
    float py3 = -2.77;

    float diffx = px1 - px2;
    float diffy = py1 - py2;
    float edge1 = sqrt(diffx * diffx + diffy * diffy);

    diffx = px1 - px3;
    diffy = py1 - py3;
    float edge2 = sqrt(diffx * diffx + diffy * diffy);

    diffx = px2 - px3;
    diffy = py2 - py3;
    float edge3 = sqrt(diffx * diffx + diffy * diffy);

    if (edge1 + edge2 > edge3 &&
        edge1 + edge3 > edge2 &&
        edge2 + edge3 > edge1)
    {
        float s = (edge1 + edge2 + edge3) / 2.0;
        float area = sqrt(s * (s - edge1) * (s - edge2) * (s - edge3));
        cout << area << endl;
    }
    else
    {
        cout << "parameter is error!\n";
    }
}