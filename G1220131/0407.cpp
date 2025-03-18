#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double e = 1.0;
	int t = 1;
	int i = 1;

	while (t <= 1e7)
	{
		t *= i++;
		e += 1.0 / t;
	}
	cout << fixed << setprecision(50);
	cout << "e=" << e << endl;
	system("pause");
}