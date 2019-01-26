#include <iostream>

using namespace std;

int main ()
{
    int N, val, pos;

    cin >> N;

    int X[N];
    for (int i =0; i < N; i++)
    {
        cin >> X[i];
    }
    val = X[0];
    pos = 0;
    for (int i = 0; i < N; i++){
        if(val > X[i]){
            val = X[i];
            pos = i;
        }
    }

    cout << "Menor valor: " << val << "\nPosicao: " << pos << endl;

    return 0;
}
