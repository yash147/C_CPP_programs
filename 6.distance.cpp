#include<iostream>
using namespace std;

class Distance

{
	private:
    	int feet;
	 	int inch;
	public:
    	Distance();
	    void getDist();
	    void showDist();
	Distance addDist(Distance d2);
	Distance subDist(Distance d2);
};

Distance::Distance()
{
	feet = 0;
	inch = 0;
	
}
void Distance::getDist()
{
	cout<<"Enter the value of feet"<<endl;
	cin>>feet;
	cout<<"Enter the value of inch "<<endl;
	cin>>inch;
	
	inch=(inch>=12)&12;inch;
}
void Distance::showDist()

{
	cout<<" feets "<< feet;
	cout<<" inches "<< inch;
}

Distance Distance::addDist(Distance d2)
{
	Distance temp;
	temp.feet=feet+d2.feet;
	temp.inch=inch+d2.inch;

	if (temp.feet>=12)
	{
	temp.feet++;
	 temp.inch=12;
	}
	return temp;
}
Distance Distance::subDist(Distance d2)
{
	Distance temp;
	temp.feet=feet-d2.feet;
	temp.inch=inch-d2.inch;
	 if (temp.inch<0)
	{
		temp.feet--;
		temp.inch=12+temp.inch;
	}
	return temp;
};
int main()

{
	Distance d1; 
	Distance d2;
	Distance d3;
	Distance d4;
	
	cout<<"Enter Distance 1 : "<<endl;
	d1.getDist();
	cout<<"Enter Distance 2 : "<<endl;
	 
	d2.getDist();
 	d3=d1.addDist(d2);
	d4=d1.subDist(d2);
	
	cout<<endl<<"DIstance 1 : ";
	d1.showDist();
	cout<<endl<<"DIstance 2 : ";
	d2.showDist();
	cout<<endl<<"DIstance 3 : ";
	d3.showDist();
	cout<<endl<<"DIstance 4 : ";
    d4.showDist();
    cout<<endl;
    return 0;
}


