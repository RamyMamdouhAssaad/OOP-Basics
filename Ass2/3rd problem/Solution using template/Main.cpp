#include <iostream> 
using namespace std ; 
double static total = 0 ; 
template <class T>

class Total 
{
protected :T number_of_array ; 
		   T  running_numbers ; 
		   
public :  
		Total() 
		{
			number_of_array= 0 ;
			running_numbers= 0 ;
			total = 0 ;
		}
	Total(T x , T y)
	{
		set_number_of_array(x);
		set_running_numbers(y) ;


	}
	
	void set_number_of_array(T x )
	{
		number_of_array=x ; 
	}
	void set_running_numbers(T y)
	{
         running_numbers=y ; 
	}
	T get_number_of_array() 
	{
        return number_of_array ; 
	}
	T  get_running_numbers()
	{
		return running_numbers ; 
	}
 void display() 
	{
	cout<<"The total of numbers = "<<total<<endl  ;	
	}
	
	void total_of_numbers()
	{
         total=total+running_numbers ;

	} 
	T total_of() ;

}; 



template<class T>


T Total<T>::total_of() 
{
	return total ;
}


 
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
	
	
	Total <double> mytotal(x,y[0]);
	mytotal.total_of_numbers() ;
	for(int j = 1 ; j<x ; j++ )
	{
		Total <double> mytotal(x,y[j]);
		mytotal.total_of_numbers() ; 
		
	}
	cout<<"The total number ="<<mytotal.total_of()<<endl  ; 
	
	

	  system("pause") ; 
}