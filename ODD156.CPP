#include<stdio.h>
#include<conio.h>
void main()
{int a;
 int b;
 int arr[5];
 clrscr();
 for(a=0;a<5;a++)
 {
 printf("Enter the arr[%d] value of array..\n",a);
  scanf("%d",&arr[a]);
 }
 for(a=0;a<5;a++)
 {
  printf("Value of arr[%d] is = %d\n",a,arr[a]);
 if(arr[a]%2==0)
 { printf("The value of arr[%d]=  odd \n",a);
  }
else
{
printf("The value of arr[%d]= even\n",a);
}
  }


 getch();
}