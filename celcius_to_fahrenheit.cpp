#include <iostream>

int main() {
  float temperaturaCelsius;
  float temperaturaFahrenheit;

  std::cout << "--- Conversor de Celsius a Fahrenheit ---" << std::endl;
  std::cout << "Ingresa la temperatura en grados Celsius: ";
  std::cin >> temperaturaCelsius;

  temperaturaFahrenheit = (temperaturaCelsius * 9.0 / 5.0) + 32.0;

  std::cout << temperaturaCelsius << " grados Celsius equivalen a "
            << temperaturaFahrenheit << " grados Fahrenheit." << std::endl;

  return 0;
}
