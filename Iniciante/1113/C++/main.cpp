#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int X[10000], Y[10000], loop = true, i = 0;

    do
    {
        cin >> X[i] >> Y[i];
        i++;
        if(X[i-1] == Y[i-1]){
            loop = false;
        }
    }
    while(loop == true);
    for (int j = 0; j < i; j++){
        if(X[j] > Y[j]){
            cout << "Decrescente" << endl;
        }else if(X[j] < Y[j]){
            cout << "Crescente" << endl;
        }
    }
    return 0;
}
