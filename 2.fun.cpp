#include <iostream>
using namespace std;
void sum();
void sub();
void mul();
void div();
int main()
{
	sum();
	sub();
	mul();
	div();
	return 0;
}
void sum()
{	cout<<"Addition"<<endl<<endl;
	int a,b,c;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	c=a+b;
	cout<<"Addition is :"<<c<<endl<<endl;
}
void sub()
{	cout<<"Subtraction"<<endl<<endl;
	int a,b,c;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	c=a-b;
	cout<<"Subtraction is :"<<c<<endl<<endl;
}
void mul()
{	cout<<"Multiplication"<<endl<<endl;
	int a,b,c;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	c=a*b;
	cout<<"Multiplication is :"<<c<<endl<<endl;
}
void div()
{	cout<<"Division"<<endl<<endl;
	int a,b,c;
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	c=a/b;
	cout<<"Division is :"<<c<<endl<<endl;
}
