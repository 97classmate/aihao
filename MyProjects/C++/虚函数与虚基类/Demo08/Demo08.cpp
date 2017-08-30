// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1();
	virtual void f2();//Ðéº¯Êý	
	virtual void f3()=0;//´¿Ðéº¯Êý   
};

void A::f1()
{
	cout<<"1111111111111111"<<endl;
}

void A::f2()
{
	cout<<"22222222222222222"<<endl;
}

class B:public A 
{
public:
	void f3();

};

void B::f3()
{
	cout<<"3333333333333333333"<<endl;
}

void main()
{
	A *a=new B();
	a->f1();
	a->f2();
	a->f3();
	delete a;
}
