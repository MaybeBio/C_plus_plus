#include <iostream>
#include <cmath>

void input(double a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
}

double aver(double a[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
    }
    return sum / n;
}

double stddev(double a[], int n)
{
    double M = aver(a, n);
    double D = 0.0;
    for (int i = 0; i < n; ++i)
    {
        D += (a[i] - M) * (a[i] - M);
    }
    return sqrt(D / n);
}

int main()
{
    int n = 0;
    std::cin >> n;
    if (n > 100)
    {
        std::cerr << "bad input!\n";
        exit(0);
    }
    double a[100] = {0};
    input(a, n);
    std::cout << stddev(a, n) << '\n';
}