#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n, aux = 1;

    cin >> n;

    //Realiza os calculos

    for(int i=1; i<=n;i++)
    {
        aux = (2*i)-1;
        if(aux > n){
            break;
        }
       cout << aux << endl;
    }


    return 0;
}
