
#include<iostream>
#include "Cargoship.h"
#include "Cruiseship.h"
#include "Ship.h"
using namespace std ;
void main()

{
	string a,b  ; 
	int c, d ; 
	cout<<"please enter the name of the ship "<<endl ;
	cin>>a  ; 
	cout<<"Please enter when was it bulit "<<endl  ; 
	cin>>b ; 
	cout<<"please enter the maximum number of passenger in a Cruiseship "<<endl ; 
	cin>>c ;
	cout<<"please enter the capacity of a Cargo ship"<<endl ; 
	cin>>d ;
	Ship *myship=new Ship(a,b) ; 
	Cruiseship *mycruiseship=new Cruiseship(c,a) ;
	Cargoship *mycargoship=new Cargoship(d,a) ;
	
	myship->display() ; 
	mycruiseship->display() ; 
	mycargoship->display() ;
	system("pause") ; 


}