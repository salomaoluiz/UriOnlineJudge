#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    double I=0, J=1;

    cout << "I=" << I << " " << "J=" << J << endl;
    for (int i = 1; i <= 32; i++)
    {
        if(i%3 == 0)
        {
            I += 0.2;
        }
        if(i%3 == 0)
        {
            J+= 0.2;
            J -= 2;
        }
        else if(i%3 == 1)
        {
            J++;
        }
        else if (i%3 == 2)
        {
            J++;
        }
        cout << "I=" << I << " " << "J=" << J << endl;
    }
    return 0;
}
