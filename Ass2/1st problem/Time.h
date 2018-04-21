#ifndef TIME_H
#define TIME_H
#include<iostream> 
using namespace std; 

class Time
{	
protected : int  Hour ; 
		 int Minute  ; 
		 int second ; 


public :

	Time() ;

	Time(int,int,int) ; 

	void  setHour(int);

	int getHour ()  ;

	void setMinute(int) ;

	int getMinute() ; 

	void setsecond(int) ; 

	int getsecond() ; 

	void DisplayHourandMinute() ;


	
}
;

#endif