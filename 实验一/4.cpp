#include<iostream.h>
struct point{int x,y;};//交点
class line
{
public:
	int a,b,c,d;//系数
	void print();//显示值线方程
	//void setpoint();//球两值线交点
};
void line::print()
{	line p;
    point g;
	cout<<"输入l1参数:"<<endl;
	cin>>p.a>>p.b;
    cout<<"输入l2参数:"<<endl;
	cin>>p.c>>p.d;
	cout<<"两直线方程为："<<endl<<"y="<<p.a<<"x+"<<p.b<<endl<<"y="<<p.c<<"x+"<<p.d<<endl;	g.x=(p.d-p.b)/(p.a-p.c);
	g.y=p.a*((p.d-p.b)/(p.a-p.c))+p.b;
	cout<<"交点为"<<"("<<g.x<<","<<g.y<<")"<<endl;
}
/*void line::setpoint()
{
	point g;
	line p;

}
*/
void main()
{
	line p;
	p.print();
	//p.setpoint();
	//cout<<"交点为"<<"("<<g.x<<","<<g.y<<")"<<endl;
}

