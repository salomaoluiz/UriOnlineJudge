//Importação dos Pacotes Usados
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Define Variaveis
    string name;
    double sellValue, salaryFixed, salary;

    //Obtem Variaveis
    cin >> name;
    cin >> salaryFixed;
    cin >> sellValue;

    //Realiza Calculo
    salary = salaryFixed + (15 * sellValue)/100;

    //Define as casas decimais
    cout << fixed << setprecision(2);

    //Apresenta Resultado
    cout << "TOTAL = R$ " << salary << "\n";
    return 0;
}
