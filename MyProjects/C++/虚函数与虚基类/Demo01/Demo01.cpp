// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


class Dream
{
public:
	virtual void f1()
	{
		cout<<"梦想1：汽车"<<endl;
	}
	
	virtual void f2()
	{
		cout<<"梦想2：程序员"<<endl;
	}
	void f3()
	{
		cout<<"初中的时候的梦想"<<endl;
	}
};

class People:public Dream
{
public:
	void f1()
	{
		cout<<"兰博基尼"<<endl;
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
