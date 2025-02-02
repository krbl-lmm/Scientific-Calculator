#include <iostream>

using namespace std;

int main() {
    //declaration
    int num1, num2;
    char operation;

    //welcome statement
    cout << "\tCalculator\n";
    
    //input numbers and operation
    cout << "Enter first number: ";
    cin >> num1;
    cout << num1 << endl;
    cout << "Enter operation: ";
    cin >> operation;
    cout << num1 << " " << operation << endl;
    cout << "Enter second number: ";
    cin >> num2;
    cout << endl << num1 << " " << operation << " " << num2 << " = ";

    //calculation
    switch (operation) {
        case '+':
        cout << num1 + num2;
        break;
        case '-':
        cout << num1 - num2;
        break;
        case '*':
        cout << num1 * num2;
        break;
        case '/':
        cout << num1 / num2;
        break;
        case '%':
        cout << num1 % num2;
        break;
        default:
        cout << "Error";
    }
}
