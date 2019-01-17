//Importação dos Pacotes Usados
#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    //Define Variaveis
    int number, hour;
    double valHour, salary;

    //Obtem Variaveis
    cin >> number;
    cin >> hour;
    cin >> valHour;

    //Realiza Calculo
    salary = valHour * hour;

    //Define as casas decimais
    cout << fixed << setprecision(2);

    //Apresenta Resultado
    cout << "NUMBER = " << number << "\n";
    cout << "SALARY = U$ " << salary << "\n";
    return 0;
}
