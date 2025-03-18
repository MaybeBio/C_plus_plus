#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	while (1)
	{
		double x, y;
		cout << " ÇëÊäÈëxµÄÖµ\n" << endl;
		cin >> x;
		if (x < 1)
		{
			y = pow(x, 2.0);
		}
		if (1 <= x && x < 10)
		{
			y = 3 * x - 2;
		}
		if (x >= 10)
		{
			y = pow(x, 3.0) - 10 * pow(x, 2.0) + 28;
		}
		cout << "y=" << y << '\n' << endl;
	}
}