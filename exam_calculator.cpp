#include <iostream>

using namespace std;

int main() {
  float numeroDeTabla;

  cout << "Ingresa el número de tabla de multiplicación: ";
  cin >> numeroDeTabla;

  for (int multiplicador = 1; multiplicador < 11; multiplicador++) {
    float resultado = multiplicador * numeroDeTabla;
    cout << numeroDeTabla << " x " << multiplicador << " = " << resultado
         << endl;
  }

  return 0;
}
