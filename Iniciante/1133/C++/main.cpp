#include <iostream>

using namespace std;

int main ()
{

  int X = 0, Y = 0, aux;

cin >> X >> Y;

if (X > Y){
    aux = X;
    X = Y;
    Y = aux;
}
if(X % 5 == 2){
    X ++;
}else if (X % 5 == 3){
    X++;
}
if(Y % 5 == 2){
    Y --;
}if (Y % 5 == 3){
    Y--;
}

for (int i = X; i < Y; i++){
    if(i % 5 == 2 || i%5 == 3){
    cout << i << endl;
    }
}

    return 0;
}
