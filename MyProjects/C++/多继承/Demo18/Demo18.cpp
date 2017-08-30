// Demo18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

// 析构是构造的逆向过程
class A
{
	int *p;
public:
	A()
	{
		p=new int;
		cout<<"aaaaaaaaaaaaaaaaaa"<<endl;
	}
	~A()
	{
		delete p;
		cout<<"aaaaaaaaaaaaaaaa"<<endl;
	}
};

class B
{
	int *p;
public:
	B()
	{
		p=new int;
		cout<<"bbbbbbbbbbbbbbbbbbbbb"<<endl;
	}
	~B()
	{
		delete p;
		cout<<"bbbbbbbbbbbbbbbbbbbbbb"<<endl;
	}
};

class C
{
	int *p;
public:
	C()
	{
		p=new int;
		cout<<"ccccccccccccccccccccccc"<<endl;
	}
	~C()
	{
		delete p;
		cout<<"cccccccccccccccccccccccccc"<<endl;
	}
};

class D
{
	int *p;
public:
	D()
	{
		p=new int;
		cout<<"ddddddddddddddddddddd"<<endl;
	}
	~D()
	{
		delete p;
		cout<<"dddddddddddddddddddddd"<<endl;
	}
};

class E:public A,public B
{
	C c;
	D d;
	int *p;
public:
	E()
	{
		p=new int;
		cout<<"eeeeeeeeeeeeeeeeeeeeeeeee"<<endl;
	}
	~E()
	{
		delete p;
		cout<<"eeeeeeeeeeeeeeeeeeeeeeeee"<<endl;
	}
};

void main()
{
	
    cout<<endl;
	cout<<"开始构造"<<endl;
	E *p=new E;
	cout<<"析构调用"<<endl;
	delete p;

	cout<<"构造函数调用顺序"<<endl;
	E e;
	cout<<endl<<endl;
	cout<<"析构函数调用顺序"<<endl;

}