//Importação dos Pacotes Usados
#include <iostream>

using namespace std;

int main()
{
    //Define Variaveis
    int value, valueStart;
    double nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1 = 0;

    //Obtem Variaveis
    cin >> value;

    //Realiza Calculo
    valueStart = value;

    if (value >= 100)
    {
        while (value >= 100)
        {
            nota100++;
            value -= 100;
        }
    }
    if (value >= 50)
    {
        while (value >= 50)
        {
            nota50++;
            value -= 50;
        }
    }
    if (value >= 20)
    {
        while (value >= 20)
        {
            nota20++;
            value -= 20;
        }
    }
    if (value >= 10)
    {
        while (value >= 10)
        {
            nota10++;
            value -= 10;
        }
    }
    if (value >= 5)
    {
        while (value >= 5)
        {
            nota5++;
            value -= 5;
        }
    }
    if (value >= 2)
    {
        while (value >= 2)
        {
            nota2++;
            value -= 2;
        }
    }
    if (value >= 1)
    {
        while (value >= 1)
        {
            nota1++;
            value -= 1;
        }
    }

    //Apresenta Resultado
    cout << valueStart << endl;
    cout << nota100 << " nota(s) de R$ 100,00" << endl;
    cout << nota50 << " nota(s) de R$ 50,00" << endl;
    cout << nota20 << " nota(s) de R$ 20,00" << endl;
    cout << nota10 << " nota(s) de R$ 10,00" << endl;
    cout << nota5 << " nota(s) de R$ 5,00" << endl;
    cout << nota2 << " nota(s) de R$ 2,00" << endl;
    cout << nota1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}
