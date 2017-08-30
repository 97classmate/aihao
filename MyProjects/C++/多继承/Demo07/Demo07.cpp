// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//在混合关系中，首先析构本身，然后析构对象成员，然后析构基类对象，析构基类成员和基类对象的顺序和声明的顺序正好相反
class A
{
public:
	~A()
	{
		cout<<"aaaaaaaaaaaaaaaa"<<endl;
	}
};
class B
{
public:
	~B()
	{
		cout<<"bbbbbbbbbbbbbbbbbb"<<endl;
	}
};

class C
{
public:
	~C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
	}
};
class D
{
public:
	~D()
	{
		cout<<"ddddddddddddddddddddd"<<endl;
	}
};

class E:public A,public B
{
	C c;
	D d;
public:
	~E()
	{
		cout<<"eeeeeeeeeeeeeeeeeeeeeee"<<endl;
	}

};


void main()
{
	E e;
}
