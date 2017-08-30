// Demo08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int x;
	int y;
public:
	A()
	{
		x=3;
		y=4;
	}
	//this的第二种形式使用，本质是作为函数的参数
	A f()
	{
		return *this;
	}

	void disp()
	{
		cout<<x<<":"<<y<<endl;
	}
};


void main()
{

	A a;
	A b=a.f();
	b.disp();

}