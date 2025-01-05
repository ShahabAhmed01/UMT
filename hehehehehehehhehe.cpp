#include <iostream>
#include <windows.h>
#include <cmath> // Including this library for advanced mathematical functions
 using namespace std;

// Function to change color of output text
void setColor(int textColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, textColor);
}

// Function to print the main menu
void mainMenu() {
    setColor(9);
    cout << "\n\t Calculator \n" << endl;
    setColor(12);
    cout << " 1. ";
    setColor(7);
    cout << "Basic Operations" << endl;
    setColor(12);
    cout << " 2. ";
    setColor(7);
    cout << "Advanced Operations" << endl;
    setColor(12);
    cout << " 3. ";
    setColor(7);
    cout << "Evaluate Expression" << endl;
    setColor(12);
    cout << " 4. ";
    setColor(9);
    cout << "Exit \n" << endl;
    setColor(9);
    cout << " Select";
    setColor(7);
    cout << " an ";
    setColor(9);
    cout << "Option: ";
}

// Function to print the advanced menu
void advancedMenu() {
    setColor(9);
    cout << "\n\t Advanced Operations \n" << endl;
    setColor(12);
    cout << " 1. ";
    setColor(7);
    cout << "Exponentiation (^)" << endl;
    setColor(12);
    cout << " 2. ";
    setColor(7);
    cout << "Square Root (√)" << endl;
    setColor(12);
    cout << " 3. ";
    setColor(7);
    cout << "Trigonometric Functions (sin, cos, tan)" << endl;
    setColor(12);
    cout << " 4. ";
    setColor(9);
    cout << "Return to Main Menu \n" << endl;
    setColor(9);
    cout << " Select";
    setColor(7);
    cout << " an ";
    setColor(9);
    cout << "Option: ";
}

// Function to ask if the user wants to display the advanced menu again or exit the calculator
bool askContinueAdvanced() {
    int contChoice;
    setColor(9);
    cout << "\n\t Do you want to display the advanced menu again or exit?" << endl;
    setColor(12);
    cout << " 1. ";
    setColor(7);
    cout << "Display Advanced Menu" << endl;
    setColor(12);
    cout << " 2. ";
    setColor(9);
    cout << "Exit \n" << endl;
    setColor(9);
    cout << " Select";
    setColor(7);
    cout << " an ";
    setColor(9);
    cout << "Option: ";
    setColor(12);
    cin >> contChoice;

    return contChoice == 1;
}

// Function to ask if the user wants to display the basic menu again or exit the calculator
bool askContinueBasic() {
    int contChoice;
    setColor(9);
    cout << "\n\t Do you want to display the basic operations menu again or exit?" << endl;
    setColor(12);
    cout << " 1. ";
    setColor(7);
    cout << "Display Basic Operations Menu" << endl;
    setColor(12);
    cout << " 2. ";
    setColor(9);
    cout << "Exit \n" << endl;
    setColor(9);
    cout << " Select";
    setColor(7);
    cout << " an ";
    setColor(9);
    cout << "Option: ";
    setColor(12);
    cin >> contChoice;

    return contChoice == 1;
}

