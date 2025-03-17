#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
    char name[20];
    char num[20];
    int cpp, math, phys;

public:
    Student()
        : cpp(0), math(0), phys(0)
    {
        name[0] = 0; //构造一个空串
        num[0] = 0;
    }

    friend istream &operator>>(istream &keyb, Student &obj);
    friend ostream &operator<<(ostream &scrn, const Student &obj);

    operator int();
};

istream &operator>>(istream &keyb, Student &obj)
{
    keyb >> obj.name >> obj.num >> obj.cpp >> obj.math >> obj.phys;
    return keyb;
}
ostream &operator<<(ostream &scrn, const Student &obj)
{
    scrn << setw(20) << obj.name << setw(20) << obj.num << setw(10) << obj.cpp << setw(10) << obj.math << setw(10) << obj.phys;
    return scrn;
}

Student::operator int()
{
    return (cpp + math + phys);
}

int main()
{
    Student s[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        cin >> s[i];
    }

    for (i = 0; i < 3; i++)
    {
        cout << s[i] << " ,total: " << (int)s[i] << endl;
    }
}