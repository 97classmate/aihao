// Demo01.cpp : Defines the entry point for the console application.
//

//在继承的时候子类调用构造函数的问题
#include "stdafx.h"
#include "iostream.h"

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

class C:public A,public B
{
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