// Function to handle basic operations
void basicOperationsMenu() {
    int choice2 = 1;
    float number1, number2, result;
    bool continueBasicMenu = true;

    while (continueBasicMenu) {
        setColor(9);
        cout << "\n\t Basic Operations \n" << endl;
        setColor(12);
        cout << " 1. ";
        setColor(7);
        cout << "Addition" << endl;
        setColor(12);
        cout << " 2. ";
        setColor(7);
        cout << "Subtraction" << endl;
        setColor(12);
        cout << " 3. ";
        setColor(7);
        cout << "Multiplication" << endl;
        setColor(12);
        cout << " 4. ";
        setColor(7);
        cout << "Division" << endl;
        setColor(12);
        cout << " 5. ";
        setColor(7);
        cout << "Modulus" << endl;
        setColor(12);
        cout << " 6. ";
        setColor(9);
        cout << "Return to Main Menu \n" << endl;
        setColor(9);
        cout << " Select";
        setColor(7);
        cout << " an ";
        setColor(9);
        cout << "Option: ";

        setColor(12);
        cin >> choice2;
        cout << endl;

        if (choice2 < 1 || choice2 > 6) {
            setColor(12);
            cout << "\n\tInvalid Choice.";
        } else {
            setColor(7);
            switch (choice2) {
                case 1:
                    cout << "\t You have selected Addition" << endl;
                    cout << "\t Enter Number One: ";
                    setColor(12);
                    cin >> number1;
                    setColor(7);
                    cout << "\t Enter Number Two: ";
                    setColor(12);
                    cin >> number2;
                    setColor(7);
                    cout << "\t The Sum Of ";
                    setColor(12);
                    cout << number1;
                    setColor(7);
                    cout << " and ";
                    setColor(12);
                    cout << number2;
                    setColor(7);
                    cout << " is: ";
                    setColor(12);
                    result = number1 + number2;
                    cout << result;
                    cout << endl;
                    break;
                case 2:
                    cout << "\t You have selected Subtraction" << endl;
                    cout << "\t Enter Number One: ";
                    setColor(12);
                    cin >> number1;
                    setColor(7);
                    cout << "\t Enter Number Two: ";
                    setColor(12);
                    cin >> number2;
                    setColor(7);
                    cout << "\t The Subtraction Of ";
                    setColor(12);
                    cout << number1;
                    setColor(7);
                    cout << " and ";
                    setColor(12);
                    cout << number2;
                    setColor(7);
                    cout << " is: ";
                    setColor(12);
                    result = number1 - number2;
                    cout << result;
                    cout << endl;
                    break;
                case 3:
                    cout << "\t You have selected Multiplication" << endl;
                    cout << "\t Enter Number One: ";
                    setColor(12);
                    cin >> number1;
                    setColor(7);
                    cout << "\t Enter Number Two: ";
                    setColor(12);
                    cin >> number2;
                    setColor(7);
                    cout << "\t The Multiplication Of ";
                    setColor(12);
                    cout << number1;
                    setColor(7);
                    cout << " and ";
                    setColor(12);
                    cout << number2;
                    setColor(7);
                    cout << " is: ";
                    setColor(12);
                    result = number1 * number2;
                    cout << result;
                    cout << endl;
                    break;
                case 4:
                    cout << "\t You have selected Division" << endl;
                    cout << "\t Enter Number One: ";
                    setColor(12);
                    cin >> number1;
                    setColor(7);
                    cout << "\t Enter Number Two: ";
                    setColor(12);
                    cin >> number2;
                    if (number2 != 0) {
                        setColor(7);
                        cout << "\t The Division Of ";
                        setColor(12);
                        cout << number1;
                        setColor(7);
                        cout << " and ";
                        setColor(12);
                        cout << number2;
                        setColor(7);
                        cout << " is: ";
                        setColor(12);
                        result = number1 / number2;
                        cout << result;
                        cout << endl;
                    } else {
                        setColor(12);
                        cout << "\t Error: Division by zero." << endl;
                    }
                    break;
                case 5:
                    cout << "\t You have selected Modulus" << endl;
                    cout << "\t Enter Number One: ";
                    setColor(12);
                    cin >> number1;
                    setColor(7);
                    cout << "\t Enter Number Two: ";
                    setColor(12);
                    cin >> number2;

                    if (static_cast<int>(number2) != 0) {
                        setColor(7);
                        cout << "\t The modulus Of ";
                        setColor(12);
                        cout << number1;
                        setColor(7);
                        cout << " and ";
                        setColor(12);
                        cout << number2;
                        setColor(7);
                        cout << " is: ";
                        setColor(12);
                        result = static_cast<int>(number1) % static_cast<int>(number2);
                        cout << result;
                        cout << endl;
                    } else {
                        setColor(12);
                        cout << "\t Error: Division by zero." << endl;
                    }
                    break;
                case 6:
                    continueBasicMenu = false;
                    break;
            }
        }
        if (choice2 != 6) {
            continueBasicMenu = askContinueBasic();
        }
    }
}

