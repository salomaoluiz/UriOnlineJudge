#include <iostream>

using namespace std;

int main ()
{

    string O;
    double M[12][12], result = 0;

    std::cout.precision(1);
    cin >> O;

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            cin >> M[j][i];
        }
    }

    if(O == "S")
    {
        for(int i = 0; i<12; i++)
        {
            for(int j = i+1; j<12; j++){
            result += M[j][i];

            }
        }
    }
    else if(O == "M")
    {
        for(int i = 0; i<12; i++)
        {
            for(int j = i+1; j<12; j++){
            result += M[j][i];

            }
        }
        result /= 66;
    }

    std::cout << std::fixed << result << endl;
    return 0;
}
