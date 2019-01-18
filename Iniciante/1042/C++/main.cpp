#include <iostream>

using namespace std;


int main ()
{

    //Define Variaveis
    int n[3] = {}, nI[3] = {}, aux = 0;
    int t = 0;
    cin >> n[0];
    cin >> n[1];
    cin >> n[2];

    nI[0] = n[0];
    nI[1] = n[1];
    nI[2] = n[2];

    //Realiza Calculo
    while(n[0]>n[1] || n[1]>n[2])
    {
        if(n[0]>n[1])
        {
            aux = n[0];
            n[0] = n[1];
            n[1] = aux;
        }
        else if (n[1]>n[2])
        {
            aux = n[1];
            n[1] = n[2];
            n[2] = aux;
        }

    }
    cout << n[0] << endl;
    cout << n[1] << endl;
    cout << n[2] << endl;
    cout << "" << endl;
    cout << nI[0] << endl;
    cout << nI[1] << endl;
    cout << nI[2] << endl;


    return 0;
}
