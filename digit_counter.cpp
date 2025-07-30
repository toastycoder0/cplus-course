#include <iostream>
#include <regex>
#include <string>

int main() {
  std::string numberToCount;
  std::regex numericPattern("[0-9]+");

  std::cout << "Enter the number to be counted: ";
  std::cin >> numberToCount;

  if (!std::regex_match(numberToCount, numericPattern)) {
    std::cout << "The inserted value doesn't have a valid pattern";
    return 1;
  }

  std::cout << "The number of digits in the inserted value is: "
            << numberToCount.length() << '\n';

  return 0;
}
