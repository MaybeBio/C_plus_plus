#include<iostream>
#include"ex1001.h"
using namespace std;
int main()
{
	person a, * pa;
	char na[20];
	a.setdata("cheng", 'F', 20);
	a.getname(na);
	cout << "name:" << na << '\t';
	cout << "sex:" << a.getsex() << '\t';
	cout << "age:" << a.getage() << endl;
	pa = &a;
	pa->setdata("zhang", 'M', 21);
	pa->getname(na);
	cout << "name:" << na << '\t';
	cout << "sex:" << pa->getsex() << '\t';
	cout << "age:" << pa->getage() << endl;
	return 0;
}