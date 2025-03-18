#include <iostream>
using namespace std;

class myarray
{
    int len; //数组的长度
    int *p;  //指向动态分配内存的指针

public:
    myarray() { len = 0, p = nullptr; }
    myarray(int l) { len = l, p = new int[len]; } //错误1
    ~myarray() { delete[] p; }                    //错误2
    myarray(const myarray &my)                    //错误3
    {
        len = my.len;
        if (len == 0)
            p = nullptr;
        else
        {
            p = new int[len];
            for (int i = 0; i < len; ++i)
                p[i] = my.p[i];
        }
    }
    myarray &operator=(const myarray &my)
    {
        if (this == &my)
            return *this;
        delete[] p;
        len = my.len;
        if (len == 0)
            p = nullptr;
        else
        {
            p = new int[len];
            for (int i = 0; i < len; ++i)
                p[i] = my.p[i];
        }
        return *this;
    }
    void print()
    {
        for (int i = 0; i < len; ++i) //错误4
            cout << p[i] << ' ';
        cout << endl;
    }
    int &operator[](int n) //错误5
    {
        static int temp;
        if (n < 0 || n > len - 1)
            return temp;
        return p[n];
    }
    bool operator<(const myarray &my)
    {
        int i = 0;
        while (i < len && i < my.len)
        {
            if (p[i] < my.p[i])
                return true;
            else if (p[i] > my.p[i])
                return false;
            ++i;
        }
        return i < my.len ? true : false;
    }
};

int main()
{
    myarray my(10);
    for (int i = 0; i < 10; ++i)
        my[i] = i + 1;
    my.print();
    myarray m2 = my;
    m2.print();
    myarray m3;
    m3 = my;
    m3.print();
    cout << (my < m2) << endl;
    m2[1] = 3;
    cout << (my < m2) << endl;
    m2[1] = 1;
    cout << (my < m2) << endl;
    myarray m4(5);
    for (int i = 0; i < 5; ++i)
        m4[i] = i + 1;
    cout << (my < m4) << endl;
}