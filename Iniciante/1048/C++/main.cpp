#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double salario, ajuste;
    int percentil;

    cin >> salario;
    //Realiza Calculo
    if(salario >= 0 && salario <=400)
    {
        percentil = 15;
    }
    else if(salario > 400 && salario <= 800)
    {
        percentil = 12;
    }
    else if(salario > 800 && salario <=1200)
    {
        percentil = 10;
    }
    else if(salario > 1200 && salario <= 2000)
    {
        percentil = 7;
    }
    else if(salario >2000)
    {
        percentil = 4;
    }

    std::cout.precision(2);
    ajuste = (salario * percentil)/100;
    salario = salario + ajuste;

    std::cout << "Novo salario: "<< std::fixed << salario <<endl;
    std::cout << "Reajuste ganho: " << std::fixed << ajuste << endl;
    std::cout << "Em percentual: "  << percentil << " %" << endl;
    return 0;
}
