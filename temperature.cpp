#include <iostream>

using namespace std;

int main() {
  int temperatura;

  cout << "Ingresa la temperatura: ";
  cin >> temperatura;

  if (temperatura < 30) {
    cout << "Hace frio\n";
  } else {
    cout << "Hace calor\n";
  }

  return 0;
}
