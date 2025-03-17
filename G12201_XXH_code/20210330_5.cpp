#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Student
{
protected:
    char Name[10];
    char *Num;
    int Math;
    int English;
    int Physics;
    int Cpp;

public:
    void setNameNo(char *name, char *no);
    void setScore(int m, int e, int p, int c);
    int total();
    int average();
    void outputInfo();

public:
    Student(char *Name = 0, char *Num = 0,
            int Math = 0, int English = 0, int Physics = 0, int Cpp = 0);
    Student(Student &);
    ~Student();
};
//注意：默认值（或者缺省值）写在原型里，定义时不能写
Student::Student(char *Name, char *Num,
                 int Math, int English, int Physics, int Cpp)
{
    this->Name[0] = 0; //这里是值成员Name, 用this指明成员，这是解决名称冲突的一种方法
    if (Name)          //这是是指形参的Name
    {
        strcpy(this->Name, Name);
    }
    //
    Student::Num = 0;       //这里是指成员Num，解决名称冲突的另一种方法
    if (Num && strlen(Num)) //这里是指形参Num
    {
        Student::Num = new char[strlen(Num) + 1];
        strcpy(Student::Num, Num);
    }
    //
    this->Math = Math;
    this->English = English;
    this->Physics = Physics;
    this->Cpp = Cpp;
}

Student::Student(Student &other)
    : Math(other.Math), English(other.English), Physics(other.Physics), Cpp(other.Cpp), Num(0)
{
    strcpy(Name, other.Name);
    //
    //Num已在初始化列表中初始化为0值，这里只需处理需要动态分配内存的情况
    if (other.Num)
    {
        Num = new char[strlen(other.Num) + 1];
        strcpy(Num, other.Num);
    }
}
Student ::~Student()
{
    if (Num)
        delete[] Num;
    Num = 0;
    Name[0] = 0;
    Math = English = Physics = Cpp = 0;
}

void Student::setNameNo(char *name, char *no)
{
    Name[0] = 0; //置空串
    if (name)
    {
        strcpy(Name, name);
    }

    //成员函数被调用，说明对象已经存在，也即已经调用过构造函数，所以需要对指针成员进行判断后再做处理
    //这是跟构造函数处理指针的方式不同之处
    if (Num) //先清理
    {
        delete[] Num;
        Num = 0;
    }
    if (no && strlen(no)) //再根据参数处理
    {
        Num = new char[strlen(no) + 1];
        strcpy(Num, no);
    }
}
void Student::setScore(int m, int e, int p, int c)
{
    Math = m;
    English = e;
    Physics = p;
    Cpp = c;
}
int Student::total()
{
    return Math + English + Physics + Cpp;
}
int Student::average()
{
    return total() / 4;
}
void Student::outputInfo()
{
    cout << setw(10) << "Name" << setw(10) << "Num" << setw(10) << "Math" << setw(10) << "English";
    cout << setw(10) << "Physics" << setw(10) << "Cpp" << setw(10) << "Total" << setw(10) << "Average" << endl;
    cout << setw(10) << (Name[0] ? Name : "--"); //这里判断Name[0]与判断strlen(Name)效果一样，但前者效率更高
    cout << setw(10) << (Num ? Num : "--");
    cout << setw(10) << Math;
    cout << setw(10) << English;
    cout << setw(10) << Physics;
    cout << setw(10) << Cpp;
    cout << setw(10) << total();
    cout << setw(10) << average();
    cout << endl;
}

int main()
{
    cout << "call default constructor: " << endl;
    Student a;
    a.outputInfo();
    //
    cout << "after set name & num: " << endl;
    a.setNameNo("Tom", "G1220150");
    a.outputInfo();
    //
    cout << "after set score: " << endl;
    a.setScore(80, 85, 90, 95);
    a.outputInfo();
    //
    cout << "call copy-constructor: " << endl;
    Student b(a); //or:Student b = a;  or: Student b{a};
    b.outputInfo();
    //
    cout << "after set new name , num and scores:" << endl;
    b.setNameNo("Jerry", "G1220151");
    b.setScore(90, 93, 96, 99);
    b.outputInfo();
    //
}