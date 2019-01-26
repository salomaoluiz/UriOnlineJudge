#include <iostream>

using namespace std;

int main ()
{
    int V, X[10];

    cin >> V;

   X[0] = V;
       cout << "N[" << 0 << "] = " << X[0] << endl;
    for (int i = 1; i < 10; i++){
       X[i] = 2*X[i-1];
       cout << "N[" << i << "] = " << X[i] << endl;
    }


    return 0;
}
