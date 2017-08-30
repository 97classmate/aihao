// Demo13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
	int a;
public:
	A(){}
	A(int a)
	{
		cout<<"1"<<endl;
		this->a=a;

	}
};

class B:virtual A
{
	int b;
public:
	B(){}
	B(int b)
	{
		cout<<"2"<<endl;
		this->b=b;
	}
};

class C:virtual public A
{
	int c;
public:
	C(){}
	C(int c)
	{
		cout<<"3"<<endl;
		this->c=c;
	}
};
//虚基类的构造函数可以优先执行
class D:public B,public C
{
	int d;
public:
	D(){}//调用默认的虚基类的构造函数
	//直接可以调用虚基类
	D(int a,int b,int c,int d):B(b),C(c),A(a)
	{
		cout<<"4"<<endl;
		this->d=d;

	}
};

void main()
{
	D d;
	D d2(1,2,3,4);
}