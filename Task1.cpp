
#include<iostream>
using namespace std;
int main()
{
	int num;
	long factorial=1;

	cout<<"Enter a positive number:";
	cin>>num;
	if(num < 0)
	{
		cout<<"Please enter a positive number"<<endl;

	}
	else{
		int i=num;
		while(i>=1){
			factorial = factorial*i;
			i--;
		}
			cout<<"the factorial of given number is"<<factorial<<endl;
	}
	return 0;
}
