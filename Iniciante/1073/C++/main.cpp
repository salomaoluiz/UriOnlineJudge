#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n;

    cin >> n;

    //Realiza os Calculos
    if(n % 2 != 0){
        n--;
    }
    for(int i = 2; i <= n; i += 2){
    cout << i << "^2 = " << i*i << endl;
    }

    return 0;
}
