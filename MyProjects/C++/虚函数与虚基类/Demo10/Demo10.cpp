// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//二义性的问题
class A
{
public:
	void f()
	{
		cout<<"aa"<<endl;
	}
};


class B:virtual public A
{
};

class C:virtual public A
{
};

class D:public B,public C
{};

void main()
{
	D d;
	d.f();
}
