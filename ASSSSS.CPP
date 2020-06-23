#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[100];
 int size;
 int temp=0;
 cout<<"enter size of array";
 cin>>size;
   for (int i=0;i<size;i++)
{
  cout<<"enter "<<i+1<<" element of array = "<<endl;
   cin>>a[i];
  }
for(int x=0;x<size;x++)
{
for(int y=0;y<size-1;y++)
{
   if (a[y]>a[y+1])
   {
   temp=a[y];
   a[y]=a[y+1];
   a[y+1]=temp;
   }
    }
}

  for(int j=0;j<size;j++)
{
 cout<<"your "<<j+1<<" element is "<<a[j]<<endl;

  }

getch();
 }

