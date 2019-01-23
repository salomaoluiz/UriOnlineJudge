#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int T, PA[10000], PB[10000], aux1, aux2, anos=0;
    double G1[10000], G2[10000];

    cin >> T;
    for(int i = 0; i<T; i++)
    {
        cin >> PA[i] >> PB[i] >> G1[i] >> G2[i];
    }

    for (int j = 0; j < T; j++)
    {
        while(PA[j] <= PB[j])
        {
            aux1 = ceil(PA[j]);
            aux2 = ceil(PB[j]);
            PA[j] = aux1 + aux1*(G1[j]/100);
            PB[j] = aux2 + aux2*(G2[j]/100);
            anos++;
            if(anos > 100)
            {
                break;
            }
        }
        if(anos > 100)
        {
            cout << "Mais de 1 seculo." << endl;
            anos = 0;
        }
        else
        {
            cout << anos << " anos." << endl;
            anos = 0;
        }

    }
    return 0;
}
