
#include <iostream>
using namespace std;

int main() {
    char op;
    cout << "Please enter a Operator (+, -, *, /)" << endl;
    cin >> op;
    cout << "Enter value one" << endl;
    float num1;
    cin >> num1;
    cout << "Enter value two" << endl;
    float num2;
    cin >> num2;
    switch (op){
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
        break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 <<endl;
        break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 <<endl;
        break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 <<endl;
        break;
        default:
            cout << "Enter a valid Operator" << endl;
    }
    return 0;
}

