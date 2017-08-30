// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"aaaaaaaaaaa"<<endl;
	}

	static void f2()
	{
		cout<<"static"<<endl;
	}
};

void main()
{
	A a1;
	a1.f1();//非静态函数只能通过对象来访问
	a1.f2();
	A::f2();//静态函数可以通过对象和类名访问
}