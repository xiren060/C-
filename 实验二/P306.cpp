#include<iostream.h>
class base 
{
public :
	void get(int i,int j,int k,int l)
	{a=i;b=j;x=k;y=l;}
	void p()
	{
		cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"x="<<x<<'\t'<<"y="<<y<<endl;
	}
	int a,b;
protected:
	int x,y;
};
class A:public base
{
public:
	void get(int i,int j,int k,int l)
	{
		base obj3;
		obj3.get(50,60,70,80);
		obj3.p();
		a=i;b=j;x=k;y=l;
		u=a+b+obj3.a;
		v=y-x+obj3.b;
	}
	void p()
	{
     	cout<<"a="<<a<<'\t'<<"b="<<b<<'\t'<<"x="<<x<<'\t'<<"y="<<y<<endl;
		cout<<"u="<<u<<'\t'<<"v="<<v<<endl;
	}
private:
	int u,v;
};
int main()
{
	base obj1;
	A obj2;
	obj1.get(10,20,30,40);
	obj2.get(30,40,50,60);
	obj1.p();
	obj2.p();
}
