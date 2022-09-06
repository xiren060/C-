#include<iostream.h>
class A
{
public :
	A(int i,int j){ a=i; b=j ;}
	void add(int x,int y){ a+=x;b+=y;}
	void show(){cout<<"("<<a<<")\t("<<b<<")\n";}
private:
	int a,b;
};
class B:public A
{
public:
	B(int i,int j,int m,int n):A(i,j),x(m),y(n){}
	void show(){ cout <<"("<<x<<")\t("<<y<<")\n";}
	void fun(){ add(3,5); }
	void ff(){ A::show();}
private:
	int x,y;

};
int main()
{
	A a(1,2);
	a.show();
	B b(3,4,5,6);
	b.fun();
	b.A::show();
	b.show();
	b.ff();
}