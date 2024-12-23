
#include <iostream>
using namespace std;
int main(){
 int num;
 for (;;){
        cout << "Enter a number";
         cin >> num;
           if (num < 0){
        cout << "Entered number is invalid";
        return 0;
  }
        if (num % 7 == 0){
            cout << "Number is divisble by 7 \n";
            break;
        }
        else {
              cout << "Enter again \n";

              }
 }
  return 0;
}
