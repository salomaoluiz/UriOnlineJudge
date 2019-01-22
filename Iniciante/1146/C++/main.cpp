#include <iostream>

using namespace std;

int main ()
{

    int X[10000], i=0;
    bool loop = true;
    do
    {
        cin >> X[i];
        if(X[i]== 0)
        {
            loop = false;
        }
        i++;
    }
    while(loop == true);

    for(int j = 0; j < i; j++)
    {
        for (int k = 1; k <= X[j]; k++)
        {
            cout << k;
            if(k != X[j])
            {
                cout << " ";
            }
            else if (k == X[j])
            {
                cout << endl;
            }
        }
    }
    return 0;
}
