//Importação dos Pacotes Usados
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    //Define Variaveis
    double A, B, C;
    double area1, area2, area3, area4, area5;
    double pi = 3.14159;

    //Obtem Variaveis
    cin >> A >> B >> C;

    //Realiza Calculo
    area1 = (A * C) / 2;
    area2 = pi * pow(C, 2);
    area3 = ((A + B) * C) / 2;
    area4 = pow(B, 2);
    area5 = A * B;

    //Define as casas decimais
    cout << fixed << setprecision(3);

    //Apresenta Resultado
    cout << "TRIANGULO: " << area1 << "\n";
    cout << "CIRCULO: " << area2 << "\n";
    cout << "TRAPEZIO: " << area3 << "\n";
    cout << "QUADRADO: " << area4 << "\n";
    cout << "RETANGULO: " << area5 << "\n";
    return 0;
}
