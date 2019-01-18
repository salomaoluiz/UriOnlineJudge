#include <iostream>
#include<stdlib.h>

using namespace std;


int main ()
{

    //Define Variaveis
    double a, b, c, perimetro, area;

    cin >> a >> b >> c;

    //Realiza Calculo
    std::cout.precision(1);

    if((abs(a-b)< c && c < a+b)||(abs(b-c)<a && a < b+c)||(abs(a-c)<b && b < a+c))
    {
        perimetro = a + b +c;
        std::cout << "Perimetro = " <<std::fixed << perimetro << endl;
    }
    else
    {
        area = ((a + b)*c)/2;
        std::cout << "Area = " <<std::fixed << area << endl;
    }

    return 0;
}
