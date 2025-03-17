
#pragma once
using namespace std;
#include<iostream>
class date
{
	int year, month, day;
public:
	date()
	{
		year = 2022;
		month = 8;
		day = 28;
	}
	date(int y)
	{
		year = y;
		month = 8;
		day = 28;
	}
	date(int y, int m)
	{
		year = y;
		month = m;
		day = 28;
	}
	date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void showdate()
	{
		cout << year << '.' << month << '.' << day << endl;
	}

};
