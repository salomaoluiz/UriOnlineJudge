//Importação dos Pacotes Usados
#include <iostream>

using namespace std;

int main(){
    //Define Variaveis
    int A, B, C, D, DIFERENCA;

    //Obtem Variaveis
    cin >> A;
    cin >> B;
    cin >> C;
    cin >> D;

    //Realiza Calculo
    DIFERENCA = (A*B - C*D);

    //Apresenta Resultado
    cout << "DIFERENCA = " << DIFERENCA << "\n";
    return 0;
}
