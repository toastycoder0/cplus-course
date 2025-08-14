#include <iostream>

using namespace std;

int main() {
  int resultado = 1;

  for (int multiplicador = 1; multiplicador < 7; multiplicador++) {
    resultado *= multiplicador;
  }

  cout << "El resultado es de " << resultado << endl;

  return 0;
}
