#include<iostream>
using namespace std;
int main()
{
	int a ,b,c;
	cout<<"ENter your fisrt number"<<endl;
	cin>>a;
	cout<<"ENter Your second number "<<endl;
	cin>>b;
	cout<<"Your fist number is= "<<a<<endl;
	cout<<"Your fist number is= "<<b<<endl;
c=a+b;
a=c-a;
cout<<"Now Your fist number is= "<<a<<endl;
b=c-b;
cout<<"Now Your fist number is= "<<b<<endl;
return 0;	
}
