#include <iostream>
using namespace std;
class Time
{
    int hour;
    int minute;
    int second;
    static int baseHour;
    static int baseMinute;
    static int baseSecond;

    static int timeToSecond(Time t);

public:
    Time(int = 0, int = 0, int = 0);
    static int timeBaseDiffence(Time t);
    void show();

    friend int diffence(Time t1, Time t2);
};

int Time::baseHour = 1;
int Time::baseMinute = 10;
int Time::baseSecond = 10;

int Time::timeToSecond(Time t)
{
    return (t.hour * 3600 + t.minute * 60 + t.second);
}

Time::Time(int h, int m, int s) //注意：默认值在原型说明，定义时不能再写默认值
    : hour(h), minute(m), second(s)
{
}

int Time::timeBaseDiffence(Time t)
{
    //方法1:创建一个基于基准时间的对象，再调用timeToSecond函数获得总秒数
    Time tmp(baseHour, baseMinute, baseSecond);
    return timeToSecond(t) - timeToSecond(tmp);

    //方法2：方法1可以合并，这里减号后的式子应用了隐式调用构造函数创建临时对象的方法
    //    return timeToSecond(t) - timeToSecond(Time(baseHour, baseMinute, baseSecond));
}
void Time::show()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

//这是普通函数，被声明为类Time的友元
int diffence(Time t1, Time t2)
{
    return t1.timeToSecond(t1) - t2.timeToSecond(t2);
    //or:
    //return Time::timeToSecond(t1) - Time::timeToSecond(t2);
}

int main()
{
    Time t1(1, 11, 2), t2(1, 12, 50);
    cout << "t1: ";
    t1.show();
    cout << "t2: ";
    t2.show();
    cout << "t1 diff to basetime: " << Time::timeBaseDiffence(t1) << endl;
    cout << "t2 diff to basetime: " << Time::timeBaseDiffence(t2) << endl;
    cout << "t1 diff to t2: " << diffence(t1, t2) << endl;
}