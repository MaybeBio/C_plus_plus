#pragma once
#include<iostream>
using namespace std;
class sample
{
	int x, y;
public:
	sample(int a=0,int b=0):x(a),y(b){}
	void show() { cout << "x=" << x << ",y=" << y << endl; }
	friend int main();
};