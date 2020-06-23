#include<iostream>
using namespace std;
class A
{
	public:
		void Afun(void);
		
};
void A::Afun()
{
	cout<<"I ma the body of A..."<<endl;
}
class B :public A
{
	public:
		void Bfun(void);
		
};
void B::Bfun()
{
	cout<<"I ma the body of B..."<<endl;
}
int main()
{	B objb;
objb.Afun();
objb.Bfun();
	return 0;
}
