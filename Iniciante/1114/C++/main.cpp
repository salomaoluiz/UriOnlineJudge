#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    int senha, loop = true, i = 0;

    do
    {
        cin >> senha;
        if(senha == 2002){
            cout << "Acesso Permitido" << endl;
            loop = false;
        }else{

        cout << "Senha Invalida" << endl;
        }
    }
    while(loop == true);

    return 0;
}
