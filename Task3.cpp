
#include<iostream>
using namespace std;
int main()
{
	int num;
	int sum=0;
	cout<<"enter the integer values you have to add(Enter zero to end):"<<endl;
	while(true){
		cout<<"enter the integer:"<<endl;
		cin>>num;
		if(num==0){
			break;
		}
		if(num<0){
			continue;
		}
	sum+=num;
}
	cout<<"the sum of integer is"<<sum<<endl;
	return 0;
}
