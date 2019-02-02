#include <iostream>

using namespace std;

int main ()
{
    int L;
    string T;
    double M[12][12], result = 0;

    std::cout.precision(1);

    cin >> L;
    cin >> T;

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            cin >> M[j][i];
        }
    }

    if(T == "S")
    {
        for(int i = 0; i<12; i++)
        {
            result += M[L][i];
        }
    }
    else if(T == "M")
    {
        for(int i = 0; i<12; i++)
        {
            result += M[L][i];
        }
        result /= 12;
    }

    std::cout << std::fixed << result << endl;
    return 0;
}
