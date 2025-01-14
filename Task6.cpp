#include <iostream>
using namespace std;
/*
Q6: Write a C++ program that prompts the user to enter the marks obtained in a course
and the total marks of the course. The program should then display a menu with the
following options:
1. Press 1 to calculate percentage.
2. Press 2 to display grade.
If the user presses 1, the program should calculate and display the percentage obtained. If
the user presses 2, the program should calculate and display the grade based on the obtained
percentage using the following grading scheme:
• A+: 90% - 100%
• A: 80% - 89%
• B: 70% - 79%
• C: 60% - 69%
• D: 50% - 59%
• F: Below 50%
Ensure that the user's choice is either 1 or 2. Use proper validations using logical operators
to check if the marks obtained and total marks are positive numbers. Use a switch statement
for menu selection and else-if statements to determine the grade based on the marks
obtained.
*/
#include <iostream>
using namespace std;
// Function declarations
double calculatePercentage(double marksObtained, double totalMarks);
void displayGrade(double percentage);
int main()
{
    double marksObtained, totalMarks;
    int choice;
    // Prompt user to enter marks
    cout << "Enter the marks obtained in the course: ";
    cin >> marksObtained;
    cout << "Enter the total marks of the course: ";
    cin >> totalMarks;
    if (marksObtained < 0 || totalMarks < 0)
    {
        cout << "Error: Marks should be greater than zero" << endl;
        return 1;
    }
    cout << "Menu:" << endl;
    cout << "1. Press 1 to calculate percentage." << endl;
    cout << "2. Press 2 to display grade." << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice != 1 && choice != 2)
    {
        cout << "Error: Invalid choice. Please select 1 or 2." << endl;
        return 1;
    }
    // Calculate percentage
    double percentage = calculatePercentage(marksObtained, totalMarks);
    switch (choice)
    {
        case 1:
            cout << "Percentage obtained: " << percentage << "%" << endl;
            break;
        case 2:
            displayGrade(percentage);
            break;
    }
    return 0;
}
// Function to calculate percentage
double calculatePercentage(double marksObtained, double totalMarks)
{
    return (marksObtained / totalMarks) * 100;
}
// Function to display grade
void displayGrade(double percentage)
{
    if (percentage >= 90 && percentage <= 100)
    {
        cout << "Grade: A+" << endl;
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 60 && percentage < 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 50 && percentage < 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }
}

