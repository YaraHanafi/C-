#include <sstream>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    stringstream iss(argv[1]);
    double T;
    iss >> T;
    stringstream issb(argv[2]);
    double v;
    issb >> v;

    double w = 35.74 + 0.6215 * T + (0.4275 * T - 35.75) * pow(v, 0.16);
    std::cout << w;

    return 0;
}