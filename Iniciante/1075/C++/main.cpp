#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n;

    cin >> n;

    //Realiza os Calculos

    for(int i=1 ; i<10000; i++){
        if(i % n == 2){
            cout << i << endl;
        }
    }
    return 0;
}
