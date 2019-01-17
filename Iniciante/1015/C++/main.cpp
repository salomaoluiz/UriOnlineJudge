//Importação dos Pacotes Usados
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    //Define Variaveis
    double x1, y1, x2, y2, dist;

    //Obtem Variaveis
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    //Realiza Calculo
    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    //Define as casas decimais
    cout << fixed << setprecision(4);

    //Apresenta Resultado

    cout << dist << endl;

    return 0;
}
