// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//�ȵ��������Ĺ��캯��
//Ȼ�����������Ĺ��캯��
//�������Լ��Ĺ��캯��
class A
{
	int M;
	int N;
public:
	A(){}
	A(int M,int N)
	{
		this->M=M;
		this->N=N;
	}
	void disp()
	{
		cout<<M<<":"<<N<<endl;
	}

};

class B:virtual public A
{
	int x;
	int y;
public:
	B(){}
	B(int x,int y)
	{
		this->x=x;
		this->y=y;
	}

	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
};

class C:virtual public A
{
	int i;
	int j;
public:
	C(){}
	C(int i,int j)
	{
		this->i=i;
		this->j=j;

	}

	void disp()
	{
		cout<<i<<":"<<j<<endl;
	}
};

class D:public B,public C
{
	int a;
	int b;
public:
	//�����������̳е�ʱ������๹�캯������д�����ڸ�����ֱ�ӵ���
	D(int a,int b, int M,int N,int x,int y,int i,int j):A(M,N),B(x,y),C(i,j)
	{
		this->a=a;
		this->b=b;
	}

	void disp()
	{
		A::disp();
		B::disp();
		C::disp();
		cout<<a<<":"<<b<<endl;
	}
};

void main()
{
	D d(1,2,3,4,5,6,7,8);
	d.disp();
}

