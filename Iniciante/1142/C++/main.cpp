#include <iostream>

using namespace std;

int main ()
{

  int n, loop = 1;
  cin >> n;
  for (int i = 1; i < n*4; i += 4){
    cout << i << " " << i+1 << " " << i+2<< " PUM" << endl;
  }
    return 0;
}
