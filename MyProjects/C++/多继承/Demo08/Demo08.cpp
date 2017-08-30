// Demo05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

//在混合关系中，首先析构本身，然后析构对象成员，然后析构基类对象，析构基类成员和基类对象的顺序和声明的顺序正好相反
//每一个类中有一个指针类型的成员，构造的时候开辟空间，走的时候要释放空间才
class A
{
	int *p;
public:
	A()
	{
		cout<<"11111111111111111"<<endl;
		p=new int;
	}
	~A()
	{
		cout<<"aaaaaaaaaaaaaaaa"<<endl;
		delete p;
	}
};
class B
{
	int *p;
public:
	B()
	{
		cout<<"2222222222222222222222"<<endl;
		
		p=new int;
	}
	~B()
	{
		cout<<"bbbbbbbbbbbbbbbbbb"<<endl;
		delete p;
	}
};

class C
{
	int *p;
public:
	C()
	{
		cout<<"3333333333333333333333333"<<endl;
     	p=new int;
	}
	~C()
	{
		cout<<"ccccccccccccccccccc"<<endl;
		delete p;
	}
};
class D
{
	int *p;
public:
	D()
	{
		cout<<"444444444444444444444444444"<<endl;
		p=new int;
	}
	~D()
	{
		cout<<"ddddddddddddddddddddd"<<endl;
		delete p;
	}
};

class E:public A,public B
{
	int *p;
	C c;
	D d;
public:
	E()
	{
		cout<<"555555555555555555555555"<<endl;
		p=new int;
	}
	~E()
	{
		cout<<"eeeeeeeeeeeeeeeeeeeeeee"<<endl;
		delete p;
	}

};


void main()
{
	E e;
	
}
