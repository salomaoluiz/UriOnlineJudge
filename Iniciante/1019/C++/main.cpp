//Importação dos Pacotes Usados
#include <iostream>

using namespace std;

int main()
{
    //Define Variaveis
    int tSeg;
    double seg, min, hour;

    //Obtem Variaveis
    cin >> tSeg;

    //Realiza Calculo
    hour = tSeg / 3600;
    min = (tSeg % 3600) / 60;
    seg = ((tSeg % 3600) % 60);

    //Apresenta Resultado
    cout << hour << ":" << min << ":" << seg << endl;
    return 0;
}
