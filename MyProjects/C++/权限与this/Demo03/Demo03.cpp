// Demo03.cpp : Defines the entry point for the console application.
//
//protected 例子
#include "stdafx.h"
#include "iostream.h"

class A
{
protected:
	int x;
	void f()
	{
		//在本类内部访问
		x=44;
		cout<<x<<endl;
		cout<<"aaaaaaaa"<<endl;
	}

};

class B: public A
{
public:
	void ff()
	{
		//派生类访问
		f();
	}
};

void main()
{
	A a;
	B b;

	
	//a.f();protected 不可以拿到外面来使用
	b.ff();
}