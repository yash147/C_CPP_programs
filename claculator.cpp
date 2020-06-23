#include<iostream.h>
#include<conio.h> 
#include<math.h>
#include<stlib.h>
#define new_cal 1
#define old_cal 0

class stand_calc
{
	public:
	staic double addition(double,double);
	staic double subtact(double,double);
	staic double multiplication(double,double);
	staic double division(double,double*);
	staic double modulus(double*,double*);	
};
class scien_calc
{
	public:
	staic double square(double);	
	staic double cube(double);
	staic double power(double,double);
	staic double sq_root(double);
	staic double long int fact(double);
	staic double sin_func(double);
	staic double cos_func(double);
	staic double tan_fun(double);
};
double stand_clac::addition(double a,double b)
{
	return(a+b);
}
double stand_clac::subtract(double a,double b)
{
	return(a-b);
}
double stand_clac::multiplication(double a,double b)
{
	return(a*b);
}
double stand_clac::division(double a,double *b)
{
	while(*b==0)
	{
	cout<<"\nCannot divide by zero.";
	cout<<"\nEnter second number again.";
	cin>>*b;
	}
	return(a/(*b);
}
double stand_clac::modulus(double *a,double *b)
{
	while(*b==0)
	{
	cout<<"\n Cannot divide by zero";
	cout<<"\n Enter second number again";
	cin>>*b;
	}

	int x=(int)*a;
	int y=(int)*b;
	if(*a-x>0||*b-Y>0)
	cout<<"\n Converting decimal number into an integer to perform modulus";
	*a=x;
	*b=y;
	return(x%y);
}
double scien_clac::square(double x)
{
	return(pow(x,2));
	
}
double scien_clac::cube(double x)
{
	return(pow(x,3));
	
}
double scien_clac::power(double x,double y)
{
	return(pow(x,y));
}
double scien_clac::sq_root(double x)
{
	return(sqrt(x));
}
lont int scien_calc::fact(double x)
{
	int n= (int)x;
	long  int f=1;
	while(n>1);
	{
		f*=n;
		n-;
	}
return f;

}
double scien_clac::sin_func(double x)
{
	return(sin x);
}
double scien_clac::cos_func(double x)
{
	return(cos x);
}
double scien_clac::tan_func(double x)
{
	return(tan x);
}
void main()
{
	double num1,num2,num3,num4,temp;
	int choice1=0,choice2,flag;
}
do
{ 
 	clrscr();
 	Cout<<"============Type of calculators===========";
 	cout<<"\n1\tStandard calculator\n2\tscientific calculator\n3\tQuit";
 	cout<<"\nChoose the type of calculator.";
 	cin>>choise1;
 	flag=new_cal;
 	
 	switch(choice1)
 	{
 		case 1:
 			
 			do{
 				clrscr();
 				cout<<"=======Standard calculator======";
 				cout<<"\n1\tAddition\n2\tSubtraction\n3\tMultiplication\n4\tDivision\n5\tModulus\n6tReturn to previous Menu\n7tQuit";
 			if(flag==old_cal)
 			    cout<<"\n8\tClear memory";
 			    
 			    cout<<"\nChoose the type of calculation :";
 			    cin>>choice2;
stand_calc class

			switch(choice2)
			{
				case 1:
					
					if(flag==new_cal)
					{
						cout<<"Enter First Number :";
						cin>>num1;
					}
					else
					{ 
					   num1=temp;
					   cout<<"\nFirst number is "<<num1<<endl;
					}
				
				cout<<"Enter second number :"
				cin>>num2;
				
			num3=stand_calc::addition(num1,num2);
			  
			    cout<<"\nAddition of "<<num1<<"and"<<num2<<"is"<<num3;
			         
			    cout<<"\nPress any key to continue......";
			         
			        getch();
			        temp=num3;
			        flag=old_cal;
			        break;
			    
				case 2:
				
				    if(flag==new_cal)
				    {
				    	cout<<"Enter first number :";
				    	cin>>num1;
					}
				    else
				    {
				    	num1=temp;
				    	cout<<"\nFirst number is "<<num1<<endl;	
					}
			
				        cout<<"\nEnter second number :";
				        cin>>num2;
			num3=stand_calc::subtact(num1,num2);
		            	
			    cout<<"\nSubtraction of"<<num2<<"from"<<num1<<"is"<<num3;
			    cout<<"\nPress any key to continue......";
					
					getch();
			        temp=num3;
			        flag=old_cal;
			        break;
			    
			    case 3:
			    	if(flag==new_cal)
				    {
				    	cout<<"Enter first number :";
				    	cin>>num1;
					}
				    else
				    {
				    	num1=temp;
				    	cout<<"\nFirst number is "<<num1<<endl;	
					}
			
				    	cout<<"\nEnter second number :";
				    	cin>>num2;
	
			num3=stand_calc::multiplication(num1,num2);
		            	
			    cout<<"\nMultiplication of"<<num1<<"and"<<num2<<"is"<<num3;
			    cout<<"\nPress any key to continue......";
					
					getch();
			        temp=num3;
			        flag=old_cal;
			        break;
			    
			    case 4:
			    	if(flag==new_cal)
				    {
				    	cout<<"Enter first number :";
				    	cin>>num1;
					}
				    else
				    {
				    	num1=temp;
				    	cout<<"\nFirst number is "<<num1<<endl;	
					}
			
				    	cout<<"\nEnter second number :";
				    	cin>>num2;
	    	
			num3=stand_calc::division(num1,&num2);
		            	
			    cout<<"\nDivision of"<<num1<<"by"<<num2<<"is"<<num3;
			    cout<<"\nPress any key to continue......";
					
					getch();
			        temp=num3;
			        flag=old_cal;
			        break;
			    
			    case 5:
			    	if(flag==new_cal)
				    {
				    	cout<<"Enter first number :";
				    	cin>>num1;
					}
				    else
				    {
				    	num1=temp;
				    	cout<<"\nFirst number is "<<num1<<endl;	
					}
			
				    	cout<<"\nEnter second number :";
				    	cin>>num2;
		
			num3=stand_calc::modulus(&num1,&num2);
		            	
			    cout<<"\nModulus of"<<num1<<"by"<<num2<<"is"<<num3;
			    cout<<"\nPress any key to continue......";
					
					getch();
			        temp=num3;
			        flag=old_cal;
			        break;
			    
			    case 6:
			    	cout<<"\nReturning to previous menu.";
			    	cout<<"\nPress any key to continue......";
			    	getch();
			    	break;
			    case 7:
				     cout<<"\nQuitting....."	;
				     cout<<"\nPress any key to continue......";
				     
				     getch();
				     exit(0);
				     
				case 8:
				
					if (flag==new_cal)
					{
						cout<<"\nChoise is invalid";
						cout<<"\nPress any key to continue......";
						getch();
					}
			    	else
			    	{
			    		
			    		temp=0;
			    		flag=new_cal;
					}
					break;
					
					
					default:
						cout<<"\nChoise is invalid";
						cout<<"\nPress any key to continue......";
						getch();
						break;
					}
					
			}
			while(choice2!=6);
			break;
			
		case 2:
		
		   do
		   {
		   	    clrscr();
		   	    cout<<"==============scientific calculator===============";
		   	    cout<<"\n1\tSquare\n2\tCube\n3\tPower\n4\tFactorial\n5\tSin\n6\tCos\n7\tTan\n8\tReturn to Previous menu\n9\tQuit";
		   	    if(flag==old_cal)
		   	      
		   	       cout<<"\n10\tClear memory";
		   	       cin>>choice2;
		   	switch(chioce2)       
		   	
		   	{
		   		case 1:
		   			if (flag==new_cal)
		   			{
		   				cout<<"Enter a number to find square";
		   				cin>>num1;		   				
					}
		   		     else
		   		    {
		   				num1=temp;
		   				cout<<"\nNumber is"<<num1<<endl;
		   			}
		   		
		   	num3=scien_calc::square(num1);
				
				
				cout<<"\nSquare of"<<num1<<"is"<<num3;
				cout<<"\nPress any key to continue........";
				
					getch();
					temp=num3;
					flag=old_cal;
					break;
					
				case 2:
		   			if (flag==new_cal)
		   			{
		   				cout<<"Enter anumber to find cube";
		   				cin>>num1;		   				
					}
		   		     else
		   		    {
		   				num1=temp;
		   				cout<<"\nNumber is"<<num1<<endl;
		   			}
		   		
		   	num3=scien_calc::cube(num1);
				
				
				cout<<"\nCube of"<<num1<<"is"<<num3;
				cout<<"\nPress any key to continue........";
				
					getch();
					temp=num3;
					flag=old_cal;
					break;
				
				case 3:
		   			if (flag==new_cal)
		   			{
		   				cout<<"Enter first number fo base to find the power :";
		   				cin>>num1;		   				
					}
		   		     else
		   		    {
		   				num1=temp;
		   				cout<<"\nNumber is"<<num1<<endl;
		   			}
		   		
		  				cout<<"Enter second number fo base to find the power :";
		   				cin>>num2; 		
		   				 
		   		case 4:
		   			if (flag==new_cal)
		   			{
		   				cout<<"Enter a number to find factorial :";
		   				cin>>num1;		   				
					}
		   		     else
		   		    {
		   				num1=temp;
		   				cout<<"\nNumber to find factorial is "<<num1<<endl;
		   			}
		    		
		   long int	num4=scien_calc::fact(num1);
				
				cout<<"\n Factorial of "<<num1<<"is"<<num4;
				cout<<"\nPress any key to continue........";
				
					getch();
					temp=num4;
					flag=old_cal;
					break;
			 	
			 	case 5:
			 		if (flag==new_cal);
			 		{
			 			
			 			cout<<"enter number to find sin value :";
			 			cin>>num1;
			 		 }
			 		 
			 		 else
			 		{
			 		 	
			 		 	num1=temp;
						  cout<<"\nNumber for sin value is "<<num3<<endl;
					}
			num3=scien_calc::sin_func(num1);
				cout<<"\nSin value of"<<num1<<"is"<<num3;
				cout<<"\nPress any key to continue........";
				
					getch();
					temp=num3;
					flag=old_cal;
					break;
							   	
		   	
		   		case 6:
			 		if (flag==new_cal);
			 		{
			 			
			 			cout<<"enter number to find cos value :";
			 			cin>>num1;
			 		 }
			 		 
			 		 else
			 		{
			 		 	
			 		 	num1=temp;
						  cout<<"\nNumber for cos value is "<<num1<<endl;
					}
			num3=scien_calc::cos_func(num1);
				cout<<"\nCos value of"<<num1<<"is"<<num3;
				cout<<"\nPress any key to continue........";
				
					getch();
					temp=num3;
					flag=old_cal;
					break;
				
				case 7:
			 		if (flag==new_cal);
			 		{
			 			
			 			cout<<"enter number to find tan value :";
			 			cin>>num1;
			 		 }
			 		 
			 		 else
			 		{
			 		 	
			 		 	num1=temp;
						  cout<<"\nNumber for tan value is "<<num1<<endl;
					}
			num3=scien_calc::tan_func(num1);
				cout<<"\nTan value of"<<num1<<"is"<<num3;
				cout<<"\nPress any key to continue........";
				
					getch();
					temp=num3;
					flag=old_cal;
					break;
				
		   	case 8:
			    	cout<<"\nReturning to previous menu.";
			    	cout<<"\nPress any key to continue......";
			    	getch();
			    	break;
			case 9:
				     cout<<"\nQuitting....."	;
				     cout<<"\nPress any key to continue......";
				     
				     getch();
				     exit(0);
				
		   	case 10:
				
					if (flag==new_cal)
					{
						cout<<"\nChoise is invalid";
						cout<<"\nPress any key to continue......";
						getch();
					}
			    	else
			    	{
			    		
			    		temp=0;
			    		flag=new_cal;
					}
					break;
					default:
						cout<<"\nChoise is invalid";
						cout<<"\nPress any key to continue......";
						getch();
						break;
					
			   }
		}while(choice2!=8);
		 break;
		 
		 	case 3:
		 		cout<<"\nQuiting ....."<<"\n Press any key to continue......";
		 		getch();
		 		break;
		 	default:
		 		cout<<"\n IUnvalid Choice."<<"\n Press any key to continue.....";
		 		getch();
		 		break;
		 	}
		 }while(choice!=3);
	}
