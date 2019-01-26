#include <iostream>

using namespace std;

int main ()
{
    long T, N[100000];

    cin >> T;
    for (int i = 0; i<1000; i++)
    {
        cout << "N[" << i << "] = " << i%(T) << endl;
    }
    return 0;
}
