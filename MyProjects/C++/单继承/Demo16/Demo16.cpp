// Demo16.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
	int x;
public:
	A(int x)
	{
		cout<<"A类的带参数的构造函数"<<endl;
		this->x=x;
	}
	A()
	{
		cout<<"A类不带参数的构造函数"<<endl;
	}
};

class B:public A
{
	int y;
public:
	B(int x,int y):A(x)
	{
		cout<<"B类的带参数的构造函数"<<endl;
		this->y=y;
	}
	B()
	{
		cout<<"B类不带参数的构造函数"<<endl;
	}
};

class C:public B
{
	int z;
public:
	C(int x,int y,int z):B(x,y)
	{
		cout<<"C类带参数的构造函数"<<endl;
		this->z=z;
	}
	C()
	{
		cout<<"C类不带参数的构造函数"<<endl;
	}
};


void main()
{
	C c;
	C c2(1,2,3);
}