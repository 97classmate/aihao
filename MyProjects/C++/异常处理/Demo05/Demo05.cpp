// Demo05.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "iostream.h"

// catch(...)  捕获所有异常
class A
{
public:
	void f()
	{
		cout<<"aaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	void f()
	{
		cout<<"bbbbbbbbb"<<endl;
	}
};

class C
{
public:
	void f()
	{
		cout<<"ccccccccccc"<<endl;
	}
};

class D
{
public:
	void f()
	{
		cout<<"dddddddd"<<endl;
	}
};

class E
{
public:
	void f()
	{
		cout<<"eeeeeeeee"<<endl;
	}
};  


void main()
{
	try
	{
		A a;
		B b;
		C c;
		D d;
		E e;
		int x;
		cin>>x;
		if(x==4)
			throw a;
		if(x==44)
			throw b;
		if(x==444)
			throw c;
		if(x==4444)
			throw d;
		if(x==44444)
			throw e;
	}
	catch(A a)
	{
		a.f();
	}
	catch(B b)
	{
	    b.f();
	}
	//一般情况下，在抛出异常和捕获异常的时间，我们应该尽可能的分类
                                   
	catch(...)//捕获异常要放在所有catch的最后
	{
		cout<<"所有异常对象"<<endl;
	}
}