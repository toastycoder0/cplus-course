#include <iostream>

using namespace std;

int main() {
  int number;

  while (true) {
    cout << "Ingresa el número a evaluar: ";
    cin >> number;

    if (cin.fail() || number < 1) {
      cout << "Entrada incorrecta. Intenta de nuevo.\n";
      cin.clear();
      cin.ignore(10000, '\n');
      continue;
    }

    break;
  }

  cout << "El número " << (number % 2 == 0 ? "par" : "impar") << "\n";

  return 0;
}
