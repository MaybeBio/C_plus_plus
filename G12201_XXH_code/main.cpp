#include "point.h"
#include <iostream>

int main()
{
    Polygon poly1;
    poly1.addPoint(0, 0);
    poly1.addPoint(Point(0, 1));
    Point p[3] = {Point(1, 4), Point(2, 4), Point(4, 1)};
    poly1.addPoint(p, 3);
    std::cout << "area of polygon1: " << poly1.area() << std::endl;
    //
    Polygon poly2 = poly1;
    poly2.addPoint(3, 0);
    std::cout << "area of polygon2: " << poly2.area() << std::endl;
}