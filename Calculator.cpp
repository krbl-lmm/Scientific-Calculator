#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //declaration
    int menu;
    float num1, num2;
    char operation;

    //main menu
    cout << "\tCalculator\n1. +, -, *, /, %\n2. Trigonometric Functions\n";
    cin >> menu;
    switch (menu) {
        case 1:
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
            cout << (int)num1 % (int)num2;
            break;
            default:
            cout << "Error";
            break;
        }
        break;
        case 2:
        //function menu
        cout << "1. sin\n2. cos\n3. tan\n4. csc\n5. sec\n6. cot\n";
        cin >> menu;
        cout << "Enter number: ";
        cin >> num1;
        switch (menu) {
            case 1:
            cout << "sin(" << num1 << ") = " << sin(num1) << endl;
            break;
            case 2:
            cout << "cos(" << num1 << ") = " << cos(num1) << endl;
            break;
            case 3:
            cout << "tan(" << num1 << ") = " << tan(num1) << endl;
            break;
            case 4:
            cout << "csc(" << num1 << ") = " << 1/sin(num1) << endl;
            break;
            case 5:
            cout << "sec(" << num1 << ") = " << 1/cos(num1) << endl;
            break;
            case 6:
            cout << "cot(" << num1 << ") = " << 1/tan(num1) << endl;
            break;
            default:
            cout << "Error";
            break;
        }
    }
}
