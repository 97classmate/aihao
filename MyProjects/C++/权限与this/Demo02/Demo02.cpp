// Demo02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	void f()
	{
		cout<<"aaaaaaaaaaaaa"<<endl;
	}

	//第一种形式，本类内部直接访问本类的成员
	void ff()
	{
		x=33;
		f();
	}
};

class B: public A
{
public:
	//第二种访问形式，派生类直接访问
	void f3()
	{
		x=44;
		ff();
	}
};
//第三种访问形式，在外面直接访问
class C
{
public:
	void f4()
	{
		A a;
		a.f();
		a.x=55;
	}
};


void main()
{
	A a;
	B b;
	C c;
	a.ff();
	b.f3();
	c.f4();


//可以在其他函数中直接访问，属于第三种访问形式
	a.f();

}






