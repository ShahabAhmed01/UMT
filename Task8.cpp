/*
Q8: A class of ten students took a quiz. The grades (integers in the range 0 to 100) for this
quiz are available to you. Calculate and display the total of all student grades and the class
average on the quiz.
*/
#include <iostream>
using namespace std;
// Function to calculate the total marks of all students
int Total(int grades[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + grades[i];
    }
    return total;
}
// Function to calculate the average
double Average(int total, int size)
{
    int avg = total / 10; // we can also use total / size
    return avg;
}
int main()
{
    int numStudents = 10;
    int grades[numStudents] = {85, 92, 78, 64, 88, 73, 90, 79, 84, 91};
    int totalmarks = Total(grades, numStudents);
    double averagee = Average(totalmarks, numStudents);
    cout << "Total marks of all students: " << totalmarks << endl;
    cout << "Average: " << averagee << endl;
    return 0;
}
