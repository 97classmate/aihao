// Demo04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"11111111111111111111111111"<<endl;
	}

	virtual f2()
	{
		cout<<"22222222222222"<<endl;
	}
	virtual void f3()=0;// ´¿Ðéº¯Êý
};
 
class B:public A
{
public:
	void f3()
	{
		cout<<"33333333"<<endl;
	}
};

void main()
{
	B b;
	b.f1();
	b.f2();
	b.f3();
}