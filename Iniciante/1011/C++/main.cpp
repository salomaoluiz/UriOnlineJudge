//Importação dos Pacotes Usados
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    //Define Variaveis
    double radius, result;
    double pi = 3.14159;

    //Obtem Variaveis
    cin >> radius;    

    //Realiza Calculo
    result = (4.0 / 3) * pi * pow(radius, 3);

    //Define as casas decimais
    cout << fixed << setprecision(3);

    //Apresenta Resultado
    cout << "VOLUME = " << result << "\n";
    return 0;
}
