#include <sstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n = argc;
    int numbers[n];
    int j = 0;

    for (int i = 1; i < n; i++)
    {
        stringstream iss(argv[i]);
        int x;
        iss >> x;
        numbers[j] = x;
        j++;
    }

    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (j == k)
            {
                continue;
            }
            else if (numbers[j] == numbers[k])
            {
                std::cout << "true";
                return 0;
            }
        }
    }
    std::cout << "false";
    return 0;
}