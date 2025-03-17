#pragma once
#include<cstring>
class person
{
private:
	char name[20];
	char sex;
	int age;
public:
	void setdata(const char na[], char s, int a)
	{
		strcpy_s(name,strlen(na)+1, na);
		sex = s;
		age = a;
	}
	void getname(char* na)
	{
		strcpy_s(na,strlen(name) +1,name);
	}
	char getsex()
	{
		return sex;
	}
	int getage()
	{
		return age;
	}

};