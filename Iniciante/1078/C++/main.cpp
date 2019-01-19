#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n, value;

    cin >> n;

    //Realiza os Calculos

    for(int i=1 ; i<=10; i++){
        value = i * n;

        cout << i << " x " << n << " = " << value << endl;
    }
    return 0;
}
