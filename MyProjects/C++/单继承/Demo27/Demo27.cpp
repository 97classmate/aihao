// Demo26.cpp : Defines the entry point for the console application.
//
//讲述析构对象的析构对象
#include "stdafx.h"
#include "iostream.h"

//讲述子类对象的析构顺序，先析构本身，再析构对象成员，再析构基类对象
class A
{
public:
	~A()
	{
		cout<<"11111111111111"<<endl;
	}
};

class B
{
public:
	~B()
	{
		cout<<"22222222222222"<<endl;
	}
};

class C:public A
{
	B b;
public:
	~C()
	{
		cout<<"333333333333333333"<<endl;
	}
};


void main()
{
	C c;
	
}
