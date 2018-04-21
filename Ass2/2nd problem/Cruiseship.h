#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include "ship.h"
#include<iostream> 
#include<string>
using namespace std ; 

class Cruiseship :Ship 
{
protected: int maximum_number ;
public :
	Cruiseship()
	{
		maximum_number= 0 ;
		name=" ";
	}
	Cruiseship (int x,string a )
	{
		setmaximum_number(x);
		setname(a);

	}
	void setmaximum_number(int x) 

	{
		maximum_number=x ; 

	}

	void setname(string a) 
	{
		Ship::name =a ;
	}
	string getname() 
	{
		return name ; 
	}
	int getmaximum_number() 
	{
		return maximum_number ; 
	}
	 void display()
	{
		cout<<"The name of the ship is "<<name <<" and maxiumum number of pessenger = "<<maximum_number<<endl ;
	}

};
#endif