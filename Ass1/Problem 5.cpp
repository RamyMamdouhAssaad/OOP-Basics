#include<iostream> 
#include<string> 
using namespace std; 
class roomdimension 
{
private:
 	 double length ; 
	 double width ; 

public:
	roomdimension() 
	{
		length=1 ; 
		width=1 ;
	}
	
	roomdimension(double len,double wid) 
	{
		setlength(len) ; 
		setwidth(wid) ; 
	}
	void setlength(double leng) 
	{
		length=leng ; 
		 
	}
	void setwidth(double widt)
	{
		width=widt ; 
		 
	}
	double getlength()
	{
		return length ;
	}
	double  getwidth()
	{
		return width ; 
	}
	double getarea()
	{
		return width*length ; 
	}
}; 



	class roomcarpet 
{
private :
	double  costperfeet ; 
	 
public : 
	roomdimension k;

	roomcarpet()
	{
		costperfeet= 1; 
	}

	
	roomcarpet(double pri) 
	{
		setcostperfeet(pri)  ; 
	}
	void setcostperfeet(double cost) 
	{
		costperfeet=cost ; 
	}
	double getcostperfeet()	
	{
		return costperfeet ;
	}
	void setdimensions(double len , double wid) 
	{
	    k.setlength(len) ; 
		k.setwidth(wid) ;  
	}

	double  getprice() 
	{

		return k.getarea() * costperfeet ; 
	}

};



int main() 
{
	double lengt; 
	double  widt ; 
	double price ;

	cout<<"Please enter the length "<<endl; 
	cin>>lengt ; 
	cout<<"please enter the width "<<endl ; 
	cin>>widt ; 
	roomdimension c ( lengt, widt) ; 
	cout<<"The area of the carpet =  " <<c.getarea() <<endl ; 
	cout<<"please enter the price per feet"<<endl ; 
	cin>>price ; 
	 roomcarpet b(price)  ;
	 b.setdimensions(lengt,widt) ; 
	 cout<<"Cost of the carpet = "<<b.getprice()<<" $ " <<endl ; 
	 
	 
	
	system("pause") ;
}