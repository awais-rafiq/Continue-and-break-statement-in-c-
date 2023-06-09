#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int num;
	cout<<"enter the number";
	cin>>num;
	for(int i=1;i<=num;i++)
	{	
	if(i%2==0)
	continue;
	sum=sum+i;
}
	cout<<"sum is "<<sum;
}
