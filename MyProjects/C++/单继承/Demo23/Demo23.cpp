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

class C
{
public:
	~C()
	{
		cout<<"C类的析构函数"<<endl;
	}
};


//首先析构本身，然后析构所包含的成员，成员析构的熟悉和声明的顺序相反，先声明，后析构
class D
{
	//组合类 的析构
	A a;
	B b;
    C c;
	
public:
	~D()
	{
		cout<<"D类的析构函数"<<endl;
	}
};



void main()
{
	D d;
}