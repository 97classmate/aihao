// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// �Խ��쳣�࣬���մ�ֵ����ʽ���� �쳣����
class A
{
public:
	void f()
	{
		cout<<"�쳣A"<<endl;
	}
};

class B
{
public:
	void f()
	{
		cout<<"�쳣B"<<endl;
	}
};

class C
{
public:
	void f()
	{
		cout<<"�쳣C"<<endl;
	}
};

class D
{
public:
	void f()
	{
		cout<<"�쳣D"<<endl;
	}
};

class E
{
public:
	void f()
	{
		cout<<"�쳣E"<<endl;
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
