// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A(A &a)
	{
		cout<<"被调用"<<endl;
	}

	void f(A a)//参数调用
	{
	}

	A f2()//引用的调用
	{
		A a;
		return a;
	}
	A f3(A a)
	{
		return a;
	}

	A(){}
};

void main()
{
	A a1;//初始化的时候被调用拷贝构造函数
	A a2(a1);//初始化的时候调用拷贝构造函数
	A a3=a1;

	A a4;
	a1.f(a1);//通过参数调用

	a1.f2();//通过返回值调用

	a1.f3(a4);//参数和返回值
}