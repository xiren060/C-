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
	{  cout<"姓名："<<name<<"\n\t编号:"<<idnum<<endl;}

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
	{ cout<"姓名："<<name<<"\n\t编号:"<<idnum<<"\n\tTitle："<<title<<"\twage:"<<v<<endl; }
};
void main()
{
	person p("张少华","420106196611070538");
	teacher t("李若山","420106195801347168","教授",5000);
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
	Person p("张少华","420106196611070538");
	Teacher t("李若山","420106195801247168","教授",5000);
	p.Print();
	t.Print();
}
