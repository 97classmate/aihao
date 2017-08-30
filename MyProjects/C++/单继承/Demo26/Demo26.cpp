// Demo26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"11111111111111"<<endl;
	}
};

class B
{
public:
	B()
	{
		cout<<"22222222222222"<<endl;
	}
};
//继承子类对象的构造关系
class C:public A
{
	B b;
public:
	C()
	{
		cout<<"333333333333333333"<<endl;
	}
};


void main()
{
	C c;
	
}
