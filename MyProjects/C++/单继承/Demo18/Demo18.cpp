// Demo18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
class A
{
public:
	A()
	{
		cout<<"aaaaaaaaaaaaaaaaaaa"<<endl;
	}
};


class B
{
public:
	B()
	{
		cout<<"bbbbbbbbbbbbbbb"<<endl;
	}
};

class C
{
public:
	C()
	{
		cout<<"cccccccccccccccc"<<endl;
	}
};
//讲述如果多继承的情况，派生类调用多个基类构造函数的顺序，根据继承的顺序从左到右
class D:public C,public B,public A
{
public:
	D()
	{
		cout<<"dddddddddddddd"<<endl;
	}
};

void main()
{
	D d;
}