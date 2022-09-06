#include<iostream.h>
class fu
{
public:
	void output();
	void input();
	void set();
	void operator++();
    void operator--();
    void operator*();
    //void operator%();
	int x1,x2,M1,M2,M3;
	double s1,s2,M4;
private:
    int xu1,xu2,m1,m2,m3;
	double shi1,shi2,m4;
};
void fu::set(){shi1=s1;xu1=x1;shi2=s2;xu2=x2;m1=M1;m2=M2;m3=M3;m4=M4;}
void fu::input()
{
	
	cout<<"请依次输入两个复数的实部 虚部(1：i/-1：-i)"<<endl;
	cin>>shi1>>xu1>>shi2>>xu2;
	//cout<<shi1<<xu1<<"+"<<shi2<<xu2<<endl;
}
void fu::output()
{
     cout<<shi1<<"i+"<<shi2<<"i="<<m1<<"i"<<endl;
	 cout<<shi1<<"i-"<<shi2<<"i="<<m2<<"i"<<endl;
     cout<<shi1<<"i*"<<shi2<<"i="<<m3<<endl;
     cout<<shi1<<"i/"<<shi2<<"i="<<m4<<endl;
}
void fu::operator++()
{
	m1=shi1+shi2;
}
	/*cout<<shi1<<"i+"<<shi2<<"i"<<endl;
	/*if(xu1==0 && xu2==0)
	{m=shi1+shi2;
	cout<<m<<endl;}
	if(xu1==0 && xu2==1)
	{cout<<shi1<<"+"<<shi2<<"i"<<endl;}
	if(xu1==1 && xu2==0)
	{cout<<shi1<<"i+"<<shi2<<endl;}
    if(xu1==1 && xu2==1)
	{m=shi1+shi2;cout<<m<<"i"<<endl;}
    if(xu1==1 && xu2==-1)
	{m=shi1+shi2;cout<<m<<"i"<<endl;}
    if(xu1==-1 && xu2==1)
	{cout<<"-"<<m<<"i"<<endl;}*/

void fu::operator--()
{   
	m2=shi1-shi2;
}
void fu::operator*()
{m3=shi1*shi2*(-1);
m4=shi1/shi2*(-1);
	/*if(xu1==1 && xu2==1)
	{m3=shi1*shi2*(-1);}
	if(xu1==-1 && xu2==-1)
	{m3=shi1*shi2*(-1);}
	if(xu1==1 && xu2==-1)
	{m3=shi1*shi2}*/

}
//void fu::operator%()
//{m4=shi1/shi2*(-1);}
void main()
{
	fu d;
	d.set ();
	d.input();
    ++d;
    --d;
	*d;
	d.output();
}