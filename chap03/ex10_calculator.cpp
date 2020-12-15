#include "../std_lib_facilities.h"

int main() {
    string op;
    double num1;
    double num2;
    double result;

    cout << "Enter a operator and two operands (numbers)" << endl;
    cout << "(Available operator: +, -, *, /, plus, minus, mul, div)" << endl;
    cout << ">> ";
    cin >> op >> num1 >> num2;
    cout << endl;

    if (op == "+" || op == "plus")
        result = num1 + num2;
    else if (op == "-" || op == "minus")
        result = num1 - num2;
    else if (op == "*" || op == "mul")
        result = num1 * num2;
    else if (op == "/" || op == "div")
        result = num1 / num2;
    else {
        cout << "This operation is not supported." << endl;
        return 0;
    }

    cout << "Result: " << result << endl;
}
