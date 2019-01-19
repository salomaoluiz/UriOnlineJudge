#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n[5], aux = 0;

    cin >> n[0] >> n[1]>> n[2]>> n[3]>> n[4];

    //Realiza os calculos

    for(int i=0; i< 6; i++)
    {
        if(n[i]== 0){

        }else if(n[i]%2 == 0)
        {
            aux++;
        }
    }
    cout << aux << " valores pares" << endl;

    return 0;
}
