#include <iostream>

using namespace std;

int main ()
{

    int N, aux = 0, aux1 = 1, aux2 = 0, i=0;
    bool loop = true;

    cin >> N;

    cout << aux2 << " " << aux1 << " ";
    do
    {
        aux = aux1 + aux2;
        aux2 = aux1;
        aux1 = aux;
        if(i <= N-4){
        cout << aux << " ";
        }else {
        cout << aux << endl;
        }
        i++;
    }
    while (i <= N-3);

    return 0;
}
