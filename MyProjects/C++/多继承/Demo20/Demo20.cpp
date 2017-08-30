// Demo20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//子类和父类拥有同名的二义性，我们可以通过与运算符进行解决
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	void f()
	{
		cout<<"bbbbbbbbbbbbbbbbbbb"<<endl;
	}
};

class C:public A,public B
{

};

void main()
{
	C c;
	c.A::f();
	c.B::f();
}