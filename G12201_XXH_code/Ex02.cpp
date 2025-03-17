#include <iostream>
#include <cstring>
using namespace std;

struct NODE
{
    float x;
    NODE *pnext;
};

NODE *addHeadNode(NODE *phead, NODE *p)
{
    p->pnext = phead;
    return p;
}

NODE *addTailNode(NODE *phead, NODE *v)
{
    NODE *p = phead;
    while (p && p->pnext)
    {
        p = p->pnext;
    }
    if (p)
    {
        p->pnext = v;
    }
    else
    {
        phead = v;
    }

    return phead;
}

void print(NODE *p)
{
    //   NODE *p = phead;
    while (p)
    {
        cout << p->x << "  "; //(*p).x;
        p = p->pnext;
    }
    cout << endl;
}

int main()
{
    NODE a = {3.5, 0}, b = {4.5, 0}, c{5.5, 0};
    a.pnext = &b;
    b.pnext = &c;
    NODE *phead = &a;
    print(phead);

    NODE d = {2.5, 0};
    phead = addHeadNode(phead, &d);
    print(phead);

    NODE e = {6.5, 0};
    phead = addTailNode(phead, &e);
    print(phead);
}
