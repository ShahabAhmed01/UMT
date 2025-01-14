#include <iostream>
using namespace std;
/*
Q4: Write a program that displays the following menu for a parking area:
Motorcycle: M
Car: C
Bus: B
The program inputs the type of vehicle and number of days to park the vehicle. It finally displays
the total charges for a parking according to the following:
Motorcycle: Rs.10 per day
Car: Rs.20 per day
Bus: Rs.30 per day
*/
int parking (char, int);
int main()
{
    cout << " 1.Motorcycle: M \n 2.Car: C \n 3.Bus: B \n" << "Please select the type of vehicle you want to park: ";
    char type;
    cin >> type;
    int days;
    cout << "Please enter the number of days: ";
    cin >> days;
    int amount = parking(type,days);
    if (amount == -1)
    {
        cout << "Invalid Vehicle.";
    }
    else
    {
    cout << "Total charges of Parking are: " << amount;
    }
}
int parking(char x,int y)
{
    switch (x)
    {
      case 'M':
      case 'm':
      return y * 10;
      case 'C':
      case 'c':
      return y * 20;
      case 'B':
      case 'b':
      return y * 30;
      default:
      return -1;
    }
}
