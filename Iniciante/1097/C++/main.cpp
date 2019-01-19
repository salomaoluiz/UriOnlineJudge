#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int I=1, J=7;

    cout << "I=" << I << " " << "J=" << J << endl;
    for (int i = 1; i <= 14; i++)
    {
        if(i%3 == 0)
        {
            I += 2;
        }
        if(i%3 == 0)
        {
            J+=4;
        }
        else if(i%3 == 1)
        {
            J--;
        }
        else if (i%3 == 2)
        {
            J--;
        }
        cout << "I=" << I << " " << "J=" << J << endl;
    }
    return 0;
}
