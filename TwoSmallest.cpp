#include <sstream>
#include <iostream>
#include <limits>
using namespace std;

int main(int argc, char *argv[])
{
    int length = argc;
    double firstsmallest = std::numeric_limits<double>::max();
    double secondsmallest = std::numeric_limits<double>::max();
    int j = 0;
    for (int i = 1; i < length; i++)
    {
        stringstream iss(argv[i]);
        double x;
        iss >> x;

        if (x <= firstsmallest)
        {
            firstsmallest = x;
            j = i;
        }
    }

    for (int n = 1; n < length; n++)
    {
        stringstream issa(argv[n]);
        double Z;
        issa >> Z;
        if ((Z <= secondsmallest) && (n != j))
        {
            secondsmallest = Z;
        }
    }

    std::cout << firstsmallest << endl;
    std::cout << secondsmallest;

    return 0;
}