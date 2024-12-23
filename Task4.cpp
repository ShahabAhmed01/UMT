
#include <iostream>
using namespace std;
int main(){
  int num, i;
  cout << "Enter a number";
  cin >> num;
    if (num < 0){
        cout << "Entered number is invalid";
        return 0;
  }
  for(i = 1; i <= num; i++){
    cout << num << " X " << i <<  " = " << num*i << endl;
  }
  return 0;
}
