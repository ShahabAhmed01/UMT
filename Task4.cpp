
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    switch ((num1 == num2) * 1 + (num1 == num2) * 2 + (num2 == num3) * 3) {
        case 0:
            cout << "All values are different.";
        break;
        case 1:
            cout << "The 1st and 2nd values are equal.";
        break;
        case 2:
            cout << "The 1st and 3rd values are equal.";
        break;
        case 3:
            cout << "The 2nd and 3rd values are equal.";
        break;
        case 4:
            cout << "All values are equal.";
        break;
    }
    return 0;
}
