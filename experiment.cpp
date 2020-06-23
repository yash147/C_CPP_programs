#include<iostream>
using namespace std;
int main()
{    int i,j,a[0],b[0],n;
	cout<<"Enter array number...";
	cin>>n;
	 
	  for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>b[i];
    }
 
    a[0]=0;
	 
	 for(i=1;i<n;i++)
    {
        
        for(j=0;j<i;j++)
            a[i]+=b[j];
    }
    
     
    
    cout<<b[j];
    
    
    
    
	return 0;
}
