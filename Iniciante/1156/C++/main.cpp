#include <iostream>
#include<math.h>
using namespace std;

int main ()
{
    double S = 0, i = 0, j = 0;

    std::cout.precision(2);
    do
    {
        S +=  (1 + 2*j) / pow(2, i);
        j++;
        i++;
    }
    while( (1+2*j) <= 39);
    std::cout << std::fixed << S << endl;

    return 0;
}
