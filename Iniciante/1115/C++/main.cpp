#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int x, y;

    do
    {
        cin >> x >> y;
        if(x > 0 && y > 0)
        {
            cout << "primeiro" << endl;
        }
        else if(x < 0 && y > 0)
        {
            cout << "segundo" << endl;
        }
        else if (x < 0 && y < 0)
        {
            cout << "terceiro" << endl;
        }
        else if(x > 0 && y < 0)
        {
            cout << "quarto" << endl;
        }
    }
    while(x != 0 && y != 0);

    return 0;
}
