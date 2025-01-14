#include <iostream>
using namespace std;
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int num;
    int ans;
    cout << "Please enter a number: ";
    cin >> num;
    ans = fact(num);
    cout << "Factorial of " << num << " is: " << ans << endl;
    return 0;
}
