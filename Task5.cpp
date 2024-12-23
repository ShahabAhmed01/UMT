#include <iostream>
using namespace std;
int main()
{
    int num1, num2, min_num;
    cout << "Enter First Number" << endl;
    cin >> num1;
    cout << "Enter Second Number" << endl;
    cin >> num2;
    (num1 > num2)? min_num = num2 : min_num = num1;
    cout << "Minimumm Number: " << min_num;
    return 0;
}
