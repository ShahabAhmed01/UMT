#include <iostream>
using namespace std;

int main(){
	// c means celcius
	float c;
	cout << "Enter Temperature in Celcius:";
	cin >> c;
	float d = 1.8 * c + 32 ;
	cout << "Temperat1ure in Fahrenheit is:" << d << endl;
	return 0;
	
}
