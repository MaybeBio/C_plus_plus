#include<iostream>
using namespace std;
int sum(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
int main() {
	int a, b, c;
	a = 3, b = 5;
	c = sum(a, b);
	cout << c << '\n';
	return 0;
}