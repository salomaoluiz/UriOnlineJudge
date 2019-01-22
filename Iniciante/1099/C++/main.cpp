#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n1[10000], n2[10000], n, aux = 0, sum[10000], aux1 = 0;

    cin >> n;

    for (int i=0; i < n; i++ )
    {
        cin >> n1[i] >> n2[i];
    }
    for(int j=0; j<n; j++)
    {
        if(n1[j]>n2[j])
        {
            aux = n1[j];
            n1[j] = n2[j];
            n2[j] = aux;
        }
        if(n1[j] % 2 == 0)
        {
            n1[j]++;
        }
        else if(n1[j] % 2 != 0)
        {
            n1[j] += 2;
        }

        if(n2[j] % 2 == 0)
        {
            n2[j]--;
        }
        else if(n2[j] % 2 != 0)
        {
            n2[j] -= 2;
        }
    }
    //Realiza os calculos
    while(aux1 < n){
        for (int k = n1[aux1]; k <= n2[aux1]; k += 2)
        {
            sum[aux1] += k;
        }
        cout << sum[aux1] << endl;
        aux1++;
    }

    return 0;
}
