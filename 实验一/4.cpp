#include<iostream.h>
struct point{int x,y;};//����
class line
{
public:
	int a,b,c,d;//ϵ��
	void print();//��ʾֵ�߷���
	//void setpoint();//����ֵ�߽���
};
void line::print()
{	line p;
    point g;
	cout<<"����l1����:"<<endl;
	cin>>p.a>>p.b;
    cout<<"����l2����:"<<endl;
	cin>>p.c>>p.d;
	cout<<"��ֱ�߷���Ϊ��"<<endl<<"y="<<p.a<<"x+"<<p.b<<endl<<"y="<<p.c<<"x+"<<p.d<<endl;	g.x=(p.d-p.b)/(p.a-p.c);
	g.y=p.a*((p.d-p.b)/(p.a-p.c))+p.b;
	cout<<"����Ϊ"<<"("<<g.x<<","<<g.y<<")"<<endl;
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
	//cout<<"����Ϊ"<<"("<<g.x<<","<<g.y<<")"<<endl;
}

