#include<iostream>
using namespace std;
int b=101;
int main()

{
	int a=10;
	{
		int b=20;
		int c=30;
		cout<<"b="<<b<<"\n";
		cout<<"c="<<c<<"\n";
		cout<<"b="<<::b;
	}
	
	
	
	
}
