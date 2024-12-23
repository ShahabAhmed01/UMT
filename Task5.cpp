
#include <iostream>
using namespace std;
int main() {
    int salary,grade;
    cout << "Enter the employee's salary: ";
    cin >> salary;
    cout << "Enter the employee's grade: ";
    cin >> grade;
    if (grade > 15) {
        salary = salary * 0.50;
    } else if (grade < 15) {
        salary = salary * 0.25;
    }
    cout << "The employee's salary is: " << salary << endl;
    return 0;
}
