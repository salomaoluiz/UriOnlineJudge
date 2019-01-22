#include <iostream>

using namespace std;

int main ()
{

    int N, i=1, factor;
    bool loop = true;

    cin >> N;

    factor = N;
    if(N == 0)
    {
        factor = 1;
    }
    else
    {

        do
        {
            N -= 1;
            factor *= N;
        }
        while (N > 1);
    }

    cout << factor << endl;
    return 0;
}
