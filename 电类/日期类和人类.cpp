#include <iostream>
using namespace std;

class mydate
{
    int year, month, day;

public:
    mydate(int _year, int _month, int _day)
    {
        year = _year, month = _month, day = _day;
    }
    void print()
    {
        cout << year << '-' << month << '-' << day << endl;
    }
};

class person
{
    char name[20];
    mydate birth, death;

public:
    person(const char *_name, int by, int bm, int bd,
           int dy, int dm, int dd) : birth(by, bm, bd), death(dy, dm, dd)
    {
        strcpy(name, _name);
    }
    void print()
    {
        cout << "姓名：" << name << endl;
        cout << "生日：";
        birth.print();
        cout << "忌日：";
        death.print();
    }
};

int main()
{
    person p("马克思", 1818, 5, 5, 1883, 3, 14);
    p.print();
}
