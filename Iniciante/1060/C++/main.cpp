#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double n[6], aux = 0;

    cin >> n[0] >> n[1]>> n[2]>> n[3]>> n[4]>> n[5];

    //Realiza os calculos
    for(int i=0; i< 6; i++){
        if(n[i]>0){
            aux++;
        }
    }
    cout << aux << " valores positivos" << endl;
    return 0;
}
