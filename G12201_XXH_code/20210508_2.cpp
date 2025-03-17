#include <iostream>
using namespace std;

class List;
class Node
{
    int data;
    Node *next;
    friend class List;
};

class List
{
private:
    Node *head;

public:
    List();
    List(int d);
    ~List();
    void print();
    void append(int d = 0);
};

List::List()
    : head(0)
{
    cout << "constructor (no parameter)" << endl;
}

List::List(int d)
{
    head = new Node;
    head->data = d;
    head->next = 0;

    cout << "constructor (with one parameter)" << endl;
}

List::~List()
{
    while (head)
    {
        Node *p = head;
        head = head->next;
        delete p;
    }
    //循环结束，head的值为0
    cout << "destructor!" << endl;
}

void List::print()
{
    Node *piter = head;
    while (piter)
    {
        cout << piter->data << "  ";
        piter = piter->next;
    }
    cout << endl;
}

void List::append(int d)
{
    //新结点
    Node *pnew = new Node;
    pnew->data = d;
    pnew->next = 0;

    //方法一：
    //添加到链表尾部
    if (0 != head)
    {
        //找尾接点
        Node *piter = head;
        while (0 != piter->next)
        {
            piter = piter->next;
        }
        piter->next = pnew;
    }
    else
    {
        //链表为空链表，新增加的节点既是头结点也是尾节点
        head = pnew;
    }

    //方法二：
    /*  
    Node *piter = head;
    while (0 != piter && 0 != piter->next)
    {
        piter = piter->next;
    }
    if (0 != piter)
    {
        piter->next = pnew;
    }
    else
    {
        head = pnew;
    }
    */
}

int main()
{
    cout << "objector list1:" << endl;
    List list1;
    list1.append(1);
    list1.append(2);
    list1.print();
    list1.~List(); //显式调用析构函数，清空链表。主函数结束时还会自动调用一次list1的析构函数

    //list1对象依然存在，以下可以证明
    list1.append(10);
    list1.append(20);
    list1.print();

    //
    cout << "\nobjector list2:" << endl;
    List list2(30);
    list2.append(1);
    list2.append(2);
    list2.print();
}
