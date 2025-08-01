#include <iostream>
#include <string>

using namespace std;

int main() {
  float studentGradesTotal = 0;
  string studentName;

  vector<string> GRADES_NAMES = {"Español",  "Matematicas", "Física",
                                 "Química",  "Algorítmos",  "Lógica",
                                 "Historia", "Química"};

  cout << "Nombre del alumno: ";
  getline(cin, studentName);

  for (auto gradeName : GRADES_NAMES) {
    float inputGrade;

    while (true) {
      cout << "Ingresa el valor de la calificación de " << gradeName << ": ";
      cin >> inputGrade;

      if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada no válida. Por favor ingresa un número valido.\n";
        continue;
      }

      studentGradesTotal += inputGrade;
      break;
    }
  }

  float gradeAverage = studentGradesTotal / GRADES_NAMES.size();

  cout << "El promedio de " << studentName << " es de " << gradeAverage << "\n";

  return 0;
}
