#include<iostream.h>
class re
{
protected:
	int l;int w;
public:	
    int si;int li,we;
	re(){}
	void getlw(){cout<<"���볤����";cin>>l>>w;si=l*w;}
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
	    cout<<"�ߣ�";
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
	cout<<"���Ϊ��"<<d.gets()<<endl;
	c.geth ();
	c.makev ();
    cout<<"���Ϊ:"<<c.getv()<<endl;
}
