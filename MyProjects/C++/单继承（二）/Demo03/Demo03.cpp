// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//派生组合类的调用顺序问题
//首先调用基类的构造函数，然后对象成员类的构造函数，最后调用本类的构造函数

class A
{
public:
	A()
	{
		cout<<"1111111111111"<<endl;
	}
};

class B
{
public:
	B()
	{
		cout<<"2222222222222"<<endl;
	}
};

class C
{
public:
	C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
	}
};

class D
{
public:
	D()
	{
		cout<<"dddddddddddddddddd"<<endl;
	}
};

class E:public A,public B
{
	C c;
	D d;
public:
	E()
	{
		cout<<"eeeeeeeeeeeeeeeeeee"<<endl;
	}
};


void main()
{
	E e;

}