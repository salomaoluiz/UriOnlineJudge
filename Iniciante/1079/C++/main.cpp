#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double n;
    double v[3][10000], media[10000];

    cin >> n;

    //Realiza os Calculos
    std::cout.precision(1);
    for(int i=1 ; i<=n; i++){
            for (int j = 0; j < 3; j++){
            cin >> v[j][i];
            }
    }
    for(int l=1; l <= n; l++){
            media[l] = (v[0][l]*2 + v[1][l]*3 + v[2][l]*5)/10;
            std::cout<<std::fixed << media[l] << endl;
    }
    return 0;
}
