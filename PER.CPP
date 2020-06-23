#include<iostream>
using namespace std;
class student
{ public :
	int a,b,c,sum;
	float per;
	void setMarks(int p1,int p2,int p3)
	{
		a=p1;
		b=p2;
		c=p3;
		cout<<a<<b<<c;
	}
	void sum()
	{
		sum=a+b+c;
	}
	void percent()
	{
		per=sum/300*100;
	}
	void show()
	{
		cout<<"percentage is ="<<per<<endl;
		
	}
	
};
int  main()
{
	student s1;
	s1.setMarks(80,80,80);
	s1.sum();
	s1.percent();
	s1.show();
	return 0;
}
