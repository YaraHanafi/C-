#include <sstream>
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

double method(double x)
{
    double ans = pow(x, 3) + (x - 5);
    return ans;
}

int main(int argc, char *argv[])
{
    std::cout << "Enter tolerance ";
    double Tol = 0;
    std::cin >> Tol;

    std::cout << "Enter endpoints of an interval in the format Left Right ";
    double a = 0;
    double b = 0;
    std::cin >> a;
    std::cin >> b;

    bool g = false;

    if ((a < b) && ((method(a) < 0 && method(b) > 0) || (method(a) > 0 && method(b) < 0)))
    {
        g = true;
    }

    if (g == true)
    {
        int N = 1;
        while (N <= 1000000000)
        { // limiting number to prevent infinite loop
            double c = (a + b) / 2;
            if (method(c) == 0 || ((b - a) / 2) < Tol)
            {
                std::cout << "x = ";
                std::cout << c;
                std::cout << " is an approximate solution of f(x) = 0 to within ";
                std::cout << Tol;
                return 0;
            }
            N++;
            if (signbit(method(c)) == signbit(method(a)))
            {
                a = c;
            }
            else
            {
                b = c;
            }
        }
        std::cout << "Method Failed";
    }
    else
    {
        std::cout << "No Solution";
    }
}