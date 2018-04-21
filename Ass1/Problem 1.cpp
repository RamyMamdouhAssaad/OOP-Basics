#include<iostream>
#include<string>
using namespace std ;
class employee
{
private:
    string name ; 
    int id_number ;
    string department ;
    string poistion ;
public:
    employee()
    {
        name="a";
        id_number=1 ; 
        department= "business" ; 
        poistion="employee"; 
    }
	employee(string num,int id_num) 
	{
		setname(num);
        setid_number(id_num);
	    department=" "  ; 
	    poistion=" " ;
	}

        employee(string a,int b,string dep,string pos )
        {
            setname(a);
            setid_number(b);
            setdepartment(dep);
            setpoistion(pos);
        }
        void setname(string a)
        {
            name=a; 
        }
        void setid_number(int x) 
        {
            id_number= x ; 
        }
        void setdepartment(string h) 
        {
            department= h ; 
        }
        void setpoistion(string pos)
        {
            poistion=pos ; 
        }
        string getname()
        {
            return name ;
        }
        int getid_number()
            {
            return id_number ;

        } 

        string getdepartment()
        {
        return department ; 
        }
        string getpoistion()
        {
            return poistion ; 
        }


};
void main() 
{
    string name1="susan meyers" ;
    string name2 ="mark jones "  ;
    string name3 ="joy rogers " ;
    int id_number1=47899 ;
    int id_number2=39119  ;
    int id_number3=81774 ;
    string Department1 ="accounting" ;
    string Department2 ="IT" ;
     string Department3="Manufacturing" ; 
    string position1="vice president ";
   string position2="programmer ";
    string position3="engineer ";
    cout<<"Name"<<"\t\t"<<"      id number" <<"\t\t"<<"poistion"<<"\t\t"<<"Department"<<endl ; 
    employee e(name1,id_number1,Department1,position1 );
    cout<<e.getname()<<"\t\t"<<e.getid_number() <<"\t\t"<<e.getpoistion()<<"\t\t"<<e.getdepartment()<<endl ; 
    employee d(name2,id_number2,Department2,position2 );
    cout<<d.getname()<<"\t\t"<<d.getid_number() <<"\t\t"<<d.getpoistion()<<"\t\t"<<d.getdepartment()<<endl ; 
    employee f(name3,id_number3,Department3,position3 );
        cout<<f.getname()<<"\t\t"<<f.getid_number() <<"\t\t"<<f.getpoistion()<<"\t\t"<<f.getdepartment()<<endl ; 
        system("pause") ; 
   
}