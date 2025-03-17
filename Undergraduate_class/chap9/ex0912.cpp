#include"ex0912.h"
#include<iostream>
using namespace std;
int main()
{
	student stu[3] =
	{
		{1,"A",18,'M',90},
		{2,"B",19,'M',91},
		{3,"C",17,'M',92}
	};
	student* p;
	p = stu;
	for (int i = 0; i < 3; i++, p++)
	{
		cout << p->age << '\t';
		cout << p->name << '\t';
		cout << (*p).num << '\t';
		cout << (*p).score << '\t';
		cout << p->sex << endl;
	}
	return 0;
}