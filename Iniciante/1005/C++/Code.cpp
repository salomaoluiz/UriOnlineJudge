//Importação dos Pacotes Usados
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){
    //Define Variaveis
    double A, B, MEDIA;

    //Obtem Variaveis
    cin >> A;
    cin >> B;

    //Realiza Calculo
    MEDIA = ((A*3.5) + (B*7.5))/11;

    //Define a Precisão das casas decimais
    cout << fixed << setprecision(5);

    //Apresenta Resultado
    cout << "MEDIA = " << MEDIA << "\n";
    return 0;
}
