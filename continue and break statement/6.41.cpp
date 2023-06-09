#include<iostream>
using namespace std;
int main()
{
	int num;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the number.";
		cin>>num;
		if(num<=0)
		break;
		cout<<"you eneterd the number."<<num<<endl;
	}
	
}
