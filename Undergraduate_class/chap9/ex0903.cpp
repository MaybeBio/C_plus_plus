#include<iostream>
using namespace std;
void swap(int* px, int* py)
{
	int t;
	t = *px;
	*px = *py;
	*py = t;
}
int main()
{
	int x = 3, y = 9, * p1, * p2;
	p1 = &x;
	p2 = &y;
	swap(p1, p2);
	cout << x << ',' << y << endl;
	return 0;

}