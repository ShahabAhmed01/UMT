//Q9: Write a program to Printing and count Even and Odd Numbers using While Loop in C++.
#include <iostream>
#include <cstdlib> // Included cstdlib for rand() and srand(), these functions are used to random values
#include <ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0))); //random number generator with current time
    int countEven = 0, countOdd = 0;
    int arrayy[50];
    int i;
    for (i = 0; i <= 49; i++)
    {
        arrayy[i] = rand() % 50 + 1; // rand() generates random number between 1 and 50 and store it in array
    }
    for (i = 0; i <= 49; i++)
    {
        if (arrayy[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    for (i = 0; i <= 49; i++)
    {
        cout << arrayy[i] << " ";
    }
    cout << endl;
    cout << "Even Numbers: " << countEven << endl;
    cout << "Odd Numbers: " << countOdd << endl;
    return 0;
}
