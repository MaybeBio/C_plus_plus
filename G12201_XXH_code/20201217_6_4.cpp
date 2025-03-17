#define MIN2(x, y) ((x) < (y) ? (x) : (y))
#define MIN4(w, x, y, z) MIN2(MIN2(w, x), MIN2(y, z))

#include <iostream>

int main()
{
    int w, x, y, z;
    std::cin >> w >> x >> y >> z;
    std::cout << MIN4(w, x, y, z) << '\n';
}