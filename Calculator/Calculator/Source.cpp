#include <iostream>
using namespace std;

int main() {
    double num1, num2; 
    char operation;

    cout << "Enterfirst number: "; // Getting two numbers from the user
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Select an operation (+, -, *, /, %): ";  // Select operation 
    cin >> operation;

    switch (operation) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        }
        else {
            cout << "Error: Division by zero is not allowed!" << endl;
        }
        break;
    case '%':
        if (static_cast<int>(num2) != 0) { // Casting numbers to integers to perform modulus operation
            cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << endl;
        }
        else {
            cout << "Error! Please greater than zero." << endl;
        }
        break;
    default:
        cout << "Invalid!" << endl;
    }

    return 0;
}
