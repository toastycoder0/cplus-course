#include <iostream>

using namespace std;

int main() {
  float numero;

  cout << "Ingresa el número a evaluar: ";
  cin >> numero;

  if (numero < 0) {
    cout << "El número es negativo" << endl;
  } else {
    cout << "El número es positivo" << endl;
  }

  return 0;
}
