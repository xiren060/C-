#include<iostream.h>
class re
{
protected:
	int l;int w;
public:	
    int si;int li,we;
	re(){}
	void getlw(){cout<<"输入长、宽：";cin>>l>>w;si=l*w;}
    int  gets(){return si;}

};

class regl:public re          //  le wi
{
protected:
    int h;
public:
	int vl;
	regl(){};
	void geth()
	{
	    cout<<"高：";
		cin>>h;
	};
	int getv(){return vl;};
	void makev()
	{
		
		vl=re::si*h;
	}
};
void main()
{
	re d;
	regl c;
	d.getlw ();	
	//d.makes ();
	cout<<"面积为："<<d.gets()<<endl;
	c.geth ();
	c.makev ();
    cout<<"体积为:"<<c.getv()<<endl;
}
