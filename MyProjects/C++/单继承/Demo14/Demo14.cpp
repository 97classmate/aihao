// Demo14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"A的构造函数"<<endl;
	}
};
class B:public A
{
public:
	B()
	{
		cout<<"B的构造函数"<<endl;
	}
};

//派生类的构造函数一定会调用基类的构造函数，派生类的不带参数的构造函数调用基类的不带参数的构造函数
class C:public B
{
	C()
	{
		cout<<"C的构造函数"<<endl;
	}
};

void main()
{
	B b;//把A的内容也继承过来了
}
