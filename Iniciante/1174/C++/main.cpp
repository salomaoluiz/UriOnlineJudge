#include <iostream>

using namespace std;

int main ()
{
    double A[100];

    std::cout.precision(1);
    for (int i = 0; i < 100; i++){
    cin >> A[i];
    }
    for (int i = 0; i < 100; i++){
       if(A[i] <= 10){
       std::cout << std::fixed << "A[" << i << "] = " << A[i] << endl;
       }
    }


    return 0;
}
