// Demo10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	void f1()
	{
		cout<<"common funtcion"<<endl;
	}
	static void f2()
	{
		cout<<"static funtcion"<<endl;
	}
};

void main()
{
	static A a;//静态对象既可以调用函数也可以调用非静态函数
	a.f1();
	a.f2();
}