// The actual code starts from here
int main() {
    int choice;
    bool continueMenu = true;

    while (continueMenu) {
        // Print the main menu
        mainMenu();
        setColor(12);
        cin >> choice;

        if (choice < 1 || choice > 4) {
            setColor(12);
            cout << "\n\tInvalid Choice.";
        } else {
            switch (choice) {
                case 1:
                    basicOperationsMenu();
                    break;
                case 2: {
                    int advChoice;
                    bool continueAdvMenu = true;
                    while (continueAdvMenu) {
                        // Print the advanced menu
                        advancedMenu();
                        setColor(12);
                        cin >> advChoice;

                        if (advChoice < 1 || advChoice > 4) {
                            setColor(12);
                            cout << "\n\tInvalid Choice.";
                        } else {
                            switch (advChoice) {
                                case 1: {
                                    // Exponentiation
                                    double base, exponent, result;
                                    setColor(9);
                                    cout << "\t You have selected Exponentiation (^)" << endl;
                                    setColor(7);
                                    cout << "\t Enter the base: ";
                                    setColor(12);
                                    cin >> base;
                                    setColor(7);
                                    cout << "\t Enter the exponent: ";
                                    setColor(12);
                                    cin >> exponent;
                                    result = pow(base, exponent);
                                    setColor(7);
                                    cout << "\t " << base << " ^ " << exponent << " = " << result << endl;
                                    break;
                                }
                                case 2: {
                                    // Square Root
                                    double number, result;
                                    setColor(9);
                                    cout << "\t You have selected Square Root (√)" << endl;
                                    setColor(7);
                                    cout << "\t Enter the number: ";
                                    setColor(12);
                                    cin >> number;
                                    if (number < 0) {
                                        setColor(12);
                                        cout << "\t Square root of a negative number is not real." << endl;
                                    } else {
                                        result = sqrt(number);
                                        setColor(7);
                                        cout << "\t √" << number << " = " << result << endl;
                                    }
                                    break;
                                }
                                case 3: {
                                    // Trigonometric Functions
                                    double angle, result;
                                    setColor(9);
                                    cout << "\t You have selected Trigonometric Functions" << endl;
                                    setColor(7);
                                    cout << "\t Enter the angle in degrees: ";
                                    setColor(12);
                                    cin >> angle;
                                    double radians = angle * (M_PI / 180.0); // Convert degrees to radians

                                    setColor(9);
                                    cout << "\t Select Trigonometric Function:" << endl;
                                    setColor(12);
                                    cout << " 1. ";
                                    setColor(7);
                                    cout << "Sine (sin)" << endl;
                                    setColor(12);
                                    cout << " 2. ";
                                    setColor(7);
                                    cout << "Cosine (cos)" << endl;
                                    setColor(12);
                                    cout << " 3. ";
                                    setColor(7);
                                    cout << "Tangent (tan)" << endl;
                                    setColor(9);
                                    cout << " Select";
                                    setColor(7);
                                    cout << " an ";
                                    setColor(9);
                                    cout << "Option: ";
                                    int trigChoice;
                                    setColor(12);
                                    cin >> trigChoice;

                                    if (trigChoice == 1) {
                                        result = sin(radians);
                                        setColor(7);
                                        cout << "\t sin(" << angle << ") = " << result << endl;
                                    } else if (trigChoice == 2) {
                                        result = cos(radians);
                                        setColor(7);
                                        cout << "\t cos(" << angle << ") = " << result << endl;
                                    } else if (trigChoice == 3) {
                                        result = tan(radians);
                                        setColor(7);
                                        cout << "\t tan(" << angle << ") = " << result << endl;
                                    } else {
                                        setColor(12);
                                        cout << "\t Invalid choice." << endl;
                                    }
                                    break;
                                }
                                case 4:
                                    continueAdvMenu = false;
                                    break;
                            }
                        }
                        if (advChoice != 4) {
                            continueAdvMenu = askContinueAdvanced();
                        }
                    }
                    break;
                }
                case 3:
                    setColor(9);
                    cout << "\n\t\t Evaluate Expression (Feature not implemented)" << endl;
                    break;
                case 4:
                    setColor(9);
                    cout << "\n\t\t Exited Successfully" << endl;
                    return 0;
            }
        }
    }
    return 0;
}
