#include <sstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    stringstream iss(argv[1]);
    int n1;
    iss >> n1;
    stringstream issb(argv[2]);
    int n2;
    issb >> n2;
    stringstream issc(argv[3]);
    int n3;
    issc >> n3;
    stringstream issd(argv[4]);
    int n4;
    issd >> n4;
    stringstream isse(argv[5]);
    int n5;
    isse >> n5;

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
    {
        std::cout << n1;
    }
    else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
    {
        std::cout << n2;
    }
    else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
    {
        std::cout << n3;
    }
    else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5)
    {
        std::cout << n4;
    }
    else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
    {
        std::cout << n5;
    }

    return 0;
}