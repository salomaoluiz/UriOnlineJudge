//Importação dos Pacotes Usados
#include <iostream>

using namespace std;

int main()
{
    //Define Variaveis
    int ageDay;
    double ano, mes, dias;

    //Obtem Variaveis
    cin >> ageDay;

    //Realiza Calculo
    ano = ageDay / 365;
    mes = (ageDay % 365) / 30;
    dias = (ageDay % 365) % 30;

    //Apresenta Resultado
    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return 0;
}
