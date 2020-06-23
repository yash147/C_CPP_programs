#include<iostream>
using namespace std;
class Number
{
	private:
		int a;
	public:
		void getNum(int x);
	friend void printNum(Number NUM);
};
void Number :: getNum(int x)
{
	a=x;	
}
void printNum (Number Num)
{
	cout<<" Value of a Private data member of  calss Number "<<Num.a;
}
int main()
{
	Number nobj;
	nobj.getNum(1000);
	printNum(nobj);
	return 0;
}
