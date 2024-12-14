// CALCULATOR
#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Basic Calculator\n";
    cout << "Enter first number ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /) ";
    cin >> operation;

    cout << "Enter second number  ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;

        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;

        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;

        default:
            cout << "Error: Invalid operation.\n";
    }

    return 0;
}