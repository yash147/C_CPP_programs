#include<iostream>
using namespace std;
class set
{
	int m,n;
	public:
		void input(void);
	
		int largest(void);
	
};
void set :: input(void)
{
	cout<<"Enter the two number to find largest nummber"<<"\n";
	cin>>m>>n;
	cout<<"you just entered "<<m<<" and "<<n<<endl;
	
}
int set::largest(void)
{
	if (m>=n)
	return(m);	
 else
 return(n);
}

int main()
{
	set s;
	s.input();
	s.largest();
	return 0;
}

