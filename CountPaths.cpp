#include <sstream>
#include <iostream>
using namespace std;

int CountPaths(int x1, int y1, int x2, int y2)
{
    if (x2 == x1 || y2 == y1)
    {
        return 1;
    }
    else
    {
        return CountPaths(x1, y1, x2 - 1, y2) + CountPaths(x1, y1, x2, y2 - 1);
    }
}

int main(int argc, char *argv[])
{
    std::cout << "Enter starting coordinates in the format row column ";
    int x1 = 0;
    int y1 = 0;
    std::cin >> x1;
    std::cin >> y1;

    std::cout << "Enter ending coordinates in the format row column ";
    int x2 = 0;
    int y2 = 0;
    std::cin >> x2;
    std::cin >> y2;

    int Paths;
    Paths = CountPaths(x1, y1, x2, y2);
    std::cout << "Number of Paths is ";
    std::cout << Paths;

    return 0;
}