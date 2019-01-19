#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n;

    cin >> n;

    //Realiza os calculos

    if(n%2 == 0)
    {
        n++;
    }
    cout << n << endl;
    for(int i=1; i<6; i++)
    {
        n += 2;
        cout << n << endl;
    }


    return 0;
}
