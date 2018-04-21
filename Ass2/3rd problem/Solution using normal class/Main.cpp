#include <iostream> 
#include "Total.h"
using namespace std ; 
double Total::total =0  ; 
void main() 
{
	int x ; 
	
	cout<<"please enter how many number you want to add "<<endl ; 
	cin>>x ;
	
	double y[100] ;
	for(int i=0 ;i<x ;i++)
	{
		cout<<"enter numbers to be added "<<endl ; 
		cin>>y[i] ;
	}
	for(int j = 0 ; j<x ; j++ )
	{
		Total mytotal(x,y[j]);
		mytotal.total_of_numbers() ; 
	}
	
	cout<<"The sum of all numbers = "<<Total::total <<endl ;

	  system("pause") ; 
}