#include <iostream>
#include <cstring>
using namespace std;

void itoa(int n, char *s)
{
    int i = 0;
    while (n) //先倒序获得每位数，转字符后存数组中
    {
        s[i++] = n % 10 + 48;
        n /= 10;
    }
    s[i--] = 0; //补充结束符，i变为最后一个有效字符下标
    //倒置数组，恢复原数据序
    for (int j = 0; j < i; j++, i--)
    {
        char c = s[j];
        s[j] = s[i], s[i] = c;
    }
}

class Date
{
    int year, month, day;

public:
    Date() : year(0), month(0), day(0)
    {
    }
    void setDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void getDate(char *s)
    {
        itoa(year, s);
        strcat(s, "/");
        itoa(month, s + strlen(s));
        strcat(s, "/");
        itoa(day, s + strlen(s));
    }
};

class Time
{
    int hour, minute, second;

public:
    Time() : hour(0), minute(0), second(0)
    {
    }
    void setTime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void getTime(char *s)
    {
        itoa(hour, s);
        strcat(s, ":");
        itoa(minute, s + strlen(s));
        strcat(s, ":");
        itoa(second, s + strlen(s));
    }
};

class DateTime : public Date, public Time
{
public:
    DateTime() : Date(), Time()
    {
    }
    void setDateTime(int y, int mon, int d, int h, int min, int s)
    {
        setDate(y, mon, d);
        setTime(h, min, s);
    }
    void getDateTime(char *s)
    {
        getDate(s);
        strcat(s, "  ");
        getTime(s + strlen(s));
    }
};

int main()
{
    DateTime dt;
    dt.setDateTime(2015, 1, 30, 12, 30, 20);

    char s[32] = {0};
    dt.getDateTime(s);
    cout << s << endl;

    Date &date = dt; //赋值兼容性规则，实质上date就是dt中的基类Date部分
    date.getDate(s);
    cout << s << endl;

    Time *ptime = &dt; //赋值兼容性规则，实质上ptime指向的是dt中的基类Time部分
    ptime->getTime(s);
    cout << s << endl;

    //注意：主函数中实质仅有一个对象实例dt！
}