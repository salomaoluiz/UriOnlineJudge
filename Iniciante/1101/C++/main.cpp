#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int M[10000], N[10000], high[10000], lower[10000],  i=0, sum[10000];

    do {
        cin >> M[i] >> N[i];
        i++;
    }
    while((M[i-1] > 0) && (N[i-1] > 0));

    for (int j = 0; j < i-1; j++){
        if(M[j] > N[j]){
            high[j] = M[j];
        }else {
            high[j] = N[j];
        }
        if(M[j] < N[j]){
            lower[j] = M[j];
        }else {
            lower[j] = N[j];
        }
    }
for (int n = 0; n < i-1; n++){
    for (int k = lower[n]; k <= high[n] ; k++){
        cout << k << " ";
        sum[n] += k;
    }
    cout << "Sum=" <<  sum[n] << endl;
}
    return 0;
}
