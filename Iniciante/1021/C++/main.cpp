#include <iostream>

using namespace std;

int
main ()
{
    //Define Variaveis

    int inteiro, aux, aux1;
    double N;


    //Realiza Calculo
    cin >> N;
    inteiro = N;
    N *= 100;
    aux1 = N;

    cout << "NOTAS:" <<endl;
    cout << inteiro / 100 << " nota(s) de R$ 100.00" << endl;
    aux = inteiro % 100;
    cout << aux / 50 << " notas(s) de R$ 50.00" << endl;
    aux %= 50;
    cout << aux / 20 << " nota(s) de R$ 20.00" << endl;
    aux %= 20;
    cout << aux / 10<< " nota(s) de R$ 10.00" << endl;
    aux %= 10;
    cout << aux / 5<< " nota(s) de R$ 5.00" << endl;
    aux %= 5;
    cout << aux / 2<< " nota(s) de R$ 2.00" << endl;
    aux %= 2;


    cout << "MOEDAS:" << endl;
    aux1 %= 100;
    cout << aux /1<< " moeda(s) de R$ 1.00" << endl;
    cout << aux1 / 50 << " moeda(s) de R$ 0.50" << endl;
    aux1 %= 50;
    cout << aux1 / 25<< " moeda(s) de R$ 0.25" << endl;
    aux1 %= 25;
    cout << aux1 /10<< " moeda(s) de R$ 0.10" << endl;
    aux1 %= 10;
    cout << aux1 / 5<< " moeda(s) de R$ 0.05" << endl;
    aux1 %= 5;
    cout << aux1 / 1<< " moeda(s) de R$ 0.01" << endl;

    return 0;
}
