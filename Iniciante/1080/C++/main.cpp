#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n[100], major, pos;

    for (int i = 0; i<100; i++){
    cin >> n[i];
    }

        major = n[0];
        pos = 1;

    //Realiza os Calculos
   for(int j = 0; j<100; j++){
    if(n[j] > major){
        major = n[j];
        pos = j+1;
    }

   }
   cout << major << endl;
   cout << pos <<endl;
    return 0;
}
