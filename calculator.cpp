#include <iostream>
#include <ostream>

using namespace std;

int main() {
  float tableNumber;

  while (true) {
    cout << "Ingresa el numero de tabla: ";
    cin >> tableNumber;

    if (cin.fail() > 0) {
      cout << "El valor esta mal 😔, Ingresa un número valido.\n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      continue;
    }

    break;
  }

  cout << "\n--- Tabla del " << tableNumber << " --- \n\n";

  for (int multiplier = 1; multiplier < 11; multiplier++) {
    float result = tableNumber * multiplier;
    cout << tableNumber << " x " << multiplier << " = " << result << "\n";
  }

  return 0;
}
