#include<iostream.h>
class book
{
private:
	char bookname[20];
	int price;
	int number;
public:

	void display();//��ʾͼ�����
	void borrow();//��
	void restore();//��
	void ruku();//�����

};
void book:: ruku(){cout<<"���������������������۸�"<<endl;cin>>bookname>>number>>price;}
void book:: display(){cout<<"��"<<bookname<<"��"<<endl<<"��ǰ��������:"<<number<<endl<<"�۸�:"<<price<<"Ԫ"<<endl;}
void book:: borrow(){number--;cout<<"�ɹ�����"<<endl;} 
void book:: restore(){number++;cout<<"�ɹ��黹"<<endl;}
void main()
{
	book d;
	d.ruku();
    int x;
	d.display();
	cout<<"����������1���黹������2"<<endl;
	cin>>x;
	switch(x)
	{case 1 :d.borrow();break;case 2: d.restore();break;}
	d.display();
	
}