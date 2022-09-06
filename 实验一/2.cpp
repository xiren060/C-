#include<iostream.h>
class box
{
public:
	box(int a,int b,int c);
	void volume();
private:
	int l;
	int w;
	int h;
};
//box::date (){int l;int w;int h;}

box::box(int a,int b,int c){l=a;w=b;h=c;}
void box::volume()
{
	int v;
	v=l*w*h;
	cout<<"Με»ύ="<<v<<endl;
}
void main()
{  
	box d1(5,5,5);
	box d2(6,7,8);
	d1.volume();
	d2.volume();
}
