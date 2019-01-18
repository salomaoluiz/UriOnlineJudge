#include <iostream>
#include<math.h>
using namespace std;

int main ()
{

    //Define Variaveis
    double a,b,c, aux;

    cin >> a >> b >> c;
    //Realiza Calculo
    while(c > b || b > a)
    {
        if(c > b)
        {
            aux = b;
            b = c;
            c = aux;
        }
        else if (b>a)
        {
            aux = a;
            a = b;
            b = aux;
        }
    }
    if(a >= b + c)
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if(pow(a,2) == pow(b,2) + pow(c, 2))
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if(pow(a,2) > pow(b,2) + pow(c, 2))
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if(pow(a,2) < pow(b,2) + pow(c, 2))
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (a == b && b == c)
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((a == b && (a != c || b != c)) || (a == c && (a != b || c != b)) || (b == c && (b != a || c != a)))
        {
            cout << "TRIANGULO ISOSCELES" << endl;

        }
    }

    return 0;
}
