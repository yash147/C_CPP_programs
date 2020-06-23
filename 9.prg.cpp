#include<iostream>
#include<string>
using namespace std;
class Marks
{
	private:
		int rno;
		float per;
	public :
		Marks()
		{
			rno=0;
			per=0.0f;
			
		}
		void readMarks(void)
		{
			cout<<"Enter roll numbers ";
			cin>>rno;
			cout<<"Enter percentage ";
			cin>>per;
		}
		void printMarks(void)
		{
			cout<<"Roll No. : "<<rno<<endl;
			cout<<"Percentage : "<<per<<"%"<<endl;
		}
};
class Student
{
	private:
		Marks objM;
		char name[30];
		public:
			void readStudent(void)
			{
				cout<<"Enter name :";
				cin.getline(name,30);
				objM.readMarks();
			}
			void printStudent(void)
			{
				cout<<"Name : "<<name<<endl;
				objM.printMarks();
			}
};
int main()
{
	Student std;
	std.readStudent();
	cout<<endl<<endl;
	std.printStudent();
	return 0;
}
