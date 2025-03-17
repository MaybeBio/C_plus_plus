#include <iostream>

int gcd(int x, int y)
{
    if (x < y)
    {
        x += y, y = x - y, x -= y;
    }
    int r = x % y;
    while (r)
    {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}

int main()
{
    int a[8] = {24, 1007, 956, 705, 574, 371, 416, 35};
    int b[8] = {60, 631, 772, 201, 262, 763, 1000, 77};
    int c[8] = {0};
    for (int i = 0; i < 8; i += 1)
    {
        c[i] = gcd(a[i], b[i]);
        std::cout << c[i] << "  ";
    }
    std::cout << "\n";
}