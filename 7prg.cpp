#include<iostream>
using namespace std;
 
  class student
  {
  	 private:
  	 	 char name[30];
  	 	 int rollno;
  	 	 int total;
  	 	 float perc;
    public:
    	 void getdetails();
    	 void putdetails();
    };
    void student::getdetails(void)
    {
    	cout<<"Enter name ";
    	cin>>name;
    	cout<<"Enter roll no. ";
    	cin>>rollno;
    	cout<<"Enter total marks ";
    	cin>>total;
    	perc=(float)total/800*100;	
    }	 
void student::putdetails(void)
{
	
	cout<<"student Details :- "<<endl;
	cout<<"Name = "<<name<<endl<<"roll no. = "<<rollno<<endl<<"total = "<<total<<endl<<"percentage = "<<perc;
}
int main()
{
student std;
std.getdetails();
std.putdetails();
return 0;

  }
