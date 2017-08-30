// Demo09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"

class A
{
public:
	int x;
	A(int x)
	{
		this->x=x;
	}
	A(){}

	A* operator->()
	{
		return this;
	}
};

class B
{
	A a;
public:
	B(){}
	B(A a)
	{
		this->a=a;
	}

	A operator->()
	{
		return a;
	}
};

void main()
{
	A a(30);
	B b(a);
	int x=b->x;//����ָ������⣬��ǰ��ָ��ֻ��ָ����ĳ�Ա�����ڵ�ָ��ָ����Ǳ���ĳ�Ա�ĳ�Ա
	cout<<x<<endl;
}