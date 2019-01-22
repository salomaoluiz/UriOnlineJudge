#include <iostream>

using namespace std;

int main ()
{
    int N, F1, F2, aux, resto = 0;

    cin >> N;

for (int i = 0; i< N; i++){
    cin >> F1 >> F2;

    do {
        resto = F1 % F2;
        F1 = F2;
        aux=F2;
        F2 = resto;
    }while(resto != 0);
    cout << aux << endl;
}
return 0;
}
