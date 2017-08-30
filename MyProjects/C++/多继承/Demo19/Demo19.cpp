// Demo19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//单继承的二义性不会错误，但是会默认的调用本类的成员，本类 的成员拥有优先权限，如果想调用基类成员的话
//则通过::(域运算符)进行限定
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaaaaaaaaaaaaaaa"<<endl;
	}
};

class B:public A
{
public:
	void f()
	{
		cout<<"Bbbbbbbbbbbbbbb"<<endl;
	}
};

class C:public B
{
public:
	void f()
	{
		cout<<"ccccccccccccccc"<<endl;
	}
};


void main()
{
	C c;
	c.f();
	c.A::f();
	c.B::f();
}



