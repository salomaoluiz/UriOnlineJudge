#include <iostream>

using namespace std;

int main ()
{

  int X = 0, Y = 0;

  cin >> X >> Y;
  for(int i = 1; i <= Y ; i++){
        cout << i;
        if(i % X != 0){
            cout << " ";
        }else if(i % X == 0){
            cout << endl;
        }
  }

    return 0;
}
