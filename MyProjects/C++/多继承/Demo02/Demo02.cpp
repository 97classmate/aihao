// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//当一个类中包含对象的时候，对象成员的构造函数和声明的顺序问题
class A
{
public:

	A()
	{
		cout<<"aaaaaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	
	B()
	{
		cout<<"bbbbbbbbbbbbbbbbb"<<endl;
	}

	
};

class C
{
	A a;
	B b;
public:
	
	C()
	{
		cout<<"ccccccccccccccc"<<endl;
	}
};


void main()
{
	C c;
}