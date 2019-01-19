#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n1, n2, aux = 0, sum = 0;

    cin >> n1 >> n2;
    if(n1>n2){
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if(n1 % 2 == 0){
        n1++;
    }else if(n1 % 2 != 0){
        n1 += 2;
    }
    if(n2 % 2 == 0){
        n2--;
    }else if(n2 % 2 != 0){
        n2 -= 2;
    }
    //Realiza os calculos
    for(int i = n1; i <= n2; i += 2){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
