#include<iostream.h>
class em
{
protected:
   int number;
   int basicsalary;	
   char name[10];
public:
	em(){basicsalary=2000;}
	void pay(){cout<<"���������:"<<endl;cin>>name>>number;}
	void print(){cout<<"������"<<name<<"��ţ�"<<number<<"���ʣ�"<<basicsalary<<endl;}
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
		cout<<"��������š����۶"<<endl;
	    cin>>name>>number>>sales;
		salary=basicsalary+(sales*com);
	}
    void print(){cout<<"������"<<name<<"��ţ�"<<number<<"���ʣ�"<<salary<<endl;}
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
		
	    cout<<"��������š����۶"<<endl;
	    cin>>name>>number>>sales;
     	salary=basicsalary+jobsalary+(sales*com);
	}
    void print(){cout<<"������"<<name<<"��ţ�"<<number<<"���ʣ�"<<salary<<endl;}
};


void main()
{    
	 
	  em obj1;
	  s obj2;
	  sm obj3;
	 cout<<"һ��Ա����"<<endl;

	 obj1.pay();
	 obj1.print();
	 cout<<"����Ա����"<<endl;

	 obj2.pay();
	 obj2.print();
	 cout<<"���۾���"<<endl;

	 obj3.pay();
	 obj3.print();
}