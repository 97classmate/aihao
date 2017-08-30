// Demo01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//混合类的构造函数的调用顺序，首先调用基类的构造函数，基类构造函数的调用顺序和继承的顺序一致
//然后调用对象成员的构造函数，对象成员构造函数和声明的顺序一致
//最后调用本类的构造函数
class A
{
public:

	A()
	{
		cout<<"aaaaaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	
	B()
	{
		cout<<"bbbbbbbbbbbbbbbbb"<<endl;
	}

	
};
class C
{
public:
	C()
	{
		cout<<"CCCCCCCCCCCCCCCCCCCCC"<<endl;
	}
};
class D
{
public:
	D()
	{
		cout<<"DDDDDDDDDDDDDDDDDDDDDDDDD"<<endl;
	}
};

class E:public A,public B
{
	C c;
	D d;
public:
	
	E()
	{
		cout<<"eeeeeeeeeeeeeeeeeeeeeeeeeeeee"<<endl;
	}
};


void main()
{
	E e;
}