#include <iostream>

using namespace std;

int main ()
{
    int X[10000], i=0, sum[10000], aux;

    do
    {
        cin >> X[i];

        i++;
    }
    while(X[i-1] != 0);

    for (int j = 0; j < i-1; j++)
    {
        if(X[j] % 2 == 1 || X[j] % 2 == -1)
        {
            X[j]++;
        }
            sum[j] = X[j];
        for(int k = 1; k < 5; k++){
            X[j] += 2;
            sum[j] += X[j];
        }
        cout << sum[j] << endl;
    }
    return 0;
}
