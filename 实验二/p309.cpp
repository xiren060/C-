/*
#include<iostream.h>
#include<string.h>
class person
{
private:
	string name;
	string idnum;
public:
	person(const char*n,const char*i)
	{
		name=n;
		idnum=i;
	}
	void p() const
	{  cout<"������"<<name<<"\n\t���:"<<idnum<<endl;}

};
class teacher:public person
{
private:
	string name;
	string idnum;
	string zw;
	string title;
public:
	teacher(const char*n,const char*i,const*t,int v):person(n,i)
	{
	    title=t;
	}
	void p()const
	{ cout<"������"<<name<<"\n\t���:"<<idnum<<"\n\tTitle��"<<title<<"\twage:"<<v<<endl; }
};
void main()
{
	person p("���ٻ�","420106196611070538");
	teacher t("����ɽ","420106195801347168","����",5000);
	p.p();
	t.p();

}*/
#include<iostream.h>
#include<string>
class Person
{
protected:
	const char*name;
	const char*idNumber;
public:
	Person(const char*n,const char*i)
	{
		name=n;
		idNumber=i;
	}
	void Print()const
	{
		cout<<"Name:"<<name<<"\n\tidNumber:"<<idNumber<<endl;
	}
};
class Teacher:public Person
{
private:
	const char*Title;
	int Wage;
public:
	Teacher(const char*m,const char*j,const char*a, int b):Person(m,j)
	{
		name=m;
		idNumber=j;
		Title=a;
		Wage=b;
	}
	void Print()const
	{
		cout<<"Name:"<<name<<"\n\tidNumber:"<<idNumber<<"\n\tTitle:"<<Title<<"    Wage:"<<Wage<<endl;
	}
};
void main()
{
	Person p("���ٻ�","420106196611070538");
	Teacher t("����ɽ","420106195801247168","����",5000);
	p.Print();
	t.Print();
}
