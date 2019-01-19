#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double salario, imposto, aux;

    cin >> salario;

    std::cout.precision(2);
    //Realiza Calculo
    if(salario > 0 && salario <= 2000)
    {
        cout << "Isento" << endl;
    }
    else
    {
        if(salario > 2000 && salario <= 3000)
        {
            salario -= 2000;
            imposto = (salario * 8)/100;
        }
        else if(salario > 3000 && salario <= 4500)
        {
            imposto = (1000 * 8)/100;
            salario -= 3000;
            imposto += (salario * 18)/100;
        }
        else if (salario > 4500)
        {
            imposto = (1000 * 8) / 100;
            imposto += (1500 * 18)/100;
            salario -= 4500;
            imposto += (salario * 28)/100;
        }
            std::cout << "R$ " <<std::fixed << imposto << endl;
    }
    return 0;
}
