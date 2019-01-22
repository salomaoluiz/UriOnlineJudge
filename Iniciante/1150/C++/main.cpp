#include <iostream>

using namespace std;

int main ()
{

    int X, Z, sum = 1, aux;
    bool loop = true;

    cin >> X;
   do {
    cin >> Z;
    if(Z > X){
        loop = false;
    }
   }while(loop == true);
    aux = X;
   do {
    X = X + 1;
    aux += X;
    sum++;
   }while(aux <= Z+1);


   cout << sum << endl;
    return 0;
}
