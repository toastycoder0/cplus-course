#include <iostream>

using namespace std;

int main() {
  double z = 0;
  cout << z << endl;

  {
    z = z + 1.;
    {
      int z = 2;
      cout << z << endl;
    }
    {
      cout << z << endl;
    }
  }
}
