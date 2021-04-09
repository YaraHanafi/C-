#include <sstream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    stringstream iss(argv[1]);
    int w;
    iss >> w;
    stringstream issb(argv[2]);
    int x;
    issb >> x;
    stringstream issc(argv[3]);
    int y;
    issc >> y;
    stringstream issd(argv[4]);
    int z;
    issd >> z;

    bool b = true;
    if (w < x && x < y && y < z)
    {
        std::cout << b;
    }
    else if (w > x && x > y && y > z)
    {
        std::cout << b;
    }
    else
    {
        b = false;
        std::cout << b;
    }

    return 0;
}
