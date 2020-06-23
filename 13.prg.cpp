#include <iostream>
using namespace std;
class Number
{
	private:
		int num;
	public:
		void getNumber(void)
		{
			cout<<"Enter an integer number :";
			cin>>num;
		}
		int returnNumber(void)
		{
			return num;
		}
};
class square   :public Number 
{
	public:
		int getsquare(void)
		{
			int num,sqr;
			num=returnNumber();
			sqr=num*num;
			return sqr;
		}
};
class cube   :public Number 
{	
	public:
		int getcube(void)
		{
			int num,cube;
			num=returnNumber();
			cube=num*num*num;
			return cube;
		}
};
int main()
{
	square objs;cube objc;
	int squ,cube;
	objs.getNumber();
	squ=objs.getsquare();
	cout<<"Square of "<<objs.returnNumber()<<" is "<<squ<<endl<<objc.getNumber();
	cube=objc.getcube();
	cout<<"cube of "<<objs.returnNumber()<<" is "<<cube<<endl;
	return 0;
}
