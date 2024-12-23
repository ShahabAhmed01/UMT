#include <iostream>
 using namespace std;

int main(){
    char charac;
    cout << "Input a character:";
    cin >> charac;
    if ( charac == 'a' || charac == 'e' || charac == 'i' || charac == 'o' || charac == 'u'){
        cout << "Entered character is a vowel";
    }
    else{
        cout << "Entered character is a Consonant";
    }
    return 0;

}
