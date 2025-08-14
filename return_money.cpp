#include <iostream>

using namespace std;

int main() {
  float precioProducto;
  float dineroPagado;

  cout << "Ingresa el precio del producto: ";
  cin >> precioProducto;

  cout << "Ingresa la cantidad de dinero a pagar: ";
  cin >> dineroPagado;

  if (precioProducto > dineroPagado) {
    cout << "No tienes dinero suficiente, te hacen falta: $"
         << precioProducto - dineroPagado << endl;
  } else {
    cout << "Tu cambio es de: $" << dineroPagado - precioProducto << endl;
  }

  return 0;
}
