#include <iostream>
using namespace std;

//添加构造函数的类
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

public:
    Date();
    Date(int);
    Date(int, int);
    Date(int, int, int);
    Date(Date &);
};

//列表初始化，这里设置缺省的值是1970.1.1
Date::Date()
    : year(1970), month(1), day(1)
{
}

Date::Date(int y)
    : year(y), month(1), day(1)
{
}

Date::Date(int y, int m)
    : year(y), month(m), day(1)
{
}

Date::Date(int y, int m, int d)
    : year(y), month(m), day(d)
{
}

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

Date::Date(Date &other)
{
    //成员逐个赋值
    year = other.year;
    month = other.month;
    day = other.day;
}
/*
//or：列表方式
Date::Date(Date &other)
    : year(other.year), month(other.month), day(other.day)
{
}

//or：直接利用浅拷贝
Date::Date(Date &other)
{
    //没有指针需要维护，直接使用浅拷贝即可
    *this = other;
}
*/
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
    Date date1; //调用无参数构造函数
    print(date1);
    //
    Date date2(2015); //调用一个参数的构造函数
    print(date2);

    Date date3(2015, 2); //调用两个参数的构造函数
    print(date3);

    Date date4(2015, 2, 28); //调用三个参数的构造函数
    print(date4);

    date4.increaseDay();
    cout << "date4, after increase one day, the date is: ";
    print(date4);

    Date date5 = date4; //or:Date date5(date4)  or: Date date5{date4}
    print(date5);
}
