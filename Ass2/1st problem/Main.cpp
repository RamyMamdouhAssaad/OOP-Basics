#include "Time.h"
#include "Millitime.h"
#include<iostream>  
using namespace std; 
void main() 
{
	int x, y,z ; 
cout<<"please enter hours"<<endl ; 
cin >>x ; 
cout<<"please enter seconds "<<endl ; 
cin>>z ;
 
Millitime myMillitime(x,z) ;
myMillitime.changethetime() ;
cout<<"Time in military form "<<myMillitime.getHour()<<"00"<<endl  ; 
myMillitime.DisplayHourandMinute() ; 

system("pause");

}
