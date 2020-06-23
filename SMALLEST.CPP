#include<iostream.h>
#include<conio.h>

 void main()
 {
  clrscr();
  int a[10],i,small;
  cout<<"enter 100 integers:\n";
   for (i=0;i<10;i++)
    {
     cin>>a[i];
      if (i==0)
       {
	small=a[i];
	}

	else if(a[i]<small)
	{ small=a[i];
	}
	}
	cout<<" smallest number is:"<<small;
	getch();
	}