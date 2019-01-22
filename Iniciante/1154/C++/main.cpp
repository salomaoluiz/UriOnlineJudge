#include <iostream>

using namespace std;

int main ()
{

    int n[10000], i=0;
    double media = 0;

    bool loop = true;

    std::cout.precision(2);
    do
    {
        cin >> n[i];

        i++;
    }
    while(n[i-1] > 0);

    for(int j = 0; j < i-1; j++)
    {
        media += (double) n[j];
    }
    media /= (double) i-1;
    std::cout << std::fixed << media << endl;
    return 0;
}
