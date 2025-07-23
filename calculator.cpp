#include <iostream>

int main() {
  std::string inputMessage = "Enter your table number: ";
  std::string errorMessage = "Invalid input. Please enter a valid number.\n";
  double tableNumber;

  while (true) {
    std::cout << inputMessage;
    std::cin >> tableNumber;

    if (std::cin.fail()) {
      std::cout << errorMessage;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    break;
  }

  std::cout << "\n--- Multiplication Table for " << tableNumber << " ---\n";

  for (int multiplier = 1; multiplier < 11; multiplier++) {
    double result = multiplier * tableNumber;
    std::cout << multiplier << " x " << tableNumber << " = " << result << "\n";
  }

  return 0;
}
