// Demo19.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"aaaaaaaaaaaaaaa"<<endl;
	}
};

//组合类构造函数的调用情况,首先生成组合类的对象，然后才调用本类的构造函数
class B
{
public:
	B()
	{
		cout<<"bbbbbbbbbbbbbbbbbbb"<<endl;
	}
};


class C
{
	A a;
	B b;
public:
	C()
	{
		cout<<"cccccccccccccccccc"<<endl;
	}
};


void main()
{
	C c;
}




