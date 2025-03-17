#include <iostream>
using namespace std;

//method 1st:
int my_strlen1(char *s)
{
    int len = 0;
    while (s[len])
    {
        len++;
    }
    return len;
}

//method 2nd:
int my_strlen2(char *s)
{
    int len = 0;
    while (s[len++])
    {
        ;
    }
    return len - 1; //即使条件不满足，len也要自增，故减去1
}

//method 3rd:
int my_strlen3(char *s)
{
    int len = 0;
    while (*s)
    {
        len++, s++;
    }
    return len;
}

//method 4th:
int my_strlen4(char *s)
{
    int len = 0;
    while (*s++)
    {
        len++;
    }
    return len;
}

int main()
{
    char str[128];
    cin >> str;
    cout << my_strlen1(str) << '\n';
    cout << my_strlen2(str) << '\n';
    cout << my_strlen3(str) << '\n';
    cout << my_strlen4(str) << '\n';
}