#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    char filename[] = "table.txt";
    int i;
    ofstream file(filename);
    if (!file)
    {
        cerr << "open file error!" << endl;
        exit(1);
    }

    file << setw(15) << "Number" << setw(15) << "Square" << setw(15) << "SquareRoot" << endl;
    file.fill('-');
    file << setw(45) << '-' << endl;
    file.fill(' ');

    for (i = 1; i <= 100; i++)
    {
        file << setw(15) << i << setw(15) << i * i << setw(15) << sqrt((double)i) << endl;
    }

    file.close();
    cout << "Done!\n";
}