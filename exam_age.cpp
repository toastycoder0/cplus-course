#include <iostream>

using namespace std;

int main() {
  int fechaNacimiento;

  cout << "Ingresa tu año de nacimiento: ";
  cin >> fechaNacimiento;

  int edad = 2025 - fechaNacimiento;

  if (edad > 17) {
    cout << "Ya cumples con la mayoria de edad" << endl;
  } else {
    cout << "No cuentas con la mayoria de edad" << endl;
  }

  cout << "Tu edad calculada es de: " << edad << endl;

  return 0;
}
