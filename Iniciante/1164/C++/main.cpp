#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    int N, X[10000], sum=0;

    cin >> N;
    for(int i = 0; i<N; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < N; i++){
        for(int j = 1; j<X[i]; j++){
            if(X[i] % j == 0){
                sum += j;
            }
        }
                if(sum == X[i]){
                    cout << X[i] << " eh perfeito" << endl;
                    sum=0;
                }else {
                    cout << X[i] << " nao eh perfeito" << endl;
                    sum=0;
                }
    }


    return 0;
}
