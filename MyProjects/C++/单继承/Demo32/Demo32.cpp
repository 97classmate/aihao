// Demo29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"


//组合类中，对象析构顺序的问题，先析构本身，谁最后析构谁
class A
{
public:
	~A()
	{
		cout<<"111111111111111111111"<<endl;
	}
};

class B
{
public:
	~B()
	{
		cout<<"222222222222222222222"<<endl;
	}
};

class C
{
public:
	~C()
	{
		cout<<"333333333333333333333"<<endl;
	}
};

class D

{
	A a;
	B b;
	C c;
public:
	~D()
	{
		cout<<"444444444444444444444"<<endl;
	}
};


void main()
{
	D d;
}



