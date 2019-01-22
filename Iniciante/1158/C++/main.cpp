#include <iostream>

using namespace std;

int main ()
{
    int N, X[10000], Y[10000], sum[10000], loop = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
        if(X[i] % 2 == 0)
        {
            X[i]++;
        }

        while(loop < Y[i])
        {
            sum[i] += X[i] + 2*loop;
            loop++;
        }
        loop = 0;
    }
for(int i = 0; i < N; i++)
{
    cout << sum[i] << endl;
}
return 0;
}
