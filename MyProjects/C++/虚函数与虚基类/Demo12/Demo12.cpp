// Demo12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"1"<<endl;
	}
};

class B
{
public:
	B()
	{
		cout<<"666666"<<endl;
	}
};

class C
{
public:
	C()
	{
		cout<<"2"<<endl;
	}
};
//首先调用纯虚类的构造函数
//然后调用继承的构造函数
//最后调用自己的构造函数
class D:public B,public C,virtual public A
{
public:
	D()
	{
		cout<<"3"<<endl;
	}
};

void main()
{

}
