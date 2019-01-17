#include <iostream>
#include<iomanip>
using namespace std;


int main () {

    //Define Variaveis
    int code;
    double qtd, cost;

    cin >> code;
    cin >> qtd;

    //Realiza Calculo
    switch (code){
        case 1: cost = 4; break;
        case 2: cost = 4.5; break;
        case 3: cost = 5; break;
        case 4: cost = 2; break;
        case 5: cost = 1.5; break;
    }

    cost *= qtd;
    std::cout.precision(2);

    std::cout << "Total: R$ " << std::fixed << cost << endl;

    return 0;
}
