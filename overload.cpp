#include<iostream>
using namespace std;
class calc
{
	int calc(int a,int b)
	{
		cout<<"addition is ="<<a+b;
		return 0;
	}
	int calc(int a,int b,int c)
	{
	
		cout<<"addition is ="<<a+b+c;
	return 0;
	}
	 int calc(int a,int b,int c,int d)
	{
		cout<<"addition is ="<<a+b+c+d;
		return 0;
	}

};
int main()
{
	clrscr();
	calc c;
	c.calc(10,20);
	c.calc(10,20,30);
	c.calc(10,20,30,40);
return 0;
getch();
}

