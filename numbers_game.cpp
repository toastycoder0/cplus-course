#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand(time(0));

  int numeroSecreto = rand() % 100 + 1;
  int intento;
  int intentosRealizados = 0;

  cout << "¡Bienvenido al juego de adivinar el número!" << endl;
  cout << "Estoy pensando en un número entre 1 y 100." << endl;

  do {
    cout << "Ingresa tu intento: ";
    cin >> intento;
    intentosRealizados++;

    if (intento < numeroSecreto) {
      cout << "El número secreto es MAYOR que " << intento << "." << endl;
    } else if (intento > numeroSecreto) {
      cout << "El número secreto es MENOR que " << intento << "." << endl;
    } else {
      cout << "¡Felicidades! Adivinaste el número en " << intentosRealizados
           << " intentos." << endl;
    }
  } while (intento != numeroSecreto);

  return 0;
}
