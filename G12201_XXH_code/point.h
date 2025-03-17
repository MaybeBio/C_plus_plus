#pragma once

//点类
class Point
{
    float c[2]; //点坐标，c[0]横坐标,c[1]纵坐标
public:
    Point(float x = 0, float y = 0);
    void setCordinate(float x, float y);
    float getX();
    float getY();
    static float distance(Point &a, Point &b);
};

//多边形类：多点连线构成的封闭平面
class Polygon
{
    Point *ps; //点组，按需动态分配
    int count; //点数量
public:
    Polygon();
    Polygon(Polygon &);
    ~Polygon();
    void addPoint(float x, float y);
    void addPoint(const Point &);
    void addPoint(Point p[], int num); //同时增加多点
    float area();                      //计算多边形面积（假定是凸的）
};