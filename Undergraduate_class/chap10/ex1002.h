#pragma once
#include<cmath>
#include<iostream>
using namespace std;
class crect
{
private:
	int left, right, top, bottom;
public:
	void set(int, int, int, int);
	void get(int* l, int* t, int* r, int* b)
	{
		*l = left;
		*t = top;
		*r = right;
		*b = bottom;
	}
	void print()
	{
		cout << "area=" << abs(right - left) * abs(bottom - top) << endl;
	}
};
void crect::set(int l, int t, int r, int b)
{
	left = l;
	top = t;
	right = r;
	bottom = b;

}
