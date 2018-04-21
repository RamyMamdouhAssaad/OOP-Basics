#include<iostream>
#include<string> 
using namespace std ; 
class timeoff 
{
private : 
	int id_number ; 
	string employee_name ; 
public :
	timeoff() 
	{
		id_number=1 ; 
		employee_name= " " ; 
	}
	timeoff(int id ,string name ) 
	{
		setid_number(id) ; 
		setemployee_name(name)  ; 
	}
	void  setid_number(int ids ) 
	{
		id_number= ids ; 
	}
	void setemployee_name(string names) 
	{
		employee_name= names ; 
	}
	int getid_number () 
	{
		return id_number ; 
	}
	string getemployee_name() 
	{
		return employee_name ; 
	}



};
class numdays 
{
private :
	int hours ; 
	float days ; 
public :
	numdays()
	{
		hours=8 ; 
		days =1 ; 
	}
	numdays (float hour,float day)
	{
		sethours(hour) ;
		setdays(day ) ;

	}
	void sethours(float h) 
	{
		hours=h ; 
	}
	void setdays(float d) 
	{
		days=d  ;
	}
	float gethours()
	{
		return hours ;
	}
	float getdays() 
	{
		return days ; 
	}
	float convertfromhourstodays()
	{
		days=hours/8 ;
	}
	numdays operator--(int hours )
	{
		hours-- ; 
	}
	numdays operator++(int hours ) 
	{
		hours++ ;
	}
}