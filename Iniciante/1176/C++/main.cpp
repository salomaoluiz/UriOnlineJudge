#include <iostream>

using namespace std;

int main ()
{
    long long T, N[100000], F[10000][3], n = 0, i = 2;

    cin >> T;
    do
    {
        cin >> N[n];
        n++;
    }
    while(n < T);

    for (int j = 0; j < T; j++)
    {
        F[j][0] = 0;
        F[j][1] = 1;
        if(N[j] == 0)
        {
            cout << "Fib(0) = 0" << endl;
        }
        else if(N[j] == 1)
        {
            cout << "Fib(1) = 1" << endl;
        }
        else
        {
            do
            {
                F[j][2] = F[j][0] + F[j][1];
                F[j][0] = F[j][1];
                F[j][1] = F[j][2];
                i++;
            }
            while(i <= N[j]);

            cout << "Fib(" << i-1 << ") = " << F[j][2] << endl;
            i = 2;

        }
    }

    return 0;
}
