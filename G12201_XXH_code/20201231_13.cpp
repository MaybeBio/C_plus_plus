#include <iostream>
using namespace std;

//不做数组越界检查，调用者应保证s1空间足够大
void my_strcpy(char s1[], char s2[])
{
    int i = 0;
    while (true)
    {
        s1[i] = s2[i];
        if (0 == s2[i])
        {
            break;
        }
        i++;
    }
}

//2nd
void my_strcpy2(char s1[], char s2[])
{
    int i = 0;
    do
    {
        s1[i] = s2[i];
    } while (s2[i++]);
}

int main()
{
    char s1[128] = {0};
    char s2[128] = {0};
    cin >> s2;
    my_strcpy(s1, s2);
    cout << s1 << '\n';
    s1[0] = 0;
    my_strcpy2(s1, s2);
    cout << s1 << '\n';
}