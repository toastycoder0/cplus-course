#include <iostream>

using namespace std;

int main() {
  int firstNumber;
  int secondNumber;

  cout << "\nCalculadora multiple---\n";

  cout << "Ingresa el primer número: ";
  cin >> firstNumber;

  cout << "Ingresa el segundo número: ";
  cin >> secondNumber;

  cout << "\n---Operaciones---\n";
  cout << firstNumber << " + " << secondNumber << " = "
       << firstNumber + secondNumber << '\n';
  cout << firstNumber << " - " << secondNumber << " = "
       << firstNumber - secondNumber << '\n';
  cout << firstNumber << " x " << secondNumber << " = "
       << firstNumber * secondNumber << '\n';
  cout << firstNumber << " / " << secondNumber << " = "
       << firstNumber / secondNumber << '\n';

  return 0;
}
