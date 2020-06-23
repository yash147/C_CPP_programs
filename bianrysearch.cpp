#include<iostream>
using namespace std;
int main()
{
	int A[1];
	int n,yash,last, middle ,search;
	cout<<"Enter the total number of element...";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :"<<endl;
	for (int i=0; i<n; i++)
	{
		cin>>A[i];
	}
cout<<"Enter a number to find :";
	cin>>search;    
	yash = 0; 	//initial
	last = n-1; 	//initial
	middle = (yash+last)/2; 	//initial
	while(yash<=last)
		{
	                 if(A[middle] < search)
	                   {
	   	                      yash = middle + 1;
	                    }
                                           else if(A
										   [middle] == search)
	                   {
                                                cout<<search<<" number"<<" found at location "<<middle+1<<"\n";
 		                                       break;
	                    }
	                 else
	                 {
	                    last = middle - 1;
	                  }
		                    middle = (yash + last)/2;
	                           }
	                if(yash > last)   //Sorted is iimportant
	                           {
	     cout<<"Not found! "<<search<<" is not present in the list.";
	}
	
	
	
}
