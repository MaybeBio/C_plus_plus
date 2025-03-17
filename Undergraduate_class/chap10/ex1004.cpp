#include<iostream>
#include"ex1004.h"
using namespace std;
int main()
{
	date d1;
	date d2(2021);
	date d3(20211, 7);
	date d4(3099, 7, 23);
	d1.showdate();
	d2.showdate();
	d3.showdate();
	d4.showdate();
	return 0;
}
