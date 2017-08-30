// Demo06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f()
	{
		cout<<"1111111111"<<endl;
	}
};

class B:virtual public A
{
};

class C:virtual public A
{
};

class D:public B,public C
{};

void main()
{
	D d;
	d.f();
	d.B::f();
	d.C::f();
}