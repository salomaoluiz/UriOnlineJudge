#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double n1, n2, media;
    int aux;
    bool loop = true;
    std::cout.precision(2);

        cin >> n1 >> n2;
    do {
    if((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)){
            media = (n1 + n2)/2;
            std::cout << "media = " << std::fixed << media << endl;
            do{
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> aux;
            switch(aux){
                case 1: cin >> n1 >> n2; break;
                case 2: loop = false; break;
            }
            }while(aux != 1 && aux != 2);
    }else {
        cout << "nota invalida" << endl;
        if(n1 < 0 || n1 > 10){
            cin >> n1;
        }else if(n2 < 0 || n2 > 10){
            cin >> n2;
        }
    }
    }while(loop == true);


    return 0;
}
