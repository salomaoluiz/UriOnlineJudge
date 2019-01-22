#include <iostream>

using namespace std;

int main ()
{

    int A, N, sum = 0;
    bool loop = true;

    cin >> A;
   do {
    cin >> N;
    if(N <= 0){
        loop = true;
    }else {
        for (int i = 0; i < N; i++){
            sum += A + i;
        }
        loop = false;
    }
   }while(loop == true);
   cout << sum << endl;
    return 0;
}
