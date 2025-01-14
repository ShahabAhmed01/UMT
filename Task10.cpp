#include <iostream>
using namespace std;
/* Q10: Write a program to find the sum of all odd numbers between 1 and a user-provided
number using a while loop. */

// Function to calculate the sum of odd numbers
int sumOdd(int num)
{
    int sum = 0;
    int i = 1;
    while (i <= num)
        {
        if (i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }
    return sum;
}

// Function to get input from the user
int Input()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int main()
{
    int num = Input();
    int sum = sumOdd(num);
    cout << "The sum of all odd numbers between 1 and " << num << " is: " << sum << endl;
    return 0;
}

