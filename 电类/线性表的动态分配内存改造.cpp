#include <iostream>
using namespace std;

template <typename T>
class seqlist
{
public:
    T *slist;
    int maxsize, count;

public:
    seqlist()
    {
        maxsize = 20;
        count = 0;
        slist = new T[maxsize];
    }
    seqlist(int n)
    {
        maxsize = n;
        count = 0;
        slist = new T[maxsize];
    }
    seqlist(int n, const T &x)
    {
        maxsize = n;
        count = n;
        slist = new T[maxsize];
        for (int i = 0; i < count; ++i)
            slist[i] = x;
    }
    seqlist(const seqlist &s)
    {
        maxsize = s.maxsize;
        count = s.count;
        slist = new T[maxsize];
        for (int i = 0; i < count; ++i)
            slist[i] = s.slist[i];
    }
    seqlist &operator=(const seqlist &s)
    {
        if (&s == this)
            return *this;
        delete[] slist;
        maxsize = s.maxsize;
        count = s.count;
        slist = new T[maxsize];
        for (int i = 0; i < count; ++i)
            slist[i] = s.slist[i];
        return *this;
    }
    void enlarge(int n = 20)
    {
        int *p = new T[maxsize + n];
        for (int i = 0; i < count; ++i)
            p[i] = slist[i];
        delete[] slist;
        slist = p;
    }
    void append(const T &x)
    {
        if (count == maxsize)
            enlarge();
        slist[count++] = x;
    }
    void print()
    {
        for (int i = 0; i < count; ++i)
            cout << slist[i] << ' ';
        cout << endl;
    }
    ~seqlist()
    {
        cout << slist << "被释放了" << endl;
        delete[] slist;
    }
};

int main()
{
    seqlist<int> a(5, 4), b(a), c(20, 0);
    a.print();
    b.print();
    c.print();
    c = c;
    c.print();
}
