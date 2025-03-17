#include <iostream>
using namespace std;
#include<ctime>
#include<cstring>
struct student
{
	int num;
	char name[20];
	float score[40];
};
int main()
{
	srand(time(NULL));
	void print(student);
	student stu = { 2468 };
	strcpy_s(stu.name, "LiWen");
	for (int i = 0; i < 4; i++)
	{
		stu.score[i] = rand() % 100;
	}
	print(stu);
	return 0;
}
void print(student stu)
{
	cout << "学号\t" << stu.num << endl;
	cout << "姓名\t" << stu.name << endl;
	cout << "数学\t" << stu.score[0] << endl;
	cout << "语文\t" << stu.score[1] << endl;
	cout << "英语\t" << stu.score[2] << endl;
	cout << "科学\t" << stu.score[3] << endl;
}