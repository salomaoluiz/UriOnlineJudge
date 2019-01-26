#include <iostream>

using namespace std;

int main ()
{
    int X[15], jP = 0, jI = 0, par[5] = {}, impar[5] = {};

    for (int i =0; i < 15; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < 15; i++)
    {
        if(X[i] % 2 == 0 || X[i] == 0)
        {
            par[jP] = X[i];
            jP++;
            if(jP == 5)
            {
                for (int j = 0; j<= 4; j++)
                {
                    cout << "par[" << j << "] = " << par[j] << endl;
                    par[j] = 0;
                }
                jP = 0;
            }

        }
        else
        {
            impar[jI] = X[i];
            jI++;
            if(jI == 5)
            {
                for (int j = 0; j<= 4; j++)
                {
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                    impar[j] = 0;
                }
                jI = 0;
            }
        }
    }
    for (int j = 0; j< jI; j++)
    {
            cout << "impar[" << j << "] = " << impar[j] << endl;
    }
    for (int j = 0; j< jP; j++)
    {

            cout << "par[" << j << "] = " << par[j] << endl;

    }
    return 0;
}
