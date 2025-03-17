#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int count = 0, num = 1000; num < 10000; ++num)
    {
        //位数是已知的，同时满足个千、十百位数字相等
        if (num % 10 == num / 1000 && num / 10 % 10 == num / 100 % 10)
        {
            cout << setw(6) << num;
            if (0 == ++count % 6)
            {
                cout << endl;
            }
        }
    }
    cout << endl;
}