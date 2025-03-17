#include <iostream>
#include <iomanip>
using namespace std;

void charCounter(char s[], int &upw, int &low, int &number, int &space, int &other)
{
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upw++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            low++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            number++;
        }
        else if (s[i] == ' ')
        {
            space++;
        }
        else
        {
            other++;
        }
    }
}

int main()
{
    char buf[128] = {0};
    int upw = 0, low = 0, number = 0, space = 0, other = 0;
    cin.getline(buf, 128);
    charCounter(buf, upw, low, number, space, other);
    cout << left;
    cout << setw(15) << "upper case:" << upw;
    cout << setw(15) << "\nlow case:" << low;
    cout << setw(15) << "\nnumber:" << number;
    cout << setw(15) << "\nspace:" << space;
    cout << setw(15) << "\nother:" << other;
}