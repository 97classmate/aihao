// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// 自建异常类，按照传值的形式传递 异常对象
class A
{
public:
	void f()
	{
		cout<<"异常A"<<endl;
	}
};

class B
{
public:
	void f()
	{
		cout<<"异常B"<<endl;
	}
};

class C
{
public:
	void f()
	{
		cout<<"异常C"<<endl;
	}
};

class D
{
public:
	void f()
	{
		cout<<"异常D"<<endl;
	}
};

class E
{
public:
	void f()
	{
		cout<<"异常E"<<endl;
	}
};

void main()
{
	try
	{
		A a;
		B b;
		C c;
		D d;
		E e;

		int x;
		cin>>x;
		if(x==0)
			throw a;
		if(x==1)
			throw b;
		if(x==2)
			throw c;
		if(x==3)
			throw d;
		if(x==4)
			throw e;
	}
	catch(A a)
	{
		a.f();
	}
	catch(B a)
	{
		a.f();
	}
	catch(C a)
	{
		a.f();
	}
	catch(D &a)
	{
		a.f();
	}
	catch(E a)
	{
		a.f();
	}
}
