
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, maxi, lcm;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    maxi = (num1 > num2)? num1 : num2;
    for (lcm=maxi; ; lcm++)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            break;
        }
    }
    cout << "LCM is: "<< lcm;
    return 0;
}
