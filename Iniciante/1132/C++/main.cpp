#include <iostream>

using namespace std;

int main ()
{

  int X = 0, Y = 0, sum = 0, aux;

cin >> X >> Y;


if (X > Y){
    aux = X;
    X = Y;
    Y = aux;
}
for (int i = X; i <= Y; i++){
    if(i % 13 != 0){
        sum += i;
    }
}

cout << sum << endl;
    return 0;
}
