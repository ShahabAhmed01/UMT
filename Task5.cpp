#include <iostream>
using namespace std;
/*
Q5: Write a menu-driven program in c++ using the control structures (i.e. if else conditions) to
calculate the following:
• Press 1: for Addition of two numbers.
• Press 2: for Difference between two numbers.
• Press 3: for Product of two numbers.
• Press 4: for Division of two numbers.
• Press 5: for square of a number.
*/
        int addition(int num1, int num2)
    {
        int result = num1 + num2;
    }
        int subtraction(int num1, int num2)
    {
        int result = num1 - num2;
    }
        int product(int num1, int num2)
    {
        int result = num1 * num2;
    }
        int division(int num1, int num2)
    {
        if (num2 == 0)
        {
            cout << "Invalid: Denominator can't be zero";
        }
        else
        {
        int result = num1 / num2;
        cout << "Division of " << num1 << " and " << num2 << "is: " << result;
        }
    }
        int square(int num1)
    {
        int result = num1 * num1;
    }
int main()
{
    cout << " Press 1: for Addition of two numbers." << endl;
    cout << " Press 2: for Difference between two numbers." << endl;
    cout << " Press 3: for Product of two numbers." << endl;
    cout << " Press 4: for Division of two numbers." << endl;
    cout << " Press 5: for Square of a number." << endl;
    int choice;
    cin >> choice;
    if (choice > 5 || choice < 1)
    {
        cout << "Error: Invalid Choice.";
    }
    else if (choice == 1)
    {
        int number1,number2,answer;
        cout << "You have chosen option 1: Addition \n";
        cout << "Please enter Number One: ";
        cin >> number1;
        cout << "Please enter Number Two: ";
        cin >> number2;
        answer = addition(number1, number2);
        cout << "Addition of " << number1 << " and " << number2 << "is: " << answer;
    }
        else if (choice == 2)
    {
        int number1,number2,answer;
        cout << "You have chosen option 2: Difference \n";
        cout << "Please enter Number One: ";
        cin >> number1;
        cout << "Please enter Number Two: ";
        cin >> number2;
        answer = subtraction(number1, number2);
        cout << "Difference of " << number1 << " and " << number2 << "is: " << answer;
    }
        else if (choice == 3)
    {
        int number1,number2,answer;
        cout << "You have chosen option 3: Product \n";
        cout << "Please enter Number One: ";
        cin >> number1;
        cout << "Please enter Number Two: ";
        cin >> number2;
        answer = product(number1, number2);
        cout << "Product of " << number1 << " and " << number2 << "is: " << answer;
    }
        else if (choice == 4)
    {
        int number1,number2,answer;
        cout << "You have chosen option 4: Division \n";
        cout << "Please enter Number One: ";
        cin >> number1;
        cout << "Please enter Number Two: ";
        cin >> number2;
        answer = division(number1, number2);
    }
        else if (choice == 5)
    {
        int number1,number2,answer;
        cout << "You have chosen option 5: Square \n";
        cout << "Please enter a Number: ";
        cin >> number1;
        answer = square(number1);
        cout << "Square of " << number1 << " is: " << answer;
    }
}
