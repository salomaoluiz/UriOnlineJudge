#include <iostream>
#include<iomanip>
using namespace std;


int main ()
{

    //Define Variaveis
    double n1, n2,n3,n4,exame, media;

    cin >> n1;
    cin >> n2;
    cin >> n3;
    cin >> n4;

    //Realiza Calculo
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)/(10);
    std::cout.precision(1);
    cout << "Media: "<<std::fixed << media << endl;
    if(media >= 7)
    {
        cout << "Aluno aprovado." <<endl;

    }
    else if(media < 5)
    {
        cout << "Aluno reprovado." << endl;

    }
    else if(media >= 5 && media < 7)
    {
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << std::fixed << exame << endl;
        media = (media + exame)/2;
        if(media >= 5)
        {
            cout << "Aluno aprovado." <<endl;
        }
        else
        {
            cout << "Aluno reprovado." <<endl;
        }
        cout << "Media final: "<<std::fixed<<media <<endl;
    }

    return 0;
}
