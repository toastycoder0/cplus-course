#include <iostream>
#include <limits>

using namespace std;

int main() {
  double table;

  while (true) {
    cout << "Insert your table number: ";
    cin >> table;

    if (cin.fail()) {
      cout << "Invalid number. Please try again.\n";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else {
      break;
    }
  }

  cout << "\n--- Multiplication Table for " << table << " ---\n";

  for (int multiplier = 1; multiplier < 11; multiplier++) {
    double result = table * multiplier;
    cout << multiplier << " x " << table << " = " << result << "\n";
  }

  return 0;
}
