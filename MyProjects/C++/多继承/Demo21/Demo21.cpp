// Demo21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// 拥有相同基类的情况，基类如果在内存中有多份的话，可以通过域运算符的限定来进行解决，但是这种情况下有数据的冗余
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaaaaaaaaaa"<<endl;
	}
};

class B:public A
{

};

class C:public A
{
};

class D:public B,public C
{
};

void main()
{
	D d;
	//d.f();
	d.B::f();
	d.C::f();
}