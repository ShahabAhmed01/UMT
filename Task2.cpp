
#include<iostream>
using namespace std;
int main()
{
	int num;
	int sum=0;
	cout<<"enter any number:";
	cin>>num;
	while(num>0){

		int digit = num % 10;
		sum = sum + digit;
		num/=10;

	}

	cout<<"the sum of digit is:"<<sum<<endl;
 }
