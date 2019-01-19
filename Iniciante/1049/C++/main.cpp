#include <iostream>

using namespace std;

int main ()
{

    //Define Variaveis
    string text1, text2, text3;

    cin >> text1 >> text2 >> text3;





    //Realiza Calculo

    if(text1 == "vertebrado")
    {
        if(text2 == "ave")
        {
            if(text3 == "carnivoro")
            {
                cout << "aguia"<<endl;
            }
            else if(text3 == "onivoro")
            {
                cout << "pomba" << endl;
            }
        }
        else if(text2 == "mamifero")
        {
            if(text3 == "onivoro")
            {
                cout << "homem"<<endl;
            }
            else if(text3 == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }

    }
    else if(text1 == "invertebrado")
    {
        if(text2 == "inseto")
        {
            if(text3 == "hematofago")
            {
                cout << "pulga"<<endl;
            }
            else if(text3 == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
        }
        else if(text2 == "anelideo")
        {
            if(text3 == "hematofago")
            {
                cout << "sanguessuga"<<endl;
            }
            else if(text3 == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }


    return 0;
}
