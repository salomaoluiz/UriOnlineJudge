//Importação dos Pacotes Usados
#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){
    //Define Variaveis
    double A, B, C, MEDIA;

    //Obtem Variaveis
    cin >> A;
    cin >> B;
    cin >> C;

    //Realiza Calculo
    MEDIA = ((A*2) + (B*3) + (C*5))/10;

    //Define a Precisão das casas decimais
    cout << fixed << setprecision(1);

    //Apresenta Resultado
    cout << "MEDIA = " << MEDIA << "\n";
    return 0;
}
