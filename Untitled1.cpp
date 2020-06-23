#include<iostream>
#include<cstdlib>

 using namespace std;
  int main ()
{
    int i;
  	int num ;
  	randomsize();
  	 for(i=0;i<10;i++)
  	 {
  	 	 num= rand()%100;
  	 	 cout<<num<<"\+";
  	 }
  	  return 0;
  }
