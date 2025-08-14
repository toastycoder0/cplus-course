#include <iostream>

using namespace std;

int main() {
  for (int numero = 1; numero < 51; numero++) {
    int esPar = numero % 2;

    if (esPar == 0) {
      continue;
    }

    cout << "El numero " << numero << " es impar\n";
  }

  return 0;
}
