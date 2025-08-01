#include <iostream>
#include <string>

using namespace std;

int main() {
  const int GRADES_TO_READ = 7;
  float studentGradesTotal = 0;
  string studentName;

  cout << "Ingresa el nombre del alumno: ";
  getline(cin, studentName);

  for (int gradeToInsert = 0; gradeToInsert < GRADES_TO_READ; gradeToInsert++) {
    float inputGrade;

    while (true) {
      cout << "Ingresa el valor de la calificación " << gradeToInsert + 1
           << ": ";
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

  float gradeAverage = studentGradesTotal / GRADES_TO_READ;

  cout << "El promedio del estudiante " << studentName << " es de "
       << gradeAverage << "\n";

  return 0;
}
