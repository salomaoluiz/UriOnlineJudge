#include <iostream>

using namespace std;

int main ()
{

  int n, loop = 1;
  cin >> n;
  for (int i = 1; i <= n; i++){
    cout << i << " " << i*i << " " << i*i*i << endl;
  }
    return 0;
}
