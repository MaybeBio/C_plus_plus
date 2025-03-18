#include <iostream>
using namespace std;
class circle
{
private:
    double r;

public:
    circle(double R = 0)
    {
        setr(R);
        cout << "运行了构造函数 " << r << endl;
    }
    ~circle()
    {
        cout << "运行了析构函数 " << r << endl;
    }
    void setr(double R)
    {
        if (R > 0)
            r = R;
    }
    double getr()
    {
        return r;
    }
    void print()
    {
        cout << "圆的半径是： " << r << endl;
    }
};
circle x(100);
void f()
{
    static circle y(20);
}
int main()
{
    circle c(10), d; // 在同一个作用域内，先构造的后析构
    f();
    f();
    return 0;
}
