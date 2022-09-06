#include<iostream.h>
class book
{
private:
	char bookname[20];
	int price;
	int number;
public:

	void display();//显示图书情况
	void borrow();//借
	void restore();//还
	void ruku();//书入库

};
void book:: ruku(){cout<<"依次输入书名、数量、价格"<<endl;cin>>bookname>>number>>price;}
void book:: display(){cout<<"《"<<bookname<<"》"<<endl<<"当前存书数量:"<<number<<endl<<"价格:"<<price<<"元"<<endl;}
void book:: borrow(){number--;cout<<"成功借阅"<<endl;} 
void book:: restore(){number++;cout<<"成功归还"<<endl;}
void main()
{
	book d;
	d.ruku();
    int x;
	d.display();
	cout<<"借阅请输入1，归还请输入2"<<endl;
	cin>>x;
	switch(x)
	{case 1 :d.borrow();break;case 2: d.restore();break;}
	d.display();
	
}