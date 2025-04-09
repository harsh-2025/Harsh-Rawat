#include<bits/stdc++.h>

using namespace std;

class CalculatorClass {
private:
    double a, b;
    string operationToPerform;

public:
    CalculatorClass(double num1, double num2, string op) {
        a = num1;
        b = num2;
        operationToPerform = op;
    }

    void calculate() {
        if (operationToPerform == "add" || operationToPerform == "+") {
            cout << "Result: " << a + b << endl;
        } else if (operationToPerform == "subtract" || operationToPerform == "-") {
            cout << "Result: " << a - b << endl;
        } else if (operationToPerform == "multiply" || operationToPerform == "*") {
            cout << "Result: " << a * b << endl;
        } else if (operationToPerform == "divide" || operationToPerform == "/") {
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
        } else {
            cout << "Invalid operationToPerform. Please use add, subtract, multiply, or divide." << endl;
        }
    }
};

int main() {
    double num1, num2;
    string op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operationToPerform (add, subtract, multiply, divide or +, -, *, /): ";
    cin >> op;

    CalculatorClass calc(num1, num2, op);
    calc.calculate();

    return 0;
}
