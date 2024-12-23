
#include<iostream>
using namespace std;

int main() {
    int numCount;
	int number;
    int evenCount = 0;
    cout << "Enter the number of integers you want to input: ";
    cin >> numCount;
    if (numCount <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    int i = 0;
    do {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> number;
        if (number % 2 == 0) {
            evenCount++;
        }
        i++;
    } while (i < numCount);
    cout << "Count of even numbers entered: " << evenCount << endl;
    return 0;
}
