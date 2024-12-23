
#include<iostream>
using namespace std;
int main()
{
	int number;
	int i=1;

	cout<<"enter a number"<<endl;
	cin>>number;

	do{
		cout<<number<<"*"<<i<<"="<<number*i<<endl;
		i++;
	}while(i<=10);
	return 0;

}
