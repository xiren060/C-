#include<iostream.h>
class em
{
protected:
   int number;
   int basicsalary;	
   char name[10];
public:
	em(){basicsalary=2000;}
	void pay(){cout<<"姓名、编号:"<<endl;cin>>name>>number;}
	void print(){cout<<"姓名："<<name<<"编号："<<number<<"工资："<<basicsalary<<endl;}
};



class s:public em
{	
protected:
	int sales;
	static double com;
public:
	s(){};
	int salary;
    void pay()
	{
		cout<<"姓名、编号、销售额："<<endl;
	    cin>>name>>number>>sales;
		salary=basicsalary+(sales*com);
	}
    void print(){cout<<"姓名："<<name<<"编号："<<number<<"工资："<<salary<<endl;}
};
double s::com=0.005;



class sm:public s
{
protected:
	int jobsalary;
public:
	sm(){jobsalary=3000;};
    void pay()
	{
		
	    cout<<"姓名、编号、销售额："<<endl;
	    cin>>name>>number>>sales;
     	salary=basicsalary+jobsalary+(sales*com);
	}
    void print(){cout<<"姓名："<<name<<"编号："<<number<<"工资："<<salary<<endl;}
};


void main()
{    
	 
	  em obj1;
	  s obj2;
	  sm obj3;
	 cout<<"一般员工："<<endl;

	 obj1.pay();
	 obj1.print();
	 cout<<"销售员工："<<endl;

	 obj2.pay();
	 obj2.print();
	 cout<<"销售经理："<<endl;

	 obj3.pay();
	 obj3.print();
}