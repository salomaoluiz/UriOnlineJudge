//Importação dos Pacotes Usados
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Define Variaveis

    int pieceCode, pieceQtd;
    double pieceValue, value;

    //Obtem Variaveis e Realiza os Calculos
    cin >> pieceCode >> pieceQtd >> pieceValue;
    value = pieceQtd * pieceValue;

    cin >> pieceCode >> pieceQtd >> pieceValue;
    value += pieceQtd * pieceValue;
    
    //Define as casas decimais
    cout << fixed << setprecision(2);

    //Apresenta Resultado
    cout << "VALOR A PAGAR: R$ " << value << "\n";
    return 0;
}
