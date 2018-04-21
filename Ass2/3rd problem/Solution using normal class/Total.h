#ifndef TOTAL_H
#define TOTAL_H
#include<iostream> 
using namespace std ;
class Total 
{
protected :int number_of_array ; 
		   double  running_numbers ; 
public :  double static total  ; 
		Total() 
		{
			number_of_array= 0 ;
			running_numbers= 0 ;
			total = 0 ;
		}
	Total(int x , double y)
	{
		set_number_of_array(x);
		set_running_numbers(y) ;

	}
	
	void set_number_of_array(int x )
	{
		number_of_array=x ; 
	}
	void set_running_numbers(double y)
	{
         running_numbers=y ; 
	}
	int get_number_of_array() 
	{
        return number_of_array ; 
	}
	double  get_running_numbers()
	{
		return running_numbers ; 
	}
	void total_of_numbers() 
	{
        total=total+running_numbers ;
	}
	void display() 
	{
		cout<<"The total of numbers = "<<total<<endl  ;
	}


} ;
#endif