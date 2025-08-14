#include <iostream>

using namespace std;

int main() {
  const float PI = 3.1416;
  float radio;

  cout << "--- Calcular Área de un Círculo ---\n";
  cout << "Ingresa el valor del radio del círculo: ";
  cin >> radio;

  float area = PI * (radio * radio);

  cout << "El área del círculo es de " << area << endl;

  return 0;
}
