// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//派生类调用了基类的构造函数
class A
{
public:
	int *p;
public:
	A()
	{
		cout<<"1111111111111"<<endl;
		p=new int(11);
	}
};

class B:public A
{
	int *p2;
public:
	B()
	{
		cout<<"2222222222222"<<endl;
		p2=new int(22);
		cout<<*p<<":"<<*p2<<endl;
	}
};


void main()
{
	B b;
}