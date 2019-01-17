
//Importação dos Pacotes Utilizados
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <tgmath.h>

using namespace std;

int main(){
    //Definição das Variaveis
    double raio, area;
    double pi = 3.14159;
    
    //Obtendo Varivel
    cin >> raio;

    //Calculando area
    area = pow(raio, 2) * pi;

    //Setando Precisão
    cout << fixed << setprecision(4);

    //Apresentando Resultado
    cout << "A=" << area << "\n";
    return 0;
}
