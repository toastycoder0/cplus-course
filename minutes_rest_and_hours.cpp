#include <iostream>
using namespace std;

int main() {
  int minutos, horas, minutos_restantes;

  cout << "Ingresa la cantidad de minutos: ";
  cin >> minutos;

  horas = minutos / 60;
  minutos_restantes = minutos % 60;

  cout << "Equivale a: " << horas << " hora(s) y " << minutos_restantes
       << " minuto(s)." << endl;

  return 0;
}
