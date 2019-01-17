#include <iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main () {

    //Define Variaveis

    float A, B, C, delta, R1, R2;

    cin >> A;
    cin >> B;
    cin >> C;

    //Realiza Calculo

    delta = pow(B,2)-4*A*C;
    R1 = (-B + sqrt(delta))/(2*A);
    R2 = (-B - sqrt(delta))/(2*A);

    if(A == 0 || delta < 0){
        cout << "Impossivel calcular" << endl;
    }else {
        std::cout.precision(5);
    std::cout << "R1 = " << std::fixed << R1 <<endl;
    std::cout << "R2 = " << std::fixed << R2 <<endl;
    }
    return 0;
}
