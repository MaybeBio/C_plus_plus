#pragma once
#include<iostream>
using namespace std;
class student
{
	char* name;
	int age;
public:
	student(const char* namep, int ag)
	{
		age = ag;
		if (namep)
		{
			name = new char[strlen(namep) + 1];
			strcpy_s(name, strlen(namep) + 1, namep);

		}
		else
		{
			name = NULL;

		}
	}
	~student()
	{
		if (name)
		{
			delete[]name;
		}
	}
	void show()
	{
		cout << name << ',' << age << endl;

	}
	student(const student& stu)
	{
		age = stu.age;
		if (stu.name)
		{
			name = new char[strlen(stu.name) + 1];
			strcpy_s(name, strlen(stu.name) + 1, stu.name);
		}
		else
		{
			name = NULL;
		}
	}

};