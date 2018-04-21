#ifndef ARRAY_OF_NUMBERS_
#define ARRAY_OF_NUMBERS_
#include<iostream> 
using namespace std;  
int x ; 
class Array_
{
private: int number;
		 public:
			 void setnumber(int numbers)
			 {
				 number=numbers; 
			 }
			 int getnumber()
			 {
				 return number ;
			 }

			 void cin1(Array_ a[])
			 {
				  
				 try
				 {
				 int n;
		         for(int i = 0 ; i<10 ;i++)
				 {

				cout<<"Please enter number."<<i+1<<endl ; 
				cin>>n ;
				
				if(n==0 )
				{
					x=1 ;
				n=99999999 ; 
				
				}
				if(n<0 ) 
				{
					x=2 ;	
					n=9999999;
					
				}
				a[i].setnumber(n) ;
				cout<<endl ;
				 }
		 if(x==1)
					 {
						 throw 1 ; 
					 }
		 if(x==2)
					 {
						 throw 2 ; 
					 }
				 }
			  
				 catch(int x)
				 {
					 if(x==1)
					 {
						 cout<<"--------------------CANNOT ENTER A ZERO-----------------"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl ;
					     cout<<"all wrong numbers will be changed into 9999999"<<endl ; 
					 }
					 if(x==2)
					 {
						 
						 cout<<"--------------------CANNOT ENTER NEGATIVE NUMBER-----------------"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl  ; 
					 cout<<"all wrong numbers will be changed into 9999999"<<endl ; 
					 }
			  }
				 
			 }
					 
								

				 
			 
			 void print_(Array_ a[])
			 {
				 cout<<"here are the list of entered values"<<endl ; 
				 for(int i = 0 ; i<10 ; i++) 
				 {
					 a[i].print() ;
					 cout<<endl ;
				 }
			 }
			 void print()

			 {
				 cout<<number ; 
			 }
};
#endif