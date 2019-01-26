#include <iostream>

using namespace std;

int main ()
{
    double X, N[100];

    cin >> X;

    std::cout.precision(4);
    std::cout << "N[0] = " << std::fixed << X << endl;

    for (int i = 1; i<100; i++)
    {
        X /= 2;
        std::cout << "N[" << i << "] = " << std::fixed << X << endl;
    }
    return 0;
}
