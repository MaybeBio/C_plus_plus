#include<iostream>
using namespace std;

int main()
{
	double n, t = 2;
	double pi = 1;
	cout << "ÊäÈënµÄÖµ" << "n=" << endl;
	cin >> n;
	while (t <= 2 * n)
	{
		pi *= t * t / (t - 1) / (t + 1);
		t += 2;
	}
	cout << pi << endl;
	system("pause");
}