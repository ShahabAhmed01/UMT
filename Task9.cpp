
#include <iostream>
using namespace std;
int main() {
    int number, sum = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Enter number: ";
        cin >> number;
        if (number < 0) {
    cout << "Negative number is entered" << endl;
        continue;
        }
        sum = sum + number;
    }
    cout << "The sum of all positive numbers is: " << sum << endl;
    return 0;
}
