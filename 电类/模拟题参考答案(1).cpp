#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

class student
{
    string name;
    int age;

public:
    student(string _name, int _age) : name(_name), age(_age) {}
    virtual int fee() = 0;
    virtual void save(const char *filename);
};

void student::save(const char *filename)
{
    ofstream ofile(filename, ios::app);
    ofile << "name:" << name << '\t' << "age:" << age << '\t';
    ofile.close();
}

class high_school_student : public student
{
    int books;

public:
    high_school_student(string _name, int _age, int _books);
    int fee();
    void save(const char *filename);
};

high_school_student::high_school_student(string _name, int _age, int _books)
    : student(_name, _age)
{
    books = _books;
}

int high_school_student::fee()
{
    return 30 * books;
}

void high_school_student::save(const char *filename)
{
    student::save(filename);
    ofstream ofile(filename, ios::app);
    ofile << "books:" << books << '\t' << "fee:" << fee() << endl;
    ofile.close();
}

class college_student : public student
{
    int credit;

public:
    college_student(string _name, int _age, int _credit);
    int fee();
    void save(const char *filename);
};

college_student::college_student(string _name, int _age, int _credit)
    : student(_name, _age)
{
    credit = _credit;
}

int college_student::fee()
{
    return 120 * credit;
}

void college_student::save(const char *filename)
{
    student::save(filename);
    ofstream ofile(filename, ios::app);
    ofile << "credit:" << credit << '\t' << "fee:" << fee() << endl;
    ofile.close();
}

class stu_array
{
    student *ls[20];
    int last;

public:
    stu_array() { last = -1; }
    stu_array &append(student *s);
    void sort();
    void save(const char *filename);
};
stu_array &stu_array::append(student *s)
{
    if (last == 19)
    {
        cout << "List FULL\n";
        return *this;
    }
    ls[++last] = s;
    return *this;
}
void stu_array::sort()
{
    int i, j, k;
    student *temp;
    for (i = 0; i < last; ++i)
    {
        k = i;
        for (j = i + 1; j <= last; ++j)
        {
            if (ls[k]->fee() > ls[j]->fee())
                k = j;
        }
        temp = ls[i], ls[i] = ls[k], ls[k] = temp;
    }
}

void stu_array::save(const char *filename)
{
    for (int i = 0; i <= last; ++i)
        ls[i]->save(filename);
}

int main()
{
    stu_array array;
    college_student s1("章大", 22, 30), s2("章二", 20, 28);
    high_school_student s3("章三", 15, 40), s4("章四", 12, 30);
    array.append(&s1).append(&s2).append(&s3).append(&s4);
    array.sort();
    array.save("student.txt");
}