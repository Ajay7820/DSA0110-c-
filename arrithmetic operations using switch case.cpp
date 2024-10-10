#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    char operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operation (+, -, *, /, %): ";
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
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        case '%':
            if (num2 != 0)
                cout << "Result: " << num1 % num2 << endl;
            else
                cout << "Error: Modulus by zero" << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }
    return 0;
}
