#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define new_cal 1
#define old_cal 0
class stand_calc
{
public:
static double addition(double,double);
static double subtract(double,double);
static double multiplication(double,double);
static double division(double,double*);
static double modulus(double*,double*);
};
class scien_calc
{
public:
static double square(double);
static double cube(double);
static double power(double,double);
static double sq_root(double);
static long int fact(double);
static double sin_func(double);
static double cos_func(double);
static double tan_func(double);
};
double stand_calc::addition(double a,double b)
{
return(a+b);
}
double stand_calc::subtract(double a,double b)
{
return(a-b);
}
double stand_calc::multiplication(double a,double b)
{
return(a*b);
}
double stand_calc::division(double a,double *b)
{
while(*b==0)
{
cout<<"\nCannot divide by zero."<<"\nEnter second number.";
cin>>*b;
}
return(a/(*b));
}
double stand_calc::modulus(double *a,double *b)
{
while(*b==0)
{
cout<<"\nCannot divide by zero."<<"\nEnter second number.";
cin>>*b;
}
int x=(int)*a;
int y=(int)*b;
if(*a-x>0||*b-y>0)
cout<<"\nConverting decimal number into an integer to perform modulus";
*a=x;
*b=y;
return(x%y);
}
double scien_calc::square(double x)
{
return (pow(x,2));
}
double scien_calc::cube(double x)
{
return(pow(x,3));
}
double scien_calc::power(double x, double y)
{
return(pow(x,y));
}
double scien_calc::sq_root(double x)
{
return(sqrt(x));
}
long int scien_calc::fact(double x)
{
int n=(int)x;
long int f=1;
while (n>1)
{
f*=n;
n;
}
return f;
}
double scien_calc::sin_func(double x)
{
return(sin(x));
}
double scien_calc::cos_func(double x)
{
return(cos(x));
}
double scien_calc::tan_func(double x)
{
return(tan(x));
}
void main()
{
double num1,num2,num3,temp;
int choice1=0,choice2,flag;
do
{
clrscr();
cout<<"\n========type of calculators========"<<"\n1\tStandard calculator\n2\tScientific calculator\n3\tQuit"<<"\nChoose the type of calculator ";
cin>>choice1;
flag=new_cal;
switch(choice1)
{
case 1:
do
{
clrscr();
cout<<"========Standard calculator==========";
cout<<"\n1\tAddition\n2\tSubtraction\n3\tMultiplication\n4\tDivision\n5\tModulus\n6\tReturn to previous Menu\n7\tQuit"<<endl;
if (flag==old_cal)
cout<<"\n8\tClrear memory"<<"\nChosse the type of calculation ";
cin>>choice2;
switch(choice2)
{
		case 1:
if (flag==new_cal)
{
cout<<"\nEnter fisrt number";
cin>>num1;
}
else
{
num1=temp;
cout<<"\nFisrt number is "<<num1<<endl;
}
cout<<"\nEnter second number";
cin>>num2;
num3=stand_calc::addition(num1,num2);
cout<<"\nAddition of "<<num1<<"and "<<num2<<"is = "<<num3<<"\nPress any key to continue......";
getch();
temp=num3;
flag=old_cal;
break;
		case 2:
if (flag==new_cal)
{
cout<<"\nEnter first number"<<endl;
cin>>num1;
}
else
{
num1=temp;
cout<<"\nFIrst number is "<<num1<<endl;
}
cout<<"\enter second number "<<endl;
cin>>num2;
num3=stand_calc::subtract(num1,num2);
cout<<"\nSubtraction of "<<num1<<"from "<<num2<<" is "<<num3<<"\nPress any key to continue....";
getch();
temp=num3;
flag=old_cal;
break;
	       case 3:

if (flag==new_cal)
{
cout<<"\nEntre first number"<<endl;
cin>>num1;
}
else
{
num1=temp;
cout<<"\nFirst number is "<<num1<<endl;
}
cout<<"\nEnter second number"<<endl;
cin>>num2;
num3=stand_calc::multiplication(num1,num2);
cout<<"\nMultiplication of "<<num1<<"and "<<num2<<" is "<<num3<<"\nPress any key to continue.....";
getch();
temp=num3;
flag=old_cal;
break;
		case 4:
if(flag==new_cal)
{
cout<<"\nEnter first number"<<endl;
cin>>num1;
}
else
{
num1=temp;
cout<<"\nFIrst number is "<<num1<<endl;
}
cout<<"\nEnter second number"<<endl;
cin>>num2;
num3=stand_calc::division(num1,&num2);
cout<<"\nDivision from "<<num1<<" by "<<num2<<" is "<<num3<<"\nPress any key to continue......";
getch();
temp=num3;
flag=old_cal;
break;

		case 5:

if (flag==new_cal)
{
cout<<"\nEnter first number"<<endl;
cin>>num1;
}
else
{
num1=temp;
cout<<"\nFirst number is "<<num1<<endl;
}
cout<<"\nEnter second number"<<endl;
cin>>num2;
num3=stand_calc::modulus(&num1,&num2);
cout<<"\nModulus of "<<num1<<" by "<<num2<<" is "<<num3<<"\nPress any key to continue";
getch();
temp=num3;
flag=old_cal;
break;

		case 6:
		cout<<"\nReturning previous menu"<<"\nPress any key to continule...";
		getch();
		break;

		case 7:
		cout<<"\nQutiing....."<<"\nPress any key to continue....";
		getch();
		break;


		case 8:
		if(flag==new_cal)
		{
		cout<<"\nInvlid choice"<<"\nPress any key to continue";
		getch();
		}
else
{
temp=0;
flag=new_cal;
}
break;
		default:
		cout<<"\nInvalid choice"<<"\nPress any key to continue.....";
		getch();
		break;
		}

		}
		while(choice2!=6);
		break;

	 case 2 :
	 {
	 clrscr();
	 cout<<"====Scientific Calculator===="<<"\n1\tSquare\n2\tCube\n3\tPower\n4\tFactorial\n5\tSin\n6\tCos\n7\tTan\n8\tReturn to previous menu\n9\tQuit"<<endl;
	 if(flag==old_cal)
	 cout<<"\n10\tClear memory"<<"\nChoos the type of calculaton";
	 cin>>choice2;
	 switch(choice2)
	 {
	 case 1:
	 if (flag==new_cal)
	 {
	 cout<<"\nEnter number to find square"<<endl;
	 cin>>num1;
	 }
	 else
	 {
	 num1=temp;
	 cout<<"\nNumber is "<<num1<<endl;
	 }
num3=scien_calc::square(num1);
cout<<"\nSquare of "<<num1<<" is "<<num3<<"\nPress any key to continue....";
getch();
temp=num3;
flag=old_cal;
break;
	case 2:
	if(flag==new_cal)
	{
	cout<<"\nEnter number to find cube"<<endl;
	cin>>num1;
	}
	else
	{
		num1=temp;
cout<<"\nNumber is "<<num1;
  }
   num3=scien_calc::cube(num1);
    cout<<"\nCube of "<<num1<<" is "<<num3<<"\nPress any key to continue...";
     getch();
      temp=num3;
      flag=old_cal;
      break;

	 case 3:
	 if (flag==new_cal)
	 {
	 cout<<"\nEnter first number for base to find power "<<endl;
	 cin>>num1;
	 }
	 else
	 {
	 num1=temp;
	 cout<<"\nFirst number is "<<num1<<endl;
	 }
	 cout<<"\nEnter the second number for power to find power"<<endl;
	 cin>>num2;
	 num3=scien_calc::power(num1,num2);
	 cout<<"\n"<<num1<<" to the power "<<num2<<" is "<<num3<<"\nPress any key to continue....";
	 getch();
	 temp=num3;
	 flag=old_cal;
	 break;


	 case 4:
	 if(flag==new_cal)
	 {
	 cout<<"\nEnter number to find factorial"<<endl;
	 cin>>num1;
	 }
	 else
	 {
	 num1=temp;
	 cout<<"\nNumber to find factorial is "<<num1<<endl;
	 }
	 long int num4=scien_calc::fact(num1);
	 cout<<"\nFactorial of "<<num1<<" is "<<num4<<"\nPress any key  t0 continue.....";

	 getch();
	 temp=num4;
	 flag=old_cal;
	 break;

	case 5:
	if (flag==new_cal)
	{
	cout<<"\nEnter a number to find sin value"<<endl;
	cin>>num1;
	}
	else
	{
	num1=temp;
	cout<<"\nNumber for sin value is "<<num1<<endl;
	}
	num3=scien_calc::sin_func(num1);
	cout<<"\nSIn value of "<<num1<<" is "<<num3<<"\nPress any key to continue....";

	getch();
	temp=num3;
	flag=old_cal;
	break;

	case 6:
	if (flag==new_cal)
	{
	cout<<"\nEnter number to find cos value "<<endl;
	cin>>num1;
	}
	else
	{
	 num1=temp;
	 cout<<"\nNUmber to find cos value is "<<num1<<endl;
	 }
	 num3=scien_calc::cos_func(num1);
	 cout<<"\nCos value of "<<num1<<" is "<<num3<<"\nPress any key to continue...";
	 getch();
	 temp=num3;
	 flag=old_cal;
	 break;

	 case 7:
	 if(flag==new_cal)
	 {
	 cout<<"\nEnter number to find tan value ";
	 cin>>num1;
	 }
	 else
	 {
	 num1=temp;
	 cout<<"\nNumber to tanm value is "<<num1<<endl;
	 }
	 num3=scien_calc::tan_func(num1);
	 cout<<"\nTan value or "<<num1<<" is "<<num3<<"\nPress any key to continue...";

	 getch();
	 temp=num3;
	 flag=old_cal;
	 break;


	 case 8:
	 cout<<"\nReturning to previous menu "<<"\nPress any key to continue.....";
	 getch();
	 break;

	 case 9:
	 cout<<"\nQuitting...."<<"\npress any key to continue.....";
	 getch();
	 exit(0);

	case 10:

	if(flag==new_cal)
	{
	cout<<"\nInvalid Choice "<<"\nPress any key to continue.....";
	getch();
	}
	else
	{
	temp=0;
	flag=new_cal;
	}
	break;
	default:
	cout<<"\nInvalid choice "<<"\npress any key to continue...";
	getch();
	break;
	}
	}
	while(choice2!=8);
	break;
	case 3:
	cout<<"\nQuitting...."<<"\nPress any key to continue....";
	getch();
	break;
	default:
	cout<<"\nInvalid choice "<<"\nPress any key to contiue...";
	getch();
	break;
	}
	}
	while(choice1!=3);
      }
