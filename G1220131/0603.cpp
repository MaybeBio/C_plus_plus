#include<iostream>
#include<cmath>
using namespace std;
double square(int x)
{
	return x * x;
}
double dist(int x1, int y1, int x2, int y2)
{
	return sqrt(square(x1 - x2) + square(y1 - y2));
}
int main()
{
	int x1, y1, x2, y2;
	cout << "输入四个值，分别为x1,y1,x2,y2" << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << dist(x1, y1, x2, y2) << endl;
}