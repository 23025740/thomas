#include <iostream>

using namespace std;


int performOperation(int choice, int num1, int num2);

int main() {
  int choose, num1, num2;
  char cont;

  do {
    // Display menu
    cout << "\nMenu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;


    cout << "Enter two integers: ";
    cin >> num1 >> num2;


    int result = performOperation(choose, num1, num2);


    if (result == -1) {
      cout << "The second integer is zero. Divide by zero." << endl;
    } else {
      cout << "The result is: " << result << endl;
    }


    cout << "Press 'y' or 'Y' to continue: ";
    cin >> cont;
  } while (cont == 'y' || cont == 'Y');

  cout << "Exiting program." << endl;

  return 0;
}


int performOperation(int choose, int num1, int num2) {
  switch (choice) {
    case 1:
      return num1 + num2;
    case 2:
      return num1 - num2;
    case 3:
      return num1 * num2;
    case 4:
      if (num2 == 0) {
        return -1;
      } else {
        return num1 / num2;
      }
    default:
      cout << "Invalid choice." << endl;
      return 0;
  }
}
