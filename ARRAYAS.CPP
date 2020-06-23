#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
  int size=0;
  int i,j;

    cout<<"enter the size of array"<<endl;

   cin>>size;
     int a[size];

   for(i=0;i<size;i++)
{
   cout<<"enter value"<<i+1<<" element of array = "<<endl;
    cin>>a[i];
  }
  for(j=0;j<size;j++)

{
 cout<<"your "<<j+1<<" element is "<<a[j]<<endl;

   }

getch();
 }
