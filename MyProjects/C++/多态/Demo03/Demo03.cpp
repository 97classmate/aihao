// Demo03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream.h"
//�û����ָ��ָ��������Ĳ�ͬ�Ķ��󣬽���ʵ�ֶ�̬����
class A
{
public:
	virtual void f()//��д�ĺ�������Ϊvirtual 
	{
		cout<<"1"<<endl;
	}
};

class B:public A
{
public:
	void f()//��д��������д����ķ���
	{
		cout<<"2"<<endl;
	}
};

class C:public A
{
public:
	void f()
	{
	cout<<"3"<<endl;
	}
};

class D:public A
{
public:
	void f()
	{
		cout<<"4"<<endl;
	}
};


void main()
{
	A *a;
	B b;
	C c;
	D d;

	a=&b;
	a->f();

	a=&c;
	a->f();
	
	a=&d;
	a->f();
}