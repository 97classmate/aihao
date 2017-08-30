// Demo22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	~A()
	{
		cout<<"A类的析构函数"<<endl;
	}
};

class B
{
public:
	~B()
	{
		cout<<"B类的析构函数"<<endl;
	}
};

class C
{
public:
	~C()
	{
		cout<<"C类的析构函数"<<endl;
	}
};


//首先析构本身，然后析构基类，基类析构的顺序和继承顺序相反，先继承，后析构
class D:public A,public B,public C
{
public:
	~D()
	{
		cout<<"D类的析构函数"<<endl;
	}
};



void main()
{
	D d;
}