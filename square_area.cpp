#include <iostream>

int main() {
  double squareSide;

  while (true) {
    std::cout << "Enter the length of one of the square sides (m2): ";
    std::cin >> squareSide;

    if (std::cin.fail()) {
      std::cout << "The inserted value is not valid try again.\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    break;
  }

  double squareArea = squareSide * squareSide;
  std::cout << "The square area is: " << squareArea << "m2 \n";

  return 0;
}
