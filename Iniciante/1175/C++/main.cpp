#include <iostream>

using namespace std;

int main ()
{
    int Y[20], aux[20];


    for (int i = 0; i < 20; i++){
    cin >> Y[i];
    }

    for (int i = 0; i < 20; i++){
        aux[i] = Y[19-i];
       cout << "N[" << i << "] = " << aux[i] << endl;
    }


    return 0;
}
