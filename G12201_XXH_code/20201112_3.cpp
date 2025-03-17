#include <iostream>
#include <cmath>

int main()
{
    using namespace std;
    float a, b, c;
    cin >> a >> b >> c;

    //according to task, the coefficient must be adjust
    b = -b;

    float delta = b * b - 4. * a * c;
    float v1 = -b / (2. * a);
    if (delta) // it means the equation has two different roots
    {
        float v2 = sqrt(fabs(delta)) / (2. * a);

        if (delta > 0) //real root
        {
            cout << "y1 = " << v1 + v2 << " , y2 = " << v1 - v2 << endl;
        }
        else //complex root
        {
            cout << "y1 = " << v1 << "+i*" << v2 << " , y2 = " << v1 << "-i*" << v2 << endl;
        }
    }
    else
    {
        cout << "y1 = y2 = " << v1 << endl;
    }
}