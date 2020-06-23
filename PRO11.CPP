#include<iostream.h>
#include<conio.h>
class Myclass
{
public:
int x;
Myclass();
~Myclass();
};
Myclass::Myclass()
{ x=10;
}
Myclass::~Myclass()
{
 cout<<"destructing......\n";
 };
{
 void main()
 clrscr()
 Myclass ob1;
 Myclass ob2;
 cout<<ob1.x<<ob2.x<<"\n";
  getch()

  }
