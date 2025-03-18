#include <iostream>
using namespace std;
typedef int Datatype; //假设数据为整型
struct node
{
    Datatype info;
    node *link; //这里必须是指针类型
};

node *createdown()
{
    Datatype data;
    node *head, *tail, *p;
    head = new node; //建立链表头结点
    tail = head;
    while (cin >> data)
    { //^Z结束
        p = new (node);
        //每输入一个数申请一个结点
        p->info = data; //添入数据
        tail->link = p; //新结点接到链尾
        tail = p;
    } //尾指针到链尾
    tail->link = nullptr;
    //链尾加空指针，表示链结束
    return head; //返回头指针
}
node *createup()
{
    node *head, *p;
    Datatype data;
    head = new node;
    head->link = nullptr;
    while (cin >> data)
    {
        //建立第一个结点
        p = new node;
        p->info = data;
        p->link = head->link;
        //新结点放在原链表前方
        head->link = p;
        //头结点放新结点之前
    }
    return head;
}
void show(node *head)
{
    if (!head)
        return;
    node *p = head->link; //链表中第一个点的地址
    while (p)
    {
        cout << p->info << ' ';
        p = p->link;
    }
    cout << endl;
}
node *traversal(node *head, Datatype data)
{
    node *p = head->link;
    while (p != nullptr && p->info != data)
        p = p->link;
    return p; // p为nullptr则未找到
}
void insert(node *p, Datatype x)
{
    node *q = new node;
    q->info = x;
    q->link = p->link;
    p->link = q;
}
node *createup2()
{
    node *head = new node;
    head->link = nullptr;
    Datatype data;
    while (cin >> data)
        insert(head, data);
    return head;
}
void del(node *p)
{
    node *q;
    q = p->link;
    p->link = q->link;
    delete q;
    //如果要把该节点移入另一个链中，则可将q返回。
}
void destory2(node *&head)
{
    node *p = head->link;
    while (p)
    {
        del(head);
        p = head->link;
    }
    delete head;
    head = nullptr;
}
void destory(node *&head)
{
    node *p = head->link, *q;
    while (p)
    {
        //删除第一个点
        q = p->link;
        head->link = q;
        delete p;
        p = head->link;
    }
    delete head;
    head = nullptr;
}
node *createorder()
{
    node *head, *p, *q;
    head = new node;
    head->link = nullptr;
    Datatype data;
    while (cin >> data)
    {
        q = head;
        p = q->link;
        while (p && data > p->info)
            q = p, p = p->link;
        insert(q, data);
    }
    return head;
}

int main()
{
    node *head = createorder();
    show(head);
    destory(head);
}
