#include <iostream>
#include<iomanip>
using namespace std;


int main ()
{

    //Define Variaveis
    double x, y;

    cin >> x;
    cin >> y;

    //Realiza Calculo
    if(x > 0 && y > 0)
    {
        cout << "Q1" << endl;
    }
    else if(x < 0 && y > 0)
    {
        cout << "Q2" << endl;
    }
     else if(x < 0 && y < 0)
    {
        cout << "Q3" << endl;
    }
    else if(x > 0 && y < 0)
    {
        cout << "Q4" << endl;
    }
    else if(x == 0 && y == 0)
    {
        cout << "Origem" << endl;
    }
    else if(x == 0 && y != 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if(x != 0 && y == 0)
    {
        cout << "Eixo X" << endl;
    }
    return 0;
}
