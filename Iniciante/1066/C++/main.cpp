#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n[5], pos = 0, neg = 0, par = 0, imp = 0;

    cin >> n[0] >> n[1]>> n[2]>> n[3]>> n[4];

    //Realiza os calculos

    for(int i=0; i< 5; i++)
    {
        if(n[i] == 0){
            par++;
        }else if(n[i] != 0){
            if(n[i]%2 == 0)
            {
                par++;
            }
            if(n[i]%2 != 0)
            {
                imp++;
            }
            if(n[i]>0)
            {
                pos++;
            }
            if(n[i]<0)
            {
                neg++;
            }
        }
    }


    cout << par <<" valor(es) par(es)" <<endl;
    cout <<imp <<" valor(es) impar(es)"<<endl;
    cout <<pos <<" valor(es) positivo(s)"<<endl;
    cout <<neg <<" valor(es) negativo(s)"<<endl;

    return 0;
}
