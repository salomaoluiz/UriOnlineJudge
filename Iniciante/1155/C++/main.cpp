#include <iostream>

using namespace std;

int main ()
{
    double S = 0, i = 1;

    std::cout.precision(2);
    do
    {
        S += (1 / i);
        i++;
    }
    while(i <= 100);
    std::cout << std::fixed << S << endl;

    return 0;
}
