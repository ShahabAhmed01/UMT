#include <iostream>
using namespace std;
int main(){
    int hours, minutes, seconds;

cout << "Enter hours: ";
cin >> hours;
cout << "Enter minutes: ";
cin >> minutes;
cout << "Enter seconds: ";
cin >> seconds;

    int totalSeconds = (hours * 3600) +  ((minutes % 60) * 60) +  (seconds % 60);

cout << "Total time in seconds: " << totalSeconds << endl;

    return 0;
}