#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double n1, n2, media, aux;
    int i=0;
    bool loop = true;
    std::cout.precision(2);

        cin >> n1 >> n2;
    do {
    if((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10)){
            media = (n1 + n2)/2;
            std::cout << "media = " << std::fixed << media << endl;
            loop = false;
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
