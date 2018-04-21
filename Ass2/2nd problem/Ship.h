#ifndef SHIP_H
#define SHIP_H
#include<iostream> 
#include<string>
using namespace std ; 
class Ship 
{
protected: string name ; 
		   string date_of_built ; 

public :
	Ship()
	{
		name= "  " ;
		date_of_built="  " ;
	}
	Ship(string a , string b)
	{
		setname(a);
		setd_o_b(b);
	}
	void setname(string a)
	{
		name=a ; 
	}
	void setd_o_b(string b )
	{
		date_of_built= b; 
	}
	string getname() 
	{
		return name ; 
	}
	string getd_o_b()
	{
		return date_of_built ; 
	}
	virtual void display() 
	{
		cout<<"The name of the ship is "<<name <<" and it was built at "<<date_of_built<<endl ; 
	}

} ;
#endif