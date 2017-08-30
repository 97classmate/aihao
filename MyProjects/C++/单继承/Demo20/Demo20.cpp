// Demo20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	A()
	{
		cout<<"aaaaaaaaaa"<<endl;
	}
};

class B
{
public:
	B()
	{
		cout<<"bbbbbbbbbbbbbbbbbb"<<endl;
	}
};
//首先调用基类的构造函数
//其次调用包含成员的构造函数
//最后调用本类的构造函数
class C:public B
{
	A a;
public:
	C()
	{
		cout<<"ccccccccccccccc"<<endl;
	}
};



void main()
{
     C c;
}