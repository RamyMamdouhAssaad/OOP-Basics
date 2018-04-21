#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include "ship.h"
#include<iostream> 
#include<string>
using namespace std ; 

class Cargoship :Ship 
{
protected: int capacity ;
public :
	Cargoship()
	{
		capacity= 0 ;
		name=" ";
	}
	Cargoship (int x,string a)
	{
		setcapacity(x);
		setname(a);
	}
	void setcapacity(int x) 

	{
		capacity=x ; 

	}
	int getcapacity() 
	{
		return capacity ; 
	}

	void setname(string a) 
	{
		Ship::name =a ;
	}
	string getname() 
	{
		return name ; 
	}
	void display()
	{
		cout<<"The name of the ship is "<<name <<" and maxiumum capacity= "<<capacity<<endl ;
	}

};
#endif