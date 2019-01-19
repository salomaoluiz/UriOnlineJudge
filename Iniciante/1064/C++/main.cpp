#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double n[6], aux = 0, media = 0;

    cin >> n[0] >> n[1]>> n[2]>> n[3]>> n[4]>> n[5];

    //Realiza os calculos
    std::cout.precision(1);
    for(int i=0; i< 6; i++){
        if(n[i]>0){
            aux++;
            media += n[i];
        }

    }
    if(aux == 0){
        media = 0;
    }else {
        media /= aux;

    }

    cout << aux << " valores positivos" << endl;
    std::cout <<std::fixed << media <<endl;
    return 0;
}
