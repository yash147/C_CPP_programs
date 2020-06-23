#include<iostream>
using namespace std;
int main()
{	
	int a;
	int c,sum=0;
	
	cout <<"Enter the value: ";
	cin>>a;
	
	cout<<"invert of "<<a<<" is = ";
	while (a!=0)
	{
	
	c=a%10;
	a=a/10;
	cout<<c;
	sum=sum+c;
	
	}
cout<<endl<<"Sum ="<<sum;
}

