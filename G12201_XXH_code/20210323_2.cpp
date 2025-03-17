#include <iostream>
using namespace std;

class Date
{
protected:
    int year, month, day;

public:
    void setYMD(int, int, int);
    void getYMD(int *, int *, int *);
    void getYMD(int &, int &, int &);
    bool leapYear();
    void increaseDay();
};
void Date::setYMD(int y, int m, int d)
{
    year = y;
    month = m;
    day = d;
}
void Date::getYMD(int *pyear, int *pmonth, int *pday)
{
    *pyear = year;
    *pmonth = month;
    *pday = day;
}
void Date::getYMD(int &y, int &m, int &d)
{
    y = year;
    m = month;
    d = day;
}
bool Date::leapYear()
{
    return (!(year % 400) || (year % 100) && !(year % 4));
}
void Date::increaseDay()
{
    int ModOfMonths = 13; //月份的模数（开区间月份的上限值）
    int ModOfDays = 32;   //天数的模数（开区间天数的上限值）
    //按月份更新
    switch (month)
    {
    case 4:
    case 6:
    case 9:
    case 11:
        ModOfDays = 31;
        break;
    case 2:
        ModOfDays = leapYear() ? 30 : 29;
    }

    day += 1;
    //进位的月数
    int dm = day / ModOfDays;
    //新的日
    day = dm + day % ModOfDays;
    //
    month += dm;
    int dy = month / ModOfMonths;
    month = dy + month % ModOfMonths;
    //
    year += dy;
}

//一般函数，用于输出规整的日期,把要输出的对象传递给函数
//参数用Date类型的引用，跟int、double引用一样
void print(Date &date)
{
    int y, m, d;
    //获得日期值
    date.getYMD(y, m, d);
    cout << y << "." << m << "." << d << endl;
}

int main()
{
    int year, month, day;
    cout << "input year month and day:";
    cin >> year >> month >> day;

    Date date;
    date.setYMD(year, month, day);
    print(date);
    date.increaseDay();
    cout << "after increase one day, the date is: ";
    print(date);
}
