#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point() : x(0), y(0)
    {
    }
    void setPoint(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void getPoint(int *px, int *py)
    {
        *px = x;
        *py = y;
    }
    void show()
    {
        cout << "P:" << x << "," << y;
    }
};

class Circle : public Point
{
    int radius;

public:
    Circle() : Point(), radius(0)
    {
    }
    void setRadius(int r)
    {
        radius = r;
    }
    void getRadius(int &r)
    {
        r = radius;
    }
    double area()
    {
        return 3.14 * radius * radius;
    }
    void show()
    {
        Point::show();
        cout << ", r: " << radius << ", area: " << area();
    }
};

class Cylinder : public Circle
{
    int height;

public:
    Cylinder() : Circle(), height(0)
    {
    }
    void setHeight(int h)
    {
        height = h;
    }
    void getHeight(int *h)
    {
        *h = height;
    }
    double volume()
    {
        return Circle::area() * height;
    }
    void show()
    {
        Circle::show();
        cout << ", h: " << height << ", v: " << volume();
    }
};

int main()
{
    Cylinder cy;
    cy.setPoint(1, 2);
    cy.setRadius(3);
    cy.setHeight(4);
    cy.show();
    cout << endl;
}