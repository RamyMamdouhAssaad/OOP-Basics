#ifndef MILLLITIME_H
#define MILLITIME_H
#include<iostream> 
using namespace std; 

class Millitime :public Time 
{
protected  : 
	int milhour ;
	int milsecond ; 

public:
	Millitime(int,int) ;
	void settime(int , int ) ;
	int gethour() ; 
	void setseconds(int h ) ;
	void sethour(int p ) ;
	void  DisplayHourandminute() ;
	void changethetime() ; 


} ;

#endif