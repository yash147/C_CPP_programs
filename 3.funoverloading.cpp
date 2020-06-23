#include<iostream>
using namespace std;
void display()
{
	int a=3;
	cout<<a<<endl;
	
}
void display(int a)
{
	
	cout<<a<<endl;
	
}
void display(double a)
{
	
	cout<<a<<endl;
	
}
void display(int a,float b)
{
	
	cout<<a<<","<<b<<endl;
	
}
int main()
{
	display();
	display(5);
	display(2,3);
	display(5,4.0);
	return 0;
}
