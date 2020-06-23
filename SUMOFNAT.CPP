#include<iostream.h>
#include<conio.h>
 void main()
 {
  clrscr();
  int n,sum;
  cout<<"enter any natural no.";
  cin>>n;

   if (n<1)
   {
    cout<<"\nentered number is naot natural number";

    }
    else
    {
    sum=(n*(n+1)*(2*n+1))/6;
    cout<<sum
    ;
    }
    getch();
    }