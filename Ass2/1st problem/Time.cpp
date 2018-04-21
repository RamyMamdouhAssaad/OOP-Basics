#include "Time.h"
#include "Millitime.h"
#include<iostream> 
using namespace std; 

	Time::Time() 
	{
		Hour=0 ; 
		Minute=0 ; 
		second=0 ; 

	}
	Time::Time(int a,int b,int c)
	{
		Time::setHour(a);
		Time::setMinute(b);
		Time::setsecond(c);

	}
	void Time :: setHour(int x) 
	{
	Hour=x ; 
	}
	void Time::setMinute(int y)
	{
	Minute= y ; 
	}
	void Time::setsecond( int s ) 

	{ 
		second = s; 
	} 

       int Time::getsecond ()  
	   {
		   return second; 
	   } 

	int Time ::getHour () 
	{
		return Hour ; 
	}
	int Time::getMinute() 
	{
		return Minute ; 
	}
	void Time::DisplayHourandMinute() 
	{
	

		if(Hour>-1 && Hour<12 ) 
		{
			cout<<"Time in standard form equal "<<Hour<<" : "<<Minute<<": "<<second<<" am  "<<endl  ;
		}
		if(Hour>11 && Hour<24 ) 
		{
			cout<<"Time in standard form equal "<<Hour-12<<" : "<<Minute<<" : "<<second<<" pm  "<<endl  ;
		}
        if ( Hour >= 24 ) 

		{
			cout<<"Invalid error"<<endl ; 
	
		}
	}