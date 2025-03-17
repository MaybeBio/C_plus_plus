#include "point.h"
#include <cmath>

//////////////////////////////
// class point
//////////////////////////////
Point::Point(float x, float y)
{
    c[0] = x;
    c[1] = y;
}

void Point::setCordinate(float x, float y)
{
    c[0] = x;
    c[1] = y;
}

float Point::getX()
{
    return c[0];
}

float Point::getY()
{
    return c[1];
}

float Point::distance(Point &a, Point &b)
{
    //利用权限失效规则1
    float difx = a.c[0] - b.c[0];
    float dify = a.c[1] - b.c[1];
    return sqrt(difx * difx + dify * dify);
}

/////////////////////////////
//  class polygon
////////////////////////////

Polygon::Polygon()
    : ps(0), count(0)
{
}

Polygon::Polygon(Polygon &other)
    : ps(0), count(other.count)
{
    if (count)
    {
        ps = new Point[count];
        for (int i = 0; i < count; i++)
        {
            ps[i].setCordinate(other.ps[i].getX(),
                               other.ps[i].getY());
            //or: ps[i] = other.ps[i];
        }
    }
}

Polygon::~Polygon()
{
    if (ps)
        delete[] ps;
    ps = 0;
    count = 0;
}

void Polygon::addPoint(float x, float y)
{
    Point *psnew = new Point[count + 1];
    for (int i = 0; i < count; i++)
    {
        psnew[i].setCordinate(ps[i].getX(),
                              ps[i].getY());
    }
    psnew[count++].setCordinate(x, y);
    //or: psnew[count++] = Point(x, y);

    if (ps)
        delete[] ps;
    ps = psnew;
}

void Polygon::addPoint(const Point &other)
{
    Point *psnew = new Point[count + 1];
    for (int i = 0; i < count; i++)
    {
        psnew[i].setCordinate(ps[i].getX(),
                              ps[i].getY());
    }
    psnew[count++] = other;
    //如下代码不行，因为other是常对象，只能调用常函数
    //psnew[count++].setCordinate(other.getX(), other.getY());

    if (ps)
        delete[] ps;
    ps = psnew;
}

void Polygon::addPoint(Point p[], int num)
{
    for (int i = 0; i < num; i++)
        addPoint(p[i]); //or:addPoint(p[i].getX(), p[i].getY());
}

float Polygon::area()
{
    if (count < 3)
        return 0;

    //利用海伦公式
    float s1, s2, s3, s, ret = 0;
    //以ps[0]为中心，将凸多边形划分为多个三角形
    s1 = Point::distance(ps[0], ps[1]);

    int i = 1;
    do
    {
        s2 = Point::distance(ps[i], ps[i + 1]);
        s3 = Point::distance(ps[0], ps[i + 1]);
        s = 0.5 * (s1 + s2 + s3);
        ret += sqrt(s * (s - s1) * (s - s2) * (s - s3));
        s1 = s3;
        i++;
    } while (i < count - 1);
    return ret;
}