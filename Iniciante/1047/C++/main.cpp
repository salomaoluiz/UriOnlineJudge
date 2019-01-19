#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int hI, hF, mI, mF, tempoH, tempoM;

    cin >> hI >> mI >> hF >> mF;

    //Realiza Calculo
    if(hI == hF)
    {
        if(mI == mF){
            tempoH = 24;
        }else if(mI < mF){
        tempoH = 0;
        }else if(mI > mF){
            tempoH=23;
        }
    }
    else
    {
        if(hI > hF)
        {
            tempoH = 24 - hI + hF;
            if (tempoH > 24){
                tempoH -= 24;
            }
        }
        else if (hI < hF)
        {
            tempoH = hF - hI;
        }
    }

    if(mI == mF){
        tempoM = 0;
    }else {
        if(mI > mF){
            tempoM = 60-mI + mF;
            if(tempoM >= 60){
                tempoM -= 60;
            }
            if(hF - hI == 1){
                tempoH = 0;
            }
        }else if (mI < mF){
            tempoM = mF - mI;
        }
    }

    cout << "O JOGO DUROU "<< tempoH <<" HORA(S) E "<< tempoM <<" MINUTO(S)" << endl;


    return 0;
}
