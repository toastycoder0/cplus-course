#include <cmath>
#include <iostream>

using namespace std;

int main() {
  float a, b, c;

  cout << "--- Resolución de la ecuación ax² + bx + c = 0 por formula general "
       << "---\n";

  cout << "Introduce el primer coeficiente (a): ";
  cin >> a;

  cout << "Introduce el segundo coeficiente (b): ";
  cin >> b;

  cout << "Introduce el tercer coeficiente (c): ";
  cin >> c;

  cout << "La ecuacion con los coeficientes se ve asi: " << a << "x² + " << b
       << "x + " << c << " = 0\n";

  float operacionesRaiz = (b * b) - 4 * a * c;
  float raizResultado = sqrt(operacionesRaiz);

  float x1 = ((b * -1) + raizResultado) / (2 * a);
  float x2 = ((b * -1) - raizResultado) / (2 * a);

  cout << "Los resultados en x1 y x2 es de:\n"
       << "x1 = " << x1 << "\n"
       << "x2 = " << x2 << "\n";

  return 0;
}
