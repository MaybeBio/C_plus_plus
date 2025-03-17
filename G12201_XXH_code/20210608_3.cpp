#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    fstream file; //fstream定义对象

    //生成成绩
    int count = 50 + rand() % 20;      //学生人数
    file.open("scores.txt", ios::out); //fstream定义对象，需要指明是输入还是输出
    if (!file.is_open())
    {
        cerr << "file open error!\n";
        exit(1);
    }

    while (count)
    {
        file << setw(4) << 50 + rand() % 51;
        count--;
    }
    file.close();

    //开始统计
    count = 0;
    int maxscore = 0, minscore = 0;
    int L90 = 0, L80 = 0, L70 = 0, L60 = 0, L0 = 0;
    double avgScore = 0;
    file.open("scores.txt", ios::in); //输入文件
    if (file.is_open())
    {
        int data;
        while (file >> data)
        {
            if (0 == count)
                maxscore = minscore = data;
            else
            {
                if (data > maxscore)
                    maxscore = data;
                if (data < minscore)
                    minscore = data;
            }
            switch (data / 10)
            {
            case 10:
            case 9:
                L90++;
                break;
            case 8:
                L80++;
                break;
            case 7:
                L70++;
                break;
            case 6:
                L60++;
                break;
            default:
                L0++;
            }

            avgScore += data;
            count++;
        }
        avgScore /= count;
        file.close(); //close文件
    }
    else
    {
        cerr << "file open error!\n";
        exit(1);
    }

    //开始输出到result.txt中
    file.open("result.txt", ios::out);
    if (!file)
    {
        cerr << "file open error!\n";
        exit(1);
    }
    file << "总人数:  " << count << endl;
    file << "最高分:  " << maxscore << endl;
    file << "最低分:  " << minscore << endl;
    file << "平均分:  " << avgScore << endl;
    file << endl;
    file << setw(8) << "90-100:" << setw(4) << L90 << ", 百分比：" << setw(5) << (int)((float)L90 / count * 100 + 0.5) << "%\n";
    file << setw(8) << "80-89:" << setw(4) << L80 << ", 百分比：" << setw(5) << (int)((float)L80 / count * 100 + 0.5) << "%\n";
    file << setw(8) << "70-79:" << setw(4) << L70 << ", 百分比：" << setw(5) << (int)((float)L70 / count * 100 + 0.5) << "%\n";
    file << setw(8) << "60-69:" << setw(4) << L60 << ", 百分比：" << setw(5) << (int)((float)L60 / count * 100 + 0.5) << "%\n";
    file << setw(8) << "0-59:" << setw(4) << L0 << ", 百分比：" << setw(5) << (int)((float)L0 / count * 100 + 0.5) << "%\n";
    file.close();

    cout << "Done!\n";
}