// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;

	void f()
	{
		//本类内部直接访问
		cout<<x<<endl;
		cout<<"aaaaaaaaaa"<<endl;
	}
};

class B:public A//继承来访问
{
public:
	void ff()
	{
		x=5;
		f();
	}
};


void main()
{
	A a;//通过对象来访问
	a.x=3;
	a.f();

	B b;
	b.ff();
}

