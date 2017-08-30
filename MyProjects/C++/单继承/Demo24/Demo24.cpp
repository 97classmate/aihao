// Demo22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	~A()
	{
		cout<<"A类的析构函数"<<endl;
	}
};

class B
{
public:
	~B()
	{
		cout<<"B类的析构函数"<<endl;
	}
};



//首先析构本身，然后析构本类包含的成员，然后析构基类
//讲述的是继承组合类的析构顺序问题
class C:public A
{
	B c;
public:
	~C()
	{
		cout<<"C类的析构函数"<<endl;
	}
};



void main()
{
	C c;
}