//Importação dos Pacotes Usados
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    //Define Variaveis
    int horas, media;
    double litros, dist;

    //Obtem Variaveis
    cin >> horas;
    cin >> media;

    //Realiza Calculo
    dist = horas * media;
    litros = dist / 12;

    //Define as casas decimais
    cout << fixed << setprecision(3);

    //Apresenta Resultado
    cout << litros << endl;
    return 0;
}
