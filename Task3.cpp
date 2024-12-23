

#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    switch (number % 2) {
        case 0:
            cout << "The number is even." << endl;
        break;
        case 1:
            cout << "The number is odd." << endl;
        break;
        default:
            cout << "Error" << endl;

    }
    return 0;
}

