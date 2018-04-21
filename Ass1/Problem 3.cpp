#include<iostream>
#include<string>
using namespace std ;
class freezingandboilingpoint
{
private :
	double  temperature ;
public:
	freezingandboilingpoint(double temp)
	{
		settemp(temp) ;
		
	}

void settemp(double tem) 
{
	temperature=tem ; 
}
double gettemp() 
{
return temperature ;	
}
bool isethylfreezing() 
{
	if(temperature<=-173) 
	{
		return true ; 
	}
	else
		return false ; 
}
bool isethylboiling()
{
	if(temperature>=172) 
	{
		return true ;
    }
	else 
		return false ; 
}
bool isoxygenfreezing( ) 
{
	if(temperature<=-362) 
	{
		return true ; 
	}
	else
		return false ; 
}
bool isoxygenboiling()
{
	if(temperature>=-306) 
	{
		return true ;
    }
	else 
		return false ; 
}
bool iswaterfreezing( ) 
{
	if(temperature<=32) 
	{
		return true ; 
	}
	else
		return false ; 
}
bool iswaterboiling( )
{
	if(temperature>=212) 
	{
		return true ;
    }
	else 
		return false ; 
}
};
void main()
{
	double temp1 ;
	cout<<"please enter the temperature needed to be checked "<<endl ; 
	cin>>temp1 ; 
	freezingandboilingpoint a (temp1) ;
	cout<<"Temperature = "<<a.gettemp()<<endl ; 
	
if(a.isethylboiling()==true) 
{
	cout<<"ethyl will boil at this temperature"<<endl ; 
}
if(a.isethylfreezing()==true) 
{
	cout<<"ethyl will freeze at this temperature"<<endl ; 
}
	
if(a.iswaterboiling()==true) 
{
	cout<<"water will boil  at this temperature"<<endl ; 
}
if(a.iswaterfreezing()==true) 
{
	cout<<"water  will freeze at this temperature"<<endl ; 
}
if(a.isoxygenboiling()==true) 
{
cout<<"oxygen will boil at this temperature "<<endl ; 
}
if(a.isoxygenfreezing()==true)
{
cout<<"oxygen will freeze at this temperature "<<endl ; 
}

system("pause") ; 


}
