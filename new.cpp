#include<iostream>
using namespace std;
class person
{
	char name[50];
	int age;
	public:
		void getdata();
		void putdata();
		
};
void person::getdata()
{
	cout<<"Enter name"<<"\n";
	cin>>name;
	cout<<"Enter age"<<"\n";
	cin>>age;


}
void person::putdata()
{
	cout<<"Name is "<<name<<"\n"<<"Age is " <<age<<"\n"<<endl;

if (age<18)
{ cout<<name<<" is not ready to fight"<<"\n";
}
else
if(age>=18)
{
	cout<<name<<" is ready to fight"<<"\n";
}


}
int main()
{
	person p;
	p.getdata();
	p.putdata();
	return 0;
}
