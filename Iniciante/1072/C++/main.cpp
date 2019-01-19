#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    long n, value[10000], in = 0, out = 0;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> value[i];
    }

    //Realiza os Calculos
    for(int j = 0; j < n; j++){
        if(value[j] >= 10 && value[j]<= 20){
            in++;
        }else {
            out++;
        }

    }
    cout << in << " in"<< endl;
    cout << out << " out" <<endl;
    return 0;
}
