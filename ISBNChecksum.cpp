#include <sstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    stringstream iss(argv[1]);
    int n;
    iss >> n;

    int sum = 0;
    int i = 2;
    while (i < 11)
    {
        int digit = n % 10;
        sum += i * digit;
        n /= 10;
        i += 1;
    }
    int rem = sum % 11;
    int cs = 0;

    if (rem == 0)
    {
        cs = 0;
    }
    else
    {
        cs = 11 - rem;
    }

    if (cs == 10)
    {
        char out = 'X';
        std::cout << out;
    }
    else
    {
        std::cout << cs;
    }
}