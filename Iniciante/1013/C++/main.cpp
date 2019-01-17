//Importação dos Pacotes Usados
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    //Define Variaveis
    int A, B, C, AB, result;

    //Obtem Variaveis
    cin >> A >> B >> C;

    //Realiza Calculo
    AB = (A + B + abs(A - B)) / 2;
    result = (C + AB + abs(C - AB)) / 2;

    //Apresenta Resultado
    cout << result << " eh o maior" << endl;
    return 0;
}
