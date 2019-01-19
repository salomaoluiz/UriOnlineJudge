#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int n, value[10000];
    string eO = "", pN = "";

    cin >> n;

    //Realiza os Calculos
    for (int j=0; j < n; j++){
        cin >> value[j];
    }

    for (int i=0; i < n; i++)
    {

        if(value[i] == 0)
        {
            cout << "NULL" <<endl;

        }
        else
        {
            if(value[i] > 0)
            {
                pN = "POSITIVE";
            }
            if (value[i] < 0)
            {
                pN = "NEGATIVE";
            }
            if(value[i] % 2 == 0)
            {
                eO = "EVEN";
            }
            if(value[i] %2 != 0)
            {
                eO = "ODD";
            }
        cout << eO << " " << pN << endl;
        }
    }
    return 0;
}
