#include <iostream>
using namespace std;
// program to find area and permiter of a triangle

int main(){
	// length = l
	// width = w
	double l;
	double w;
	// we are going to display more precise value that is why we are using double not float
	
	cout << "Enter length of a rectangle:";
	cin >> l;
	cout << "Enter width of a rectangle:";
	cin >> w;
	
	
	cout << "The area of rectangle is:" << l * w << endl; 
	cout << "The perimeter of rectangle is:" << 2 * (l + w) << endl;
	
}
