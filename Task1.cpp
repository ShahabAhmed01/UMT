
#include <iostream>
using namespace std;
int main()
{
    int number, maxi = 0;
    cout << "Enter a number:";
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            maxi = maxi + 1;
        }
    }
    if (maxi <= 2){
        cout << "It is a prime number" ;
    }
    else
     {
        cout << "It is composite";
    }
    return 0;
}
