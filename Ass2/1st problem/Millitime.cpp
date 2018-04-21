#include "Time.h"
#include "Millitime.h"
#include<iostream> 
using namespace std; 


 Millitime :: Millitime(int c, int d) 
{
	Millitime::sethour(c)  ;
	Millitime::setseconds(d);
}
void Millitime::setseconds(int d )
{
	milsecond=d ; 
	Millitime::setsecond(milsecond);
}
void Millitime::sethour(int c )
{
	milhour=c  ;
}
int Millitime::gethour() 
{
	return milhour ; 
}

void Millitime::changethetime() 
{
	     
	    int y=milhour/100 ;
         Millitime::setHour(y) ;
		  
		 int x=milhour-(Hour*100) ; 
		Millitime::setMinute(x);
	

		
}