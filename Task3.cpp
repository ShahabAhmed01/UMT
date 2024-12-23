#include <iostream>
using namespace std;

int main(){

    char GRADE;

    cout << "Enter Grade in Uppercase\n";
    cin >> GRADE;

    switch (GRADE) {

    case 'A':
        cout << GRADE << " is 90%";
        break;
    case 'B':
        cout << GRADE << " is 80%";
        break;
    case 'C':
        cout << GRADE << " is 70%";
        break;
    case 'D':
        cout << GRADE << " is 60%";
        break;
    case 'F':
        cout << GRADE << " is 50% or Lower";
        break;
    default:
        cout << "Invalid Grade\n";
    }
}
