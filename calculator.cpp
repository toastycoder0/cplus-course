#include <exception>
#include <iostream>
#include <string>

int main() {
  std::string inputMessage = "Insert your table number: ";
  std::string errorMessage = "Invalid number. Please try again.\n";
  double tableNumber;
  std::string lineInput;

  while (true) {
    std::cout << inputMessage;
    std::getline(std::cin, lineInput);

    try {
      tableNumber = std::stod(lineInput);
      break;
    } catch (const std::exception &e) {
      std::cout << errorMessage;
      continue;
    }
  }

  std::cout << "\n--- Multiplication Table for " << tableNumber << " ---\n";

  for (int multiplier = 1; multiplier < 11; multiplier++) {
    double result = tableNumber * multiplier;
    std::cout << multiplier << " x " << tableNumber << " = " << result << "\n";
  }

  return 0;
}
