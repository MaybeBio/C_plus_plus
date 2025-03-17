#include"ex1002.h"
#include<iostream>
using namespace std;
int main()
{
	crect r1, r2;
	int a, b, c, d;
	r1.set(100, 300, 50, 200);
	r1.get(&a, &b, &c, &d);
	cout << "left=" << a << '\t' << "top = " << b << '\t' << "right=" << c << '\t' << "bottom=" << d << endl;
	r1.print();
	r2 = r1;
	r2.print();
	return 0;

}