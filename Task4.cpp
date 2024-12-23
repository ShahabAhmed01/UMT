
#include<iostream>
using namespace std;
int main()
{
	int count=20;

	do{
		if(count%2==0)
		count--;
		continue;

	if (count == 5)
	{
	cout<<"looped stopped at"<<count<<"."<<endl;
	break;
}
	cout<<count<<"";
	count--;

}	while(count=>0);
return 0;
}
