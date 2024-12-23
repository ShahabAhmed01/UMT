
#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3, num4, num5;
    int mini;
    cout << "Please enter 5 numbers respectively: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    mini = num1;
    if (num2 < mini) {
        mini = num2;
    }
    else if (num3 < mini) {
        mini = num3;
    }
    else if (num4 < mini) {
        mini = num4;
    }
    else if (num5 < mini) {
        mini = num5;
    }
    cout << "The minimum number is : " << mini << endl;
    return 0;
}