
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum;
     sum = 0;
	cout << "Input a number: ";
	cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << i << "\t ";
		sum = sum + i;
    }
    cout << "\n The sum of the natural numbers is: " << sum << endl;
    return 0;
}
