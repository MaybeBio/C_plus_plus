#include <iostream>
#include <cstring>
using namespace std;

struct NODE
{
    float x;
    NODE *pnext;
};

NODE *addHeadNode(NODE *phead, float d)
{
    NODE *p = new NODE{d, phead};
    // p->x = d;
    // p->pnext = 0;
    // p->pnext = phead;
    return p;
}

NODE *addTailNode(NODE *phead, float d)
{
    NODE *p = new NODE;
    p->x = d, p->pnext = 0;

    NODE *piter = phead;
    while (piter && piter->pnext)
    {
        piter = piter->pnext;
    }
    if (piter)
    {
        piter->pnext = p;
    }
    else
    {
        phead = p;
    }

    return phead;
}

void delList(NODE *phead)
{
    while (phead)
    {
        NODE *p = phead;
        phead = phead->pnext;
        delete p;
    }
}

void InsertAfter(NODE *phead, float key, float d)
{
    if (!phead)
        return;

    NODE *piter = phead;
    while (piter && piter->x != key)
    {
        piter = piter->pnext;
    }

    if (piter)
    {
        NODE *p = new NODE;
        p->x = d;
        p->pnext = piter->pnext;
        piter->pnext = p;
    }
}

NODE *InsertBefor(NODE *phead, float key, float d)
{
    NODE *pPre = 0, *piter = phead;
    while (piter && piter->x != key)
    {
        pPre = piter;
        piter = piter->pnext;
    }
    if (piter)
    {
        NODE *p = new NODE;
        p->x = d, p->pnext = 0;
        if (pPre)
        {
            p->pnext = piter;
            pPre->pnext = p;
        }
        else
        {
            p->pnext = piter;
            phead = p;
        }
    }
    return phead;
}

NODE *delNode(NODE *phead, float key)
{
    NODE *pPre = 0, *piter = phead;
    while (piter && piter->x != key)
    {
        pPre = piter;
        piter = piter->pnext;
    }
    if (piter)
    {
        if (pPre)
        {
            NODE *p = piter;
            pPre->pnext = piter->pnext;
            delete p;
        }
        else
        {
            NODE *p = piter;
            phead = piter->pnext;
            delete p;
        }
    }
    return phead;
}

NODE *sortList(NODE *phead)
{
    NODE *pnewhead = 0; //新链表
    while (phead)
    {
        //从原链表中摘一个节点，保存到p中
        NODE *p = phead;
        phead = phead->pnext;
        p->pnext = 0;
        //新链表中找位置
        NODE *pPre = 0, *piter = pnewhead;
        while (piter && piter->x < p->x)
        {
            pPre = piter;
            piter = piter->pnext;
        }

        if (piter) //
        {
            if (pPre) //在中间位置增加p
            {
                p->pnext = piter;
                pPre->pnext = p;
            }
            else //在头之前增加p
            {
                p->pnext = piter;
                pnewhead = p;
            }
        }
        else
        {
            if (pPre) //在尾部后增加
            {
                p->pnext = 0;
                pPre->pnext = p;
            }
            else //原链表是空链表
            {
                pnewhead = p;
                p->pnext = 0;
            }
        }
    }

    return pnewhead;
}

void print(NODE *phead)
{
    NODE *piter = phead;
    while (piter)
    {
        cout << piter->x << "  "; //(*p).x;
        piter = piter->pnext;
    }
    cout << endl;
}

int main()
{
    float data = 3.5;
    NODE *phead = 0;

    for (int i = 0; i < 4; i++)
    {
        phead = addTailNode(phead, data++);
    }
    print(phead);

    phead = addHeadNode(phead, data++);
    print(phead);

    InsertAfter(phead, 4.5, data++);
    print(phead);

    InsertBefor(phead, 4.5, data++);
    print(phead);

    phead = InsertBefor(phead, 7.5, data++);
    print(phead);

    phead = delNode(phead, 4.5);
    print(phead);

    phead = delNode(phead, 10.5);
    print(phead);

    phead = sortList(phead);
    print(phead);

    delList(phead);
    phead = 0;
}
