// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//派生类调用了基类的构造函数
class A
{
public:
	A()
	{
		cout<<"1111111111111"<<endl;
	}
};

class B:public A
{
public:
	B()
	{
		cout<<"2222222222222"<<endl;
	}
};


void main()
{
	B b;
}