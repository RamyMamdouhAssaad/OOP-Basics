#include<iostream>
#include<string>
using namespace std ;
class retailitem
{
private :
    string description ;
    int unitsonhand ;
    double price ;
public :
    retailitem()
    {
        description= "a" ;
        unitsonhand=1 ;
        price = 1.00 ;
    }

    retailitem(string a,int b ,double p  )
    {
        setdescritpion(a);
            setunitsonhand(b);
            setprice(p) ;
    }
    void setdescritpion(string d)
    {
        description= d ;
    }
    void setunitsonhand(int k)
    {
        unitsonhand=k ;
    }
    void setprice(double l)
    {
        price= l ;
    }
    string getdescritpion()
    {
        return description ;
    }
    int getunitsonhand()
    {
        return unitsonhand;
    }
    double getprice()
    {
        return price ;
    }

} ;
int main()
{
    string descp1="jacket" ;
    string descp2="Designer jeans"  ;
    string descp3="Shirt" ;
    int unitsonhand1=12 ;
    int unitsonhand2=40  ;
    int unitsonhand3=20 ;
    double price1=59.95 ;
    double price2=34.95 ;
    double price3=24.95 ;
    retailitem r(descp1,unitsonhand1,price1);
    cout<<"\t\t"<<"Description"<<"\t\t"<<"Units On hand "<<"\t\t"<<"price"<<endl ;

    cout<<"item #1"<<"\t\t"<<r.getdescritpion()<<"\t"<<"\t\t"<<r.getunitsonhand()<<"\t"<<"\t\t"<<r.getprice()<<endl  ;

        retailitem d(descp2,unitsonhand2,price2);

        cout<<"item #2"<<"\t\t"<<d.getdescritpion()<<"\t\t"<<d.getunitsonhand()<<"\t"<<"\t\t"<<d.getprice()<<endl  ;

        retailitem s(descp3,unitsonhand3,price3) ;

        cout<<"item #3"<<"\t\t"<<s.getdescritpion()<<"\t"<<"\t\t"<<s.getunitsonhand()<<"\t"<<"\t\t"<<s.getprice()<<endl ;


        system("pause") ;
}