#include<iostream.h>
class st
{
public:
	void stc(double s);
	 static void  sum();//返回总分
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
	cout<<"输入学生人数:";
	cin>>c;
	count=c;
	for(int i=1;i<=c;i++)
	{
		cout<<"学号："<<i<<endl;
	    cout<<"成绩:";
		cin>>score;	
		//score=s;
	    total=total+score;
	}
	cout<<"学生数："<<count<<endl;
}

void st::sum(){cout<<"总分："<<total<<endl;}
void st::ave(){cout<<"平均分:"<<total/count<<endl;}
void main()
{
	st d;
	d.stc(10);
	d.sum();
	d.ave();
}



