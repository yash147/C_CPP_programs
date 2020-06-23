#include<iostream>
 using namespace std;
 class Num
 {
 	 private:
		int n;
 	public:
	 void getNum(int x)
	 {
	 	 n=x;
	 	 
	 }
	void dispNum(void) 
	 {
	 	 cout<<" vaue of n is  "<<n;
	 }
	void operator-(void) 
    { 
	n=-n;
 
 	 }	 

};
  int main()
  {  
     Num num;
    num.getNum(100);
    -num;
    num.dispNum();

 return 0;
}
