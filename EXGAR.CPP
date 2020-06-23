#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10];
 int size;
 int temp;


 cout<<"enter size of array";
 cin>>size;


   for (int i=0;i<size;i++)
{
   cout<<"enter "<<i+1<<" element of array = "<<endl;

    cin>>a[i];
  }

for(int x=0;x<5;x++)
{
for(int y=1;y<5;y++)
{
   if (a[x]<a[y])
   {
   }
    else
   {
   a[x]=temp;
  a[y]=a[x];
    temp=a[y];
   }
    }
}

  for(int j=0;j<size;j++)
{
 cout<<"your "<<j+1<<" element is "<<a[j]<<endl;

  }

getch();
 }

