// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


class Dream
{
public:
	virtual void f1()
	{
		cout<<"����1������"<<endl;
	}
	
	virtual void f2()
	{
		cout<<"����2������Ա"<<endl;
	}
	void f3()
	{
		cout<<"���е�ʱ�������"<<endl;
	}
};

class People:public Dream
{
public:
	void f1()
	{
		cout<<"��������"<<endl;
	}
	void f2()
	{
		cout<<"hacker"<<endl;
	}
	void f3()
	{
		cout<<"455645645"<<endl;
	}
};

void main()
{
       Dream A;
	   A.f1();
	   A.f2();

	   Dream *p=&A;
	   p->f1();
	   p->f2();
	   p->f3();


}
