#include <iostream>

int main()
{
    int fib[20] = {1, 1};
    int sum = 2;
    for (int i = 2; i < 20; ++i)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        sum += fib[i];
    }
    std::cout << sum << '\n';
}