#include <iostream>

using namespace std;

int main ()
{

  int alcool = 0, gasolina = 0, disel = 0, aux;
  bool loop = true;

do {
    cin >> aux;
    switch(aux){
    case 1: alcool++; break;
    case 2: gasolina++; break;
    case 3: disel++; break;
    case 4: loop = false; break;
    default: break;
    }

}while(loop == true);

cout << "MUITO OBRIGADO" << endl;
cout << "Alcool: " << alcool << endl;
cout << "Gasolina: " << gasolina << endl;
cout << "Diesel: " << disel << endl;

    return 0;
}
