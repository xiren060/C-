#include<iostream.h>
class vector
{
public:
	vector(int n);
	vector(double *,int);
	~vector();
	double & operator[](int i);
    vector & operator=(vector &);
	friend vector operator+(vector &,vector &);
    friend vector operator-(vector &,vector &);
    friend vector operator*(vector &,vector &);
	friend ostream & operator<<(ostream &output,vector &); 
	friend istream & operator>>(istream &input,vector &);

private:
	int len;double *v;
};
vector::vector(int n)
{	
	v=new double[n];
	for(int i=0;i<n;i++)
		v[i]=0;
	len=n;
}
vector::vector(double *C,int n)
{
	v=new double[n];
	len=n;
	for(int i=0;i<len;i++)
		v[i]=C[i];
}
vector::~vector(){delete[]v;v=NULL;len=0;} 
double &vector::operator[](int i)
{
	if(i>=0&&i<len)
		return v[i];
	else
	{
	    cout<<"长度为："<<i<<endl;

	}

}
vector &vector::operator=(vector &C)
{
	if(len==C.len)
	{
		for(int i=0;i<len;i++)
			v[i]=C[i];
		return *this;
	}
	else
	{
		cout<<"operator=fail!\n";
	}
}
vector operator+(vector &A,vector &B)
{
	int n=A.len;
	double *T=new double[n];
	if(n==B.len)
	{
		for(int i=0;i<n;i++)
			T[i]=A[i]+B[i];
		
	}
}
vector operator-(vector & A,vector &B)
{
	int n=A.len;
	double *T=new double[n];
	if(n==B.len)
	{
		for(int i=0;i<n;i++)
			T[i]=A[i]-B[i];
		return vector(T,n);
	}
}
double operator*(vector &A,vector &B)
{
	int n=A.len;
	double s=0;
	if(n==B.len)
	{
		for(int i=0;i<n;i++)
			s+=A[i]*B[i];
		return s;
	}
}
ostream & operator<<(ostream &output,vector & A)
{	
	int i;
	output<<'(';
	for(i=0;i<A.len-1;i++)
		output<<A[i]<<',';
	output<<A[i]<<',';
		return output;

}
istream & operator>>(istream &input,vector & A)
{
	
	for(int i=0;i<A.len;i++)
	{
		input>>A[i];
		return input;
		 
	}
}

void main()
{	
	int k1,k2,k3;
	double t;
	cout<<"输入数组元素个数：";
	cin>>k1;
	vector A(k1);
	cout<<"X:";
	cin>>A;
	cout<<"输入数组元素个数：";
	cin>>k2;
	vector B(k2);
	cout<<"Y:";
	cin>>B;
	cout<<"C=";
	cin>>k3;
	vector C(k3);
	cout<<"X="<<A<<endl;
	cout<<"Y="<<B<<endl;
	C=A+B;
	cout<<"X+Y="<<C<<endl;
	C=A-B;
	cout<<"X-Y="<<C<<endl;
	t=A*B;
	cout<<"A*B="<<t<<endl;
}




















