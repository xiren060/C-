#include<iostream.h>
class st
{
public:
	void stc(double s);
	 static void  sum();//�����ܷ�
     static void  ave();//
private:
    double score;
	static  double total;
	static  int count;
};
double st::total=0;
int st::count=0;
void st::stc(double s)
{
	total=0;
	int c;
	cout<<"����ѧ������:";
	cin>>c;
	count=c;
	for(int i=1;i<=c;i++)
	{
		cout<<"ѧ�ţ�"<<i<<endl;
	    cout<<"�ɼ�:";
		cin>>score;	
		//score=s;
	    total=total+score;
	}
	cout<<"ѧ������"<<count<<endl;
}

void st::sum(){cout<<"�ܷ֣�"<<total<<endl;}
void st::ave(){cout<<"ƽ����:"<<total/count<<endl;}
void main()
{
	st d;
	d.stc(10);
	d.sum();
	d.ave();
}



