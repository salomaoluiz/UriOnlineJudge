#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int grenais = 0, vG = 0, vI = 0, empate = 0, loop = 1, I, G, aux;

    do
    {
        cin >> I >> G;
        if(I > G)
        {
            vI++;
        }
        else if(G > I)
        {
            vG++;
        }
        else if(G == I)
        {
            empate++;
        }
        grenais++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> aux;
        switch(aux)
        {
        case 1:
            loop = 1;
            break;
        case 2:
            loop = 2;
            break;
        }
    }
    while(loop == 1);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << vI << endl;
    cout << "Gremio:" << vG << endl;
    cout << "Empates:" << empate << endl;

    if(vI > vG)
    {
        cout << "Inter venceu mais" << endl;
    }
    else if (vI < vG)
    {
        cout << "Gremio venceu mais" << endl;
    }
    else if (vI == vG)
    {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
