//Importação dos Pacotes Usados
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    //Define Variaveis
    int X;
    double Y, media;

    //Obtem Variaveis
    cin >> X;
    cin >> Y;

    //Realiza Calculo
    media = X / Y;

    //Define as casas decimais
    cout << fixed << setprecision(3);
 
    //Apresenta Resultado
    cout << media << " km/l" << endl;
    return 0;
}
