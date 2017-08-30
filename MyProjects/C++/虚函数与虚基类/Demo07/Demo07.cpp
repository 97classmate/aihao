// Demo07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int m;
	int n;
public:
	A()
	{
		cout<<"你去哪里？"<<endl;
		m=0;n=0;
	}
	A(int m,int n)
	{
		cout<<"我看到你了"<<endl;
		this->m=m;
		this->n=n;

	}

	void disp()
	{
		cout<<m<<":"<<n<<endl;
	}
};

class B:virtual public A
{
public:
	B()
	{
	}
	
	B(int m,int n):A(m,n)
	{
	}
};

class C:virtual public A
{
public:
	C()
	{
	}
	
	C(int m,int n):A(m,n)
	{
	}
};

class D:public B,public C
{
public:
	D(int a,int b,int c,int d):B(a,b),C(c,d)
	{
	}
};


void main()
{
	D d(1,2,3,4);
	d.disp();
}