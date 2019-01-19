#include <iostream>
#include<time.h>
using namespace std;

int main ()
{

    //Define Variaveis
    int hI, hF, tempo;

    cin >> hI >> hF;

    //Realiza Calculo
    if(hI == hF)
    {
        tempo = 24;
    }
    else
    {
        if(hI >= 12)
        {
            tempo = 24 - hI + hF;
            if (tempo > 24){
                tempo -= 24;
            }
        }
        else if (hI < 12)
        {
            tempo = hF - hI;
        }
    }


    cout << "O JOGO DUROU " <<  tempo << " HORA(S)" << endl;


    return 0;
}
