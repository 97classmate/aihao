// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// 在析构函数中，先析构本身再析构基类
class A
{
public:
	~A()
	{
		cout<<"aaaaaaaaaaaaaaaa"<<endl;
	}
};
class B
{
public:
	~B()
	{
		cout<<"bbbbbbbbbbbbbbbbbb"<<endl;
	}
};

class C:public A,public B
{
public:
	~C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
	}
};

void main()
{
	C c;
}
