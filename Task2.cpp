#include <iostream>
using namespace std;
int main(){
    int num;

    cout << "Enter number:";
    cin >> num;

    if (num % 2 == 0){
        if ( num % 3 == 0){
            cout << "Number is even and divisible by three";
        }
        else{
            cout << "Number is only even, not divisible by three";
        }
    }
    else{
            cout << "number is nor even nor divisible by three";
        }
        return 0;
    }

