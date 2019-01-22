#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int N, X, Y, i = 0;
    double div;
    cin >> N;

    std::cout.precision(1);
    do {
        cin >> X >> Y;
        if(Y == 0){
            cout << "divisao impossivel"  << endl;
        }else {
            div = (double) X / (double) Y;
            std::cout << std::fixed << div << endl;
        }
    i++;
    }while (i < N);


    return 0;
}
