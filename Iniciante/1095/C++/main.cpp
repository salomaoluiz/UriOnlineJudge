#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int I=1, J=60;

    cout << "I=" << I << " " << "J=" << J << endl;
    for (int i = 0; i < 12; i++)
    {
        I += 3;
        J -= 5;
    cout << "I=" << I << " " << "J=" << J << endl;
    }
    return 0;
}
