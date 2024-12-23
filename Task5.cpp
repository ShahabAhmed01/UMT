
#include <iostream>
using namespace std;
int main() {
    double marks_obtained, total_marks;
    int choice;
    cout << "Enter the marks obtained: ";
    cin >> marks_obtained;
    cout << "Enter the total marks: ";
    cin >> total_marks;
    cout << "Press 1 to calculate the Percentage." << endl;
    cout << "Press 2 to display the Grade." << endl;
    cin >> choice;
    if (choice == 1) {
        double percentage = (marks_obtained / total_marks) * 100;
        cout << "Percentageis" << percentage << "%" << endl;
    }
    else if (choice == 2) {
        double percentage = (marks_obtained / total_marks) * 100;
        char grade;
        if (percentage >= 90) {
            grade = 'A';
        } else if
            (percentage >= 80) {
            grade = 'B';
        } else if
            (percentage >= 70) {
            grade = 'C';
        } else if
            (percentage >= 60) {
            grade = 'D';
        }
        else{
            grade = 'F';
        }
        cout << "Grade: " << grade << endl;
    }
    else{
        cout << "Invalid choice." << endl;
    }
    return 0;
}

