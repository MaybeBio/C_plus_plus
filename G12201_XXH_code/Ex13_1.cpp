#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex(float re = 0, float im = 0) : real(re), imag(im) {}

    Complex &operator=(const Complex &); //重载=，非构造复制函数
    Complex &operator+=(Complex &);
    friend Complex operator+(Complex &, Complex &);
    friend Complex operator-(Complex &, Complex &);
    void show();
    float operator*(Complex &);
    friend Complex &operator-=(Complex &, Complex &);
};

Complex &Complex::operator=(const Complex &right) //重载=，非构造复制函数
{
    //左操作数就是this指针，实际上也是两个操作数均由参数带入的
    real = right.real, imag = right.real; //这里也可以利用了浅拷贝，  *this = right;
    return (*this);                       //赋值运算的值就是左操作数
}
Complex &Complex::operator+=(Complex &right)
{
    //左操作数就是this指针，实际上也是两个操作数均由参数带入的
    real += right.real;
    imag += right.imag;
    return (*this); //复合赋值运算的值也是左操作数
}
Complex operator+(Complex &left, Complex &right)
{
    //这是友元函数，没有this，两个操作数均由参数显式带入
    //+法运算不会改变参与运算的变量的值，对+法运算结果需要新构建变量返回(这里函数返回值类型不能是引用)
    Complex t;
    t.real = left.real + right.real;
    t.imag = left.imag + right.imag;
    return t;
    //or: Complex t(left); t+=right; return t;
    //or: return Complex(left.real + right.real,left.imag + right.imag);
}
Complex operator-(Complex &left, Complex &right)
{
    //同operator+函数
    return Complex(left.real - right.real, left.imag - right.imag);
}
void Complex::show()
{
    cout << "(" << real << "," << imag << ")" << endl;
}
float Complex::operator*(Complex &right)
{
    return real * right.real + imag * right.imag;
}
Complex &operator-=(Complex &left, Complex &right)
{
    //友元函数，没有this，两个操作数均由参数显式带入
    //-=运算要改变左操作数的值，-=表达式的值就是左操作数；
    //左操作数是由参数带入的，因此左操作数不是函数作用域内变量，可以用引用形式返回
    left.real -= right.real;
    left.imag -= right.imag;
    return left;
}

int main()
{
    Complex C1(1.1, 2.2);
    Complex C2 = C1; //这里调用C2的复制构造函数
    C2.show();
    Complex C3;
    C3 = C2 = C1; //这里调用C2的operator=、C3的operator=
    C3.show();
    C3 += C2 += C1; //这里调用C2的operator+=、C3的operator+=
    C2.show();
    C3.show();
    C3 -= C2 -= C1; //这里调用C2的operator-=、C3的operator-=
    Complex C4;
    C4 = C2 + C1; //这里调用C2的operator+、C4的operatr=，C1和C2的值不会变化

    float v = C1 * C2; //这里调用C1的operator*
}