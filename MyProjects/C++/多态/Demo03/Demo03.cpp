// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//用基类的指针指向派生类的不同的对象，进而实现动态联编
class A
{
public:
	virtual void f()//重写的函数声明为virtual 
	{
		cout<<"1"<<endl;
	}
};

class B:public A
{
public:
	void f()//重写，父类重写基类的方法
	{
		cout<<"2"<<endl;
	}
};

class C:public A
{
public:
	void f()
	{
	cout<<"3"<<endl;
	}
};

class D:public A
{
public:
	void f()
	{
		cout<<"4"<<endl;
	}
};


void main()
{
	A *a;
	B b;
	C c;
	D d;

	a=&b;
	a->f();

	a=&c;
	a->f();
	
	a=&d;
	a->f();